
@interface CAKeyframeAnimation : CAPropertyAnimation {

}
 + (id) normalizedKeyframeAnimationWithKeyPath:(id)a;

 - (void) setPath:(^{CGPath=})a ;
 - (^{CGPath=}) path;
 - (void) setCalculationMode:(id)a ;
 - (void) CA_prepareRenderValue;
 - (BOOL) _setCARenderAnimation:(^{Animation=^^?{Atomic={?=i}}f{Ref<CA::Render::Timing>=^{Timing}}{Ref<CA::Render::Vector>=^{Vector}}^vIIII})a layer:(id)b ;
 - (^{Animation=^^?{Atomic={?=i}}f{Ref<CA::Render::Timing>=^{Timing}}{Ref<CA::Render::Vector>=^{Vector}}^vIIII}) _copyRenderAnimationForLayer:(id)a ;
 - (void) applyForTime:(double)a presentationObject:(id)b modelObject:(id)c ;
 - (id) calculationMode;
 - (id) values;
 - (id) keyTimes;
 - (id) timingFunctions;
 - (id) tensionValues;
 - (id) continuityValues;
 - (id) biasValues;
 - (id) rotationMode;
 - (void) setTensionValues:(id)a ;
 - (void) setContinuityValues:(id)a ;
 - (void) setBiasValues:(id)a ;
 - (void) setRotationMode:(id)a ;
 - (void) setValues:(id)a ;
 - (void) setKeyTimes:(id)a ;
 - (void) setTimingFunctions:(id)a ;


@end
