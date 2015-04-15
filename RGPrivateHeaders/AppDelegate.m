//
//  AppDelegate.m
//  RGPrivateHeaders
//
//  Created by Ryan Dignard on 4/14/15.
//  Copyright (c) 2015 RyanDignard. All rights reserved.
//

#import "AppDelegate.h"
#import <RestGoatee/NSObject+RG_SharedImpl.h>
#import <objc/runtime.h>

#define FILE_DIR "/Users/dignar/Desktop/RGPrivateHeaders/headers/"

#ifndef FILE_DIR
    #define FILE_DIR "./"
#endif

void indent_n_times(const char* indent, long count, FILE* file) {
    for (; count; count--) {
        fputs(indent, file);
    }
}

@implementation AppDelegate
@synthesize window = _window;

- (UIWindow*)window {
    if (!_window) {
        _window = [[UIWindow alloc] initWithFrame:[UIScreen mainScreen].bounds];
    }
    return _window;
}


- (BOOL)application:(UIApplication*)application didFinishLaunchingWithOptions:(NSDictionary*)launchOptions {
    dispatch_after(dispatch_time(DISPATCH_TIME_NOW, (int64_t)(4 * NSEC_PER_SEC)), dispatch_get_main_queue(), ^{
        [self crap];
        self.window.backgroundColor = [UIColor whiteColor];
    });
    [self.window makeKeyAndVisible];
    return YES;
}

- (void)crap {
    uint32_t count;
    Class* classList = objc_copyClassList(&count);
    for (NSUInteger i = 0; i < count; i++) {
        Class superclass = class_getSuperclass(classList[i]);
        if (superclass && [classList[i] respondsToSelector:NSSelectorFromString(@"retain")]) {
            [classList[i] performSelector:NSSelectorFromString(@"retain")];
        }
    }
    
    for (NSUInteger i = 0; i < count; i++) {
        __weak Class cls = classList[i];
        
        // constant strings
        const char* const extension = ".h";
        const char* const declaration = "@interface ";
        const char* const superclass_sep = " : ";
        const char* const protocol_decl = "@protocol ";
        const char* const protocol_begin = " <";
        const char* const protocol_sep = ", ";
        const char* const protocol_end = ">";
        const char* const class_decls_begin = " {";
        const char* const class_decls_end = "}";
        const char* const property_decl = "@property (";
        const char* const property_attr_end = ") ";
        const char* const class_end = "@end";
        const char* const line_end = ";";
        const char* const newline = "\n";
        const char* const indent = "    ";
        
        // name of file to create
        const char* className = class_getName(cls);
        char* filename = malloc(sizeof(char) * (strlen(FILE_DIR) + strlen(className) + strlen(extension) + 1));
        strcpy(filename, FILE_DIR);
        strcat(filename, className);
        strcat(filename, extension);
        
        // prepare file pointer for write
        FILE* output = fopen(filename, "w");
        free(filename);
        fputs(newline, output);
        NSUInteger indentCount = 0;
        
        // get class superclass and class protocol list
        const char* superclass = class_getName(class_getSuperclass(cls));
        __unsafe_unretained Protocol** protocols = class_copyProtocolList(cls, NULL);
        
        // forward declare any protocols
        if (protocols) {
            fputs(protocol_decl, output);
            for (NSUInteger j = 0; protocols[j]; j++) {
                Protocol* protocol = protocols[j];
                fputs(protocol_getName(protocol), output);
                if (protocols[j + 1]) {
                    fputs(protocol_sep, output);
                } else {
                    fputs(line_end, output);
                }
            }
            fputs(newline, output);
        }
        
        // begin class preamble
        fputs(declaration, output);
        fputs(className, output);
        if (superclass && strlen(superclass)) {
            fputs(superclass_sep, output);
            fputs(superclass, output);
        }
        if (protocols) {
            fputs(protocol_begin, output);
            for (NSUInteger j = 0; protocols[j]; j++) {
                Protocol* protocol = protocols[j];
                fputs(protocol_getName(protocol), output);
                if (protocols[j + 1]) {
                    fputs(protocol_sep, output);
                } else {
                    fputs(protocol_end, output);
                }
            }
        }
        fputs(class_decls_begin, output);
        indentCount++;
        fputs(newline, output);
        fputs(newline, output);
        free(protocols);
        
        // write any ivars
        Ivar* ivars = class_copyIvarList(cls, NULL);
        for (NSUInteger j = 0; ivars && ivars[j]; j++) {
            Ivar ivar = ivars[j];
            indent_n_times(indent, indentCount, output);
            const char* variableType = [self typeForEncoding:ivar_getTypeEncoding(ivar)];
            const char* variableName = ivar_getName(ivar);
            fputs(variableType, output);
            fputs(" ", output);
            fputs(variableName, output);
            fputs(line_end, output);
            fputs(newline, output);
        }
        free(ivars);
        indentCount--;
        fputs(class_decls_end, output);
        fputs(newline, output);
        
        // write properties
        if (superclass && strlen(superclass) && strcmp(superclass, "NSObject") == 0) {
            for (NSDictionary* propertyDecl in [cls __property_list__]) {
                if (topClassDeclaringPropertyNamed(cls, propertyDecl[kRGPropertyName]) == cls) {
                    fputs(property_decl, output);
                    if (!propertyDecl[kRGPropertyAtomicType]) {
                        
                    }
                    fputs([propertyDecl[kRGPropertyAtomicType] UTF8String], output);
                    fputs(protocol_sep, output);
                    fputs([propertyDecl[kRGPropertyStorage] UTF8String], output);
                    fputs(protocol_sep, output);
                    fputs([propertyDecl[kRGPropertyAccess] UTF8String], output);
                    if (propertyDecl[kRGPropertyGetter]) {
                        fputs(protocol_sep, output);
                        fputs([propertyDecl[kRGPropertyGetter] UTF8String], output);
                    }
                    if (propertyDecl[kRGPropertySetter]) {
                        fputs(protocol_sep, output);
                        fputs([propertyDecl[kRGPropertySetter] UTF8String], output);
                    }
                    fputs(property_attr_end, output);
                    
                    id type = propertyDecl[kRGPropertyClass] ?: propertyDecl[kRGPropertyRawType];
                    fputs([[type description] UTF8String], output);
                    if (propertyDecl) {
                        fputs("*", output);
                    }
                    fputs(" ", output);
                    
                    fputs([propertyDecl[kRGPropertyName] UTF8String], output);
                    fputs(line_end, output);
                    fputs(newline, output);
                }
            }
        }
        
        //write class methods
        Method* methods = class_copyMethodList(object_getClass(cls), NULL);
        for (NSUInteger j = 0; methods && methods[j]; j++) {
            Method method = methods[j];
            fputs(" + (", output);
            char* return_type = method_copyReturnType(method);
            fputs([self typeForEncoding:return_type], output);
            free(return_type);
            fputs(") ", output);
            NSString* methodName = [NSString stringWithUTF8String:sel_getName(method_getName(method))];
            uint32_t k = 2;
            char c = 'a';
            for (NSString* component in [methodName componentsSeparatedByString:@":"]) {
                if (!component.length) continue;
                fputs([component UTF8String], output);
                if (method_getNumberOfArguments(method) > 2) {
                    fputs(":", output);
                    fputs("(", output);
                    char* argumentType = method_copyArgumentType(method, k);
                    fputs([self typeForEncoding:argumentType], output);
                    free(argumentType);
                    fputs(")", output);
                    fputc(c, output);
                    c++;
                    k++;
                }
            }
            fputs(line_end, output);
            fputs(newline, output);
        }
        fputs(newline, output);
        
        //write instance methods
        methods = class_copyMethodList(cls, NULL);
        for (NSUInteger j = 0; methods && methods[j]; j++) {
            Method method = methods[j];
            fputs(" - (", output);
            char* return_type = method_copyReturnType(method);
            fputs([self typeForEncoding:return_type], output);
            free(return_type);
            fputs(") ", output);
            NSString* methodName = [NSString stringWithUTF8String:sel_getName(method_getName(method))];
            uint32_t k = 2;
            char c = 'a';
            for (NSString* component in [methodName componentsSeparatedByString:@":"]) {
                if (!component.length) continue;
                fputs([component UTF8String], output);
                if (method_getNumberOfArguments(method) > 2) {
                    fputs(":", output);
                    fputs("(", output);
                    char* argumentType = method_copyArgumentType(method, k);
                    fputs([self typeForEncoding:argumentType], output);
                    free(argumentType);
                    fputs(")", output);
                    fputc(c, output);
                    c++;
                    k++;
                }
            }
            fputs(line_end, output);
            fputs(newline, output);
        }
        fputs(newline, output);
        
        // end file
        fputs(newline, output);
        fputs(class_end, output);
        fputs(newline, output);
        fclose(output);
        
    }
}

- (const char*)typeForEncoding:(const char*)encoding {
    if (encoding && strlen(encoding) == 1) {
        switch (encoding[0]) {
            case ':':
                return "SEL";
            case '@':
                return "id";
            case 'v':
                return "void";
            case 'B':
                return "BOOL";
            case '#':
                return "Class";
        }
    }
    return encoding;
}

@end
