
@protocol NSCopying;
@interface _UIGraphicsLetterpressStyle : NSObject <NSCopying> {

    i innerShadowBlendMode;
    i outerShadowBlendMode;
    @"UIColor" embossHighlightColor;
    @"UIColor" embossShadowColor;
    d embossSize;
    @"UIColor" innerShadowColor;
    d innerShadowBlur;
    @"UIColor" outerShadowColor;
    d outerShadowBlur;
    @"UIColor" topGradientColor;
    @"UIColor" bottomGradientColor;
    d innerOpacity;
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
 - (void) setEmbossSize:(d)a;
 - (void) setInnerShadowColor:(id)a;
 - (void) setInnerShadowOffset:({CGPoint=dd})a;
 - (void) setInnerShadowBlur:(d)a;
 - (void) setInnerShadowBlendMode:(i)a;
 - (void) setOuterShadowColor:(id)a;
 - (void) setOuterShadowOffset:({CGPoint=dd})a;
 - (void) setOuterShadowBlur:(d)a;
 - (void) setOuterShadowBlendMode:(i)a;
 - (void) setTopGradientColor:(id)a;
 - (void) setBottomGradientColor:(id)a;
 - (void) setInnerOpacity:(d)a;
 - (id) embossHighlightColor;
 - (id) embossShadowColor;
 - (d) embossSize;
 - (id) innerShadowColor;
 - ({CGPoint=dd}) innerShadowOffset;
 - (d) innerShadowBlur;
 - (i) innerShadowBlendMode;
 - (id) outerShadowColor;
 - ({CGPoint=dd}) outerShadowOffset;
 - (d) outerShadowBlur;
 - (i) outerShadowBlendMode;
 - (id) topGradientColor;
 - (id) bottomGradientColor;
 - (d) innerOpacity;
 - ({UIEdgeInsets=dddd}) edgeInsets;


@end
