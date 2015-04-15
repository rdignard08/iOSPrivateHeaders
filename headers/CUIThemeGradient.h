
@protocol CUIThemeGradientDrawing;
@interface CUIThemeGradient : NSObject <CUIThemeGradientDrawing> {

    id gradientEvaluator;
    ^{CGFunction=} colorShader;
    ^{CGColorSpace=} colorSpace;
}

 - (void) dealloc;
 - (i) blendMode;
 - (id) colorStops;
 - (id) opacityStops;
 - (d) smoothingCoefficient;
 - (BOOL) isDithered;
 - (void) drawInRect:({CGRect={CGPoint=dd}{CGSize=dd}})aangle:(d)bwithContext:(^{CGContext=})c;
 - (void) drawInRect:({CGRect={CGPoint=dd}{CGSize=dd}})arelativeCenterPosition:({CGPoint=dd})bwithContext:(^{CGContext=})c;
 - (void) drawInRect:({CGRect={CGPoint=dd}{CGSize=dd}})aangle:(d)b;
 - ({_psdGradientColor=dddd}) _psdGradientColorWithColor:(id)acolorSpace:(^{CGColorSpace=})b;
 - (id) initWithColors:(id)acolorlocations:(id)bcolorMidpoints:(id)copacities:(id)dopacityLocations:(id)eopacityMidpoints:(id)fsmoothingCoefficient:(d)gfillColor:(id)hcolorSpace:(^{CGColorSpace=})idither:(BOOL)j;
 - (id) _psdGradientColorStopsWithColors:(id)alocations:(id)bcolorSpace:(^{CGColorSpace=})c;
 - (id) _psdGradientOpacityStopsWithOpacities:(id)alocations:(id)b;
 - (id) _initWithGradientEvaluator:(id)acolorSpace:(^{CGColorSpace=})b;
 - (id) _colorFromPSDGradientColor:({_psdGradientColor=dddd})a;
 - (void) drawFromPoint:({CGPoint=dd})atoPoint:({CGPoint=dd})boptions:(Q)cwithContext:(^{CGContext=})d;
 - (^{CGFunction=}) _newColorShaderForDistance:(d)a;
 - (^{CGFunction=}) colorShader;
 - (id) interpolatedColorAtLocation:(d)a;
 - (id) initWithColors:(id)acolorlocations:(id)bcolorMidpoints:(id)copacities:(id)dopacityLocations:(id)eopacityMidpoints:(id)fsmoothingCoefficient:(d)gfillColor:(id)hcolorSpace:(^{CGColorSpace=})i;
 - (id) colorLocations;
 - (id) opacityLocations;
 - (void) drawFromPoint:({CGPoint=dd})atoPoint:({CGPoint=dd})boptions:(Q)c;
 - (id) fillColor;


@end
