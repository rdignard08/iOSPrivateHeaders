
@interface _UIGestureRecognizerTransformAnalyzer : NSObject {

    d _lowPassTranslationMagnitudeDelta;
    d _lowPassScaleDelta;
    d _lowPassRotationDelta;
    d _translationWeight;
    d _pinchingWeight;
    d _rotationWeight;
    i _dominantComponent;
}
@property (nonatomic, assign, readonly) NSNumber* dominantComponent;
@property (nonatomic, assign, readwrite) NSNumber* translationWeight;
@property (nonatomic, assign, readwrite) NSNumber* pinchingWeight;
@property (nonatomic, assign, readwrite) NSNumber* rotationWeight;

 - (void) reset;
 - (void) analyzeTouches:(id)a;
 - (d) translationWeight;
 - (void) setTranslationWeight:(d)a;
 - (d) pinchingWeight;
 - (void) setPinchingWeight:(d)a;
 - (d) rotationWeight;
 - (void) setRotationWeight:(d)a;
 - (i) dominantComponent;
 - (id) init;


@end
