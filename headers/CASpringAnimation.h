
@interface CASpringAnimation : CABasicAnimation {

}
 + (id) defaultValueForKey:(id)a;

 - (void) setMass:(double)a ;
 - (void) setStiffness:(double)a ;
 - (double) durationForEpsilon:(double)a ;
 - (double) stiffness;
 - (BOOL) _setCARenderAnimation:(^{Animation=^^?{Atomic={?=i}}f{Ref<CA::Render::Timing>=^{Timing}}{Ref<CA::Render::Vector>=^{Vector}}^vIIII})a layer:(id)b ;
 - (unsigned int) _propertyFlagsForLayer:(id)a ;
 - (^{Animation=^^?{Atomic={?=i}}f{Ref<CA::Render::Timing>=^{Timing}}{Ref<CA::Render::Vector>=^{Vector}}^vIIII}) _copyRenderAnimationForLayer:(id)a ;
 - (double) _timeFunction:(double)a ;
 - (float) _solveForInput:(float)a ;
 - (double) velocity;
 - (void) setVelocity:(double)a ;
 - (double) mass;
 - (double) damping;
 - (void) setDamping:(double)a ;


@end
