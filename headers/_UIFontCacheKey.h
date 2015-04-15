
@protocol NSCopying;
@interface _UIFontCacheKey : NSObject <NSCopying> {

    int _traits;
    NSString* _fontName;
    double _pointSize;
    NSString* _textStyle;
    NSString* _contentSizeCategory;
    UIFontDescriptor* _fontDescriptor;
}
@property (nonatomic, copy, readwrite) NSString* fontName;
@property (nonatomic, assign, readwrite) NSNumber* traits;
@property (nonatomic, assign, readwrite) NSNumber* pointSize;
@property (nonatomic, copy, readwrite) NSString* textStyle;
@property (nonatomic, copy, readwrite) NSString* contentSizeCategory;
@property (nonatomic, copy, readwrite) UIFontDescriptor* fontDescriptor;
 + (id) fontCacheKeyWithFontName:(id)atraits:(int)bpointSize:(double)c;
 + (id) systemFontCacheKeyWithTraits:(int)apointSize:(double)b;
 + (id) fontCacheKeyWithTextStyle:(id)acontentSizeCategory:(id)b;
 + (id) fontCacheKeyWithFontDescriptor:(id)apointSize:(double)b;

 - (id) copyWithZone:(^{_NSZone=})a;
 - (id) description;
 - (void) dealloc;
 - (unsigned long long) hash;
 - (BOOL) isEqual:(id)a;
 - (double) pointSize;
 - (id) fontName;
 - (id) fontDescriptor;
 - (int) traits;
 - (void) setFontName:(id)a;
 - (void) setTraits:(int)a;
 - (void) setPointSize:(double)a;
 - (void) setTextStyle:(id)a;
 - (void) setContentSizeCategory:(id)a;
 - (void) setFontDescriptor:(id)a;
 - (id) textStyle;
 - (id) contentSizeCategory;


@end
