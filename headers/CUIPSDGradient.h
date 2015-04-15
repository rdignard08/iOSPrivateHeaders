
@interface CUIPSDGradient : NSObject {

    CUIPSDGradientEvaluator evaluator;
    double drawingAngle;
    unsigned int gradientStyle;
}
@property (atomic, retain, readwrite) CUIPSDGradientEvaluator* evaluator;
@property (atomic, assign, readwrite) NSNumber* drawingAngle;
@property (atomic, assign, readwrite) NSNumber* gradientStyle;
 + (id) getMidpointLocationFromArray:(id)aatIndex:(long long)bwithPolicy:(int)c;
 + (id) cuiPSDGradientWithColors:(id)alocations:(id)bmidpointLocations:(id)cangle:(double)disRadial:(BOOL)e;

 - (void) dealloc;
 - (id) evaluator;
 - (unsigned int) gradientStyle;
 - (double) drawingAngle;
 - (id) initWithEvaluator:(id)adrawingAngle:(double)bgradientStyle:(unsigned int)c;
 - (void) setEvaluator:(id)a;
 - (void) setDrawingAngle:(double)a;
 - (void) setGradientStyle:(unsigned int)a;


@end
