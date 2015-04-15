
@protocol NSCopying;
@interface _UIGraphicsLetterpressStyle : NSObject <NSCopying> {

    int innerShadowBlendMode;
    int outerShadowBlendMode;
    UIColor* embossHighlightColor;
    UIColor* embossShadowColor;
    double embossSize;
    UIColor* innerShadowColor;
    double innerShadowBlur;
    UIColor* outerShadowColor;
    double outerShadowBlur;
    UIColor* topGradientColor;
    UIColor* bottomGradientColor;
    double innerOpacity;
    {CGPoint="x"d"y"d} innerShadowOffset;
    {CGPoint="x"d"y"d} outerShadowOffset;
}
@property (nonatomic, retain, readwrite) UIColor* embossHighlightColor;
@property (nonatomic, retain, readwrite) UIColor* embossShadowColor;
@property (nonatomic, assign, readwrite) NSNumber* embossSize;
@property (nonatomic, retain, readwrite) UIColor* innerShadowColor;
@property (nonatomic, assign, readwrite) NSNumber* innerShadowOffset;
@property (nonatomic, assign, readwrite) NSNumber* innerShadowBlur;
@property (nonatomic, assign, readwrite) NSNumber* innerShadowBlendMode;
@property (nonatomic, retain, readwrite) UIColor* outerShadowColor;
@property (nonatomic, assign, readwrite) NSNumber* outerShadowOffset;
@property (nonatomic, assign, readwrite) NSNumber* outerShadowBlur;
@property (nonatomic, assign, readwrite) NSNumber* outerShadowBlendMode;
@property (nonatomic, retain, readwrite) UIColor* topGradientColor;
@property (nonatomic, retain, readwrite) UIColor* bottomGradientColor;
@property (nonatomic, assign, readwrite) NSNumber* innerOpacity;
@property (nonatomic, assign, readonly) NSNumber* edgeInsets;
 + (id) old2xLetterpressStyle;
 + (id) defaultLetterpressStyle;

 - (id) copyWithZone:(^{_NSZone=})a;
 - (void) dealloc;
 - (BOOL) isEqual:(id)a;
 - (void) setEmbossHighlightColor:(id)a;
 - (void) setEmbossShadowColor:(id)a;
 - (void) setEmbossSize:(double)a;
 - (void) setInnerShadowColor:(id)a;
 - (void) setInnerShadowOffset:({CGPoint=dd})a;
 - (void) setInnerShadowBlur:(double)a;
 - (void) setInnerShadowBlendMode:(int)a;
 - (void) setOuterShadowColor:(id)a;
 - (void) setOuterShadowOffset:({CGPoint=dd})a;
 - (void) setOuterShadowBlur:(double)a;
 - (void) setOuterShadowBlendMode:(int)a;
 - (void) setTopGradientColor:(id)a;
 - (void) setBottomGradientColor:(id)a;
 - (void) setInnerOpacity:(double)a;
 - (id) embossHighlightColor;
 - (id) embossShadowColor;
 - (double) embossSize;
 - (id) innerShadowColor;
 - ({CGPoint=dd}) innerShadowOffset;
 - (double) innerShadowBlur;
 - (int) innerShadowBlendMode;
 - (id) outerShadowColor;
 - ({CGPoint=dd}) outerShadowOffset;
 - (double) outerShadowBlur;
 - (int) outerShadowBlendMode;
 - (id) topGradientColor;
 - (id) bottomGradientColor;
 - (double) innerOpacity;
 - ({UIEdgeInsets=dddd}) edgeInsets;


@end
