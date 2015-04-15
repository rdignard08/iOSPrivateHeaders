
@interface CUIPSDGradient : NSObject {

    @"CUIPSDGradientEvaluator" evaluator;
    d drawingAngle;
    I gradientStyle;
}
@property (atomic, retain, readwrite) CUIPSDGradientEvaluator* evaluator;
@property (atomic, assign, readwrite) NSNumber* drawingAngle;
@property (atomic, assign, readwrite) NSNumber* gradientStyle;
 + (id) getMidpointLocationFromArray:(id)aatIndex:(q)bwithPolicy:(i)c;
 + (id) cuiPSDGradientWithColors:(id)alocations:(id)bmidpointLocations:(id)cangle:(d)disRadial:(BOOL)e;

 - (void) dealloc;
 - (id) evaluator;
 - (I) gradientStyle;
 - (d) drawingAngle;
 - (id) initWithEvaluator:(id)adrawingAngle:(d)bgradientStyle:(I)c;
 - (void) setEvaluator:(id)a;
 - (void) setDrawingAngle:(d)a;
 - (void) setGradientStyle:(I)a;


@end
