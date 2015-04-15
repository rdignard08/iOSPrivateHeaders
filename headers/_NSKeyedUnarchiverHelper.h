
@interface _NSKeyedUnarchiverHelper : NSObject {

    NSArray* _white;
    unsigned int _lastRef;
    NSMutableArray* _allowedClasses;
}

 - (id) allowedClassNames;
 - (void) setAllowedClassNames:(id)a;
 - (BOOL) classNameAllowed:(Class)a;
 - (void) dealloc;
 - (id) init;


@end
