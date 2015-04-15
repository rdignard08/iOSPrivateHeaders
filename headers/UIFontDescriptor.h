
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
 + (id) defaultFontDescriptorWithTextStyle:(id)aaddingSymbolicTraits:(I)boptions:(Q)c;
 + (id) preferredFontDescriptorWithTextStyle:(id)aaddingSymbolicTraits:(I)boptions:(Q)c;
 + (id) _createMungledDictionary:(id)a;
 + (id) fontDescriptorWithFontAttributes:(id)a;
 + (id) preferredFontDescriptorWithTextStyle:(id)a;
 + (id) defaultFontDescriptorWithTextStyle:(id)a;
 + (id) fontDescriptorWithName:(id)asize:(d)b;
 + (id) fontDescriptorWithName:(id)amatrix:({CGAffineTransform=dddddd})b;

 - (Class) classForCoder;
 - (id) copyWithZone:(^{_NSZone=})a;
 - (id) description;
 - (void) dealloc;
 - (id) objectForKey:(id)a;
 - (id) init;
 - (void) encodeWithCoder:(id)a;
 - (id) initWithCoder:(id)a;
 - (d) pointSize;
 - (id) _attributes;
 - (id) _initWithFontAttributes:(id)aoptions:(Q)b;
 - (id) initWithFontAttributes:(id)a;
 - (id) postscriptName;
 - ({CGAffineTransform=dddddd}) matrix;
 - (id) fontDescriptorWithSize:(d)a;
 - (id) fontDescriptorWithMatrix:({CGAffineTransform=dddddd})a;
 - (id) fontDescriptorWithFace:(id)a;
 - (id) _visibleName;
 - (id) fontDescriptorByAddingAttributes:(id)a;
 - (id) fontAttributes;
 - (id) matchingFontDescriptorsWithMandatoryKeys:(id)a;
 - (id) matchingFontDescriptorWithMandatoryKeys:(id)a;
 - (I) symbolicTraits;
 - (id) fontDescriptorWithSymbolicTraits:(I)a;
 - (id) fontDescriptorWithFamily:(id)a;


@end
