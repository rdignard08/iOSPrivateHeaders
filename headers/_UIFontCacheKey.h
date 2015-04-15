
@protocol NSCopying;
@interface _UIFontCacheKey : NSObject <NSCopying> {

    i _traits;
    @"NSString" _fontName;
    d _pointSize;
    @"NSString" _textStyle;
    @"NSString" _contentSizeCategory;
    @"UIFontDescriptor" _fontDescriptor;
}
@property (nonatomic, copy, readwrite) NSString* fontName;
@property (nonatomic, assign, readwrite) NSNumber* traits;
@property (nonatomic, assign, readwrite) NSNumber* pointSize;
@property (nonatomic, copy, readwrite) NSString* textStyle;
@property (nonatomic, copy, readwrite) NSString* contentSizeCategory;
@property (nonatomic, copy, readwrite) UIFontDescriptor* fontDescriptor;
 + (id) fontCacheKeyWithFontName:(id)atraits:(i)bpointSize:(d)c;
 + (id) systemFontCacheKeyWithTraits:(i)apointSize:(d)b;
 + (id) fontCacheKeyWithTextStyle:(id)acontentSizeCategory:(id)b;
 + (id) fontCacheKeyWithFontDescriptor:(id)apointSize:(d)b;

 - (id) copyWithZone:(^{_NSZone=})a;
 - (id) description;
 - (void) dealloc;
 - (Q) hash;
 - (BOOL) isEqual:(id)a;
 - (d) pointSize;
 - (id) fontName;
 - (id) fontDescriptor;
 - (i) traits;
 - (void) setFontName:(id)a;
 - (void) setTraits:(i)a;
 - (void) setPointSize:(d)a;
 - (void) setTextStyle:(id)a;
 - (void) setContentSizeCategory:(id)a;
 - (void) setFontDescriptor:(id)a;
 - (id) textStyle;
 - (id) contentSizeCategory;


@end
