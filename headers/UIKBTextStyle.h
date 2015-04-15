
@protocol NSCopying;
@interface UIKBTextStyle : NSObject <NSCopying> {

    @"NSString" _fontName;
    d _fontSize;
    d _minFontSize;
    d _kerning;
    d _textOpacity;
    @"NSString" _textColor;
    @"NSString" _etchColor;
    d _pathWeight;
    q _selector;
    {CGPoint="x"d"y"d} _textOffset;
    {CGPoint="x"d"y"d} _etchOffset;
}
@property (nonatomic, retain, readwrite) NSString* fontName;
@property (nonatomic, assign, readwrite) NSNumber* fontSize;
@property (nonatomic, assign, readwrite) NSNumber* minFontSize;
@property (nonatomic, assign, readwrite) NSNumber* kerning;
@property (nonatomic, assign, readwrite) NSNumber* textOpacity;
@property (nonatomic, retain, readwrite) NSString* textColor;
@property (nonatomic, retain, readwrite) NSString* etchColor;
@property (nonatomic, assign, readwrite) NSNumber* textOffset;
@property (nonatomic, assign, readwrite) NSNumber* etchOffset;
@property (nonatomic, assign, readwrite) NSNumber* pathWeight;
@property (nonatomic, assign, readwrite) NSNumber* selector;
 + (id) styleWithFontName:(id)awithFontSize:(d)b;
 + (id) styleWithTextColor:(id)a;

 - (id) copyWithZone:(^{_NSZone=})a;
 - (q) selector;
 - (id) description;
 - (void) dealloc;
 - (BOOL) isEqual:(id)a;
 - (void) setTextColor:(id)a;
 - (id) textColor;
 - (void) setMinFontSize:(d)a;
 - (d) minFontSize;
 - (void) setFontSize:(d)a;
 - (void) setTextOffset:({CGPoint=dd})a;
 - (void) setPathWeight:(d)a;
 - ({CGPoint=dd}) textOffset;
 - (void) setKerning:(d)a;
 - (void) setTextOpacity:(d)a;
 - (d) kerning;
 - (d) textOpacity;
 - (id) etchColor;
 - ({CGPoint=dd}) etchOffset;
 - (d) pathWeight;
 - (void) setEtchColor:(id)a;
 - (void) setEtchOffset:({CGPoint=dd})a;
 - (void) overlayWithStyle:(id)a;
 - (id) init;
 - (void) setSelector:(q)a;
 - (id) fontName;
 - (void) setFontName:(id)a;
 - (d) fontSize;


@end
