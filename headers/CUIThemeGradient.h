
@protocol CUIThemeGradientDrawing;
@interface CUIThemeGradient : NSObject <CUIThemeGradientDrawing> {

    id gradientEvaluator;
    ^{CGFunction=} colorShader;
    ^{CGColorSpace=} colorSpace;
}

 - (void) dealloc;
 - (int) blendMode;
 - (id) colorStops;
 - (id) opacityStops;
 - (double) smoothingCoefficient;
 - (BOOL) isDithered;
 - (void) drawInRect:({CGRect={CGPoint=dd}{CGSize=dd}})aangle:(double)bwithContext:(^{CGContext=})c;
 - (void) drawInRect:({CGRect={CGPoint=dd}{CGSize=dd}})arelativeCenterPosition:({CGPoint=dd})bwithContext:(^{CGContext=})c;
 - (void) drawInRect:({CGRect={CGPoint=dd}{CGSize=dd}})aangle:(double)b;
 - ({_psdGradientColor=dddd}) _psdGradientColorWithColor:(id)acolorSpace:(^{CGColorSpace=})b;
 - (id) initWithColors:(id)acolorlocations:(id)bcolorMidpoints:(id)copacities:(id)dopacityLocations:(id)eopacityMidpoints:(id)fsmoothingCoefficient:(double)gfillColor:(id)hcolorSpace:(^{CGColorSpace=})idither:(BOOL)j;
 - (id) _psdGradientColorStopsWithColors:(id)alocations:(id)bcolorSpace:(^{CGColorSpace=})c;
 - (id) _psdGradientOpacityStopsWithOpacities:(id)alocations:(id)b;
 - (id) _initWithGradientEvaluator:(id)acolorSpace:(^{CGColorSpace=})b;
 - (id) _colorFromPSDGradientColor:({_psdGradientColor=dddd})a;
 - (void) drawFromPoint:({CGPoint=dd})atoPoint:({CGPoint=dd})boptions:(unsigned long long)cwithContext:(^{CGContext=})d;
 - (^{CGFunction=}) _newColorShaderForDistance:(double)a;
 - (^{CGFunction=}) colorShader;
 - (id) interpolatedColorAtLocation:(double)a;
 - (id) initWithColors:(id)acolorlocations:(id)bcolorMidpoints:(id)copacities:(id)dopacityLocations:(id)eopacityMidpoints:(id)fsmoothingCoefficient:(double)gfillColor:(id)hcolorSpace:(^{CGColorSpace=})i;
 - (id) colorLocations;
 - (id) opacityLocations;
 - (void) drawFromPoint:({CGPoint=dd})atoPoint:({CGPoint=dd})boptions:(unsigned long long)c;
 - (id) fillColor;


@end
