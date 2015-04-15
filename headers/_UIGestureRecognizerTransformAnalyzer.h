
@interface _UIGestureRecognizerTransformAnalyzer : NSObject {

    double _lowPassTranslationMagnitudeDelta;
    double _lowPassScaleDelta;
    double _lowPassRotationDelta;
    double _translationWeight;
    double _pinchingWeight;
    double _rotationWeight;
    int _dominantComponent;
}
@property (nonatomic, assign, readonly) NSNumber* dominantComponent;
@property (nonatomic, assign, readwrite) NSNumber* translationWeight;
@property (nonatomic, assign, readwrite) NSNumber* pinchingWeight;
@property (nonatomic, assign, readwrite) NSNumber* rotationWeight;

 - (void) reset;
 - (void) analyzeTouches:(id)a ;
 - (double) translationWeight;
 - (void) setTranslationWeight:(double)a ;
 - (double) pinchingWeight;
 - (void) setPinchingWeight:(double)a ;
 - (double) rotationWeight;
 - (void) setRotationWeight:(double)a ;
 - (int) dominantComponent;
 - (id) init;


@end
