
@protocol NSCopying, NSCoding;
@interface UIFontDescriptor : NSObject <NSCopying, NSCoding> {

    @"NSMutableDictionary" _attributes;
    id _reserved1;
    id _reserved2;
    id _reserved3;
    id _reserved4;
    id _reserved5;
}
@property (nonatomic, assign, readonly) NSString* postscriptName;
@property (nonatomic, assign, readonly) NSNumber* pointSize;
@property (nonatomic, assign, readonly) NSNumber* matrix;
@property (nonatomic, assign, readonly) NSNumber* symbolicTraits;
 + (BOOL) supportsSecureCoding;
 + (id) defaultFontDescriptorWithTextStyle:(id)aaddingSymbolicTraits:(unsigned int)boptions:(unsigned long long)c;
 + (id) preferredFontDescriptorWithTextStyle:(id)aaddingSymbolicTraits:(unsigned int)boptions:(unsigned long long)c;
 + (id) _createMungledDictionary:(id)a;
 + (id) fontDescriptorWithFontAttributes:(id)a;
 + (id) preferredFontDescriptorWithTextStyle:(id)a;
 + (id) defaultFontDescriptorWithTextStyle:(id)a;
 + (id) fontDescriptorWithName:(id)asize:(double)b;
 + (id) fontDescriptorWithName:(id)amatrix:({CGAffineTransform=dddddd})b;

 - (Class) classForCoder;
 - (id) copyWithZone:(^{_NSZone=})a;
 - (id) description;
 - (void) dealloc;
 - (id) objectForKey:(id)a;
 - (id) init;
 - (void) encodeWithCoder:(id)a;
 - (id) initWithCoder:(id)a;
 - (double) pointSize;
 - (id) _attributes;
 - (id) _initWithFontAttributes:(id)aoptions:(unsigned long long)b;
 - (id) initWithFontAttributes:(id)a;
 - (id) postscriptName;
 - ({CGAffineTransform=dddddd}) matrix;
 - (id) fontDescriptorWithSize:(double)a;
 - (id) fontDescriptorWithMatrix:({CGAffineTransform=dddddd})a;
 - (id) fontDescriptorWithFace:(id)a;
 - (id) _visibleName;
 - (id) fontDescriptorByAddingAttributes:(id)a;
 - (id) fontAttributes;
 - (id) matchingFontDescriptorsWithMandatoryKeys:(id)a;
 - (id) matchingFontDescriptorWithMandatoryKeys:(id)a;
 - (unsigned int) symbolicTraits;
 - (id) fontDescriptorWithSymbolicTraits:(unsigned int)a;
 - (id) fontDescriptorWithFamily:(id)a;


@end
