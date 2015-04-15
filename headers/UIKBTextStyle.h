
@protocol NSCopying;
@interface UIKBTextStyle : NSObject <NSCopying> {

    NSString* _fontName;
    double _fontSize;
    double _minFontSize;
    double _kerning;
    double _textOpacity;
    NSString* _textColor;
    NSString* _etchColor;
    double _pathWeight;
    long long _selector;
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
 + (id) styleWithFontName:(id)awithFontSize:(double)b;
 + (id) styleWithTextColor:(id)a;

 - (id) copyWithZone:(^{_NSZone=})a ;
 - (long long) selector;
 - (id) description;
 - (void) dealloc;
 - (BOOL) isEqual:(id)a ;
 - (void) setTextColor:(id)a ;
 - (id) textColor;
 - (void) setMinFontSize:(double)a ;
 - (double) minFontSize;
 - (void) setFontSize:(double)a ;
 - (void) setTextOffset:({CGPoint=dd})a ;
 - (void) setPathWeight:(double)a ;
 - ({CGPoint=dd}) textOffset;
 - (void) setKerning:(double)a ;
 - (void) setTextOpacity:(double)a ;
 - (double) kerning;
 - (double) textOpacity;
 - (id) etchColor;
 - ({CGPoint=dd}) etchOffset;
 - (double) pathWeight;
 - (void) setEtchColor:(id)a ;
 - (void) setEtchOffset:({CGPoint=dd})a ;
 - (void) overlayWithStyle:(id)a ;
 - (id) init;
 - (void) setSelector:(long long)a ;
 - (id) fontName;
 - (void) setFontName:(id)a ;
 - (double) fontSize;


@end
