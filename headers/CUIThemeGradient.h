
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
 - (void) drawInRect:({CGRect={CGPoint=dd}{CGSize=dd}})a angle:(double)b withContext:(^{CGContext=})c ;
 - (void) drawInRect:({CGRect={CGPoint=dd}{CGSize=dd}})a relativeCenterPosition:({CGPoint=dd})b withContext:(^{CGContext=})c ;
 - (void) drawInRect:({CGRect={CGPoint=dd}{CGSize=dd}})a angle:(double)b ;
 - ({_psdGradientColor=dddd}) _psdGradientColorWithColor:(id)a colorSpace:(^{CGColorSpace=})b ;
 - (id) initWithColors:(id)a colorlocations:(id)b colorMidpoints:(id)c opacities:(id)d opacityLocations:(id)e opacityMidpoints:(id)f smoothingCoefficient:(double)g fillColor:(id)h colorSpace:(^{CGColorSpace=})i dither:(BOOL)j ;
 - (id) _psdGradientColorStopsWithColors:(id)a locations:(id)b colorSpace:(^{CGColorSpace=})c ;
 - (id) _psdGradientOpacityStopsWithOpacities:(id)a locations:(id)b ;
 - (id) _initWithGradientEvaluator:(id)a colorSpace:(^{CGColorSpace=})b ;
 - (id) _colorFromPSDGradientColor:({_psdGradientColor=dddd})a ;
 - (void) drawFromPoint:({CGPoint=dd})a toPoint:({CGPoint=dd})b options:(unsigned long long)c withContext:(^{CGContext=})d ;
 - (^{CGFunction=}) _newColorShaderForDistance:(double)a ;
 - (^{CGFunction=}) colorShader;
 - (id) interpolatedColorAtLocation:(double)a ;
 - (id) initWithColors:(id)a colorlocations:(id)b colorMidpoints:(id)c opacities:(id)d opacityLocations:(id)e opacityMidpoints:(id)f smoothingCoefficient:(double)g fillColor:(id)h colorSpace:(^{CGColorSpace=})i ;
 - (id) colorLocations;
 - (id) opacityLocations;
 - (void) drawFromPoint:({CGPoint=dd})a toPoint:({CGPoint=dd})b options:(unsigned long long)c ;
 - (id) fillColor;


@end
