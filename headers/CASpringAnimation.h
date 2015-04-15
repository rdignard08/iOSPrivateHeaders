
@interface CASpringAnimation : CABasicAnimation {

}
 + (id) defaultValueForKey:(id)a;

 - (void) setMass:(d)a;
 - (void) setStiffness:(d)a;
 - (d) durationForEpsilon:(d)a;
 - (d) stiffness;
 - (BOOL) _setCARenderAnimation:(^{Animation=^^?{Atomic={?=i}}f{Ref<CA::Render::Timing>=^{Timing}}{Ref<CA::Render::Vector>=^{Vector}}^vIIII})alayer:(id)b;
 - (I) _propertyFlagsForLayer:(id)a;
 - (^{Animation=^^?{Atomic={?=i}}f{Ref<CA::Render::Timing>=^{Timing}}{Ref<CA::Render::Vector>=^{Vector}}^vIIII}) _copyRenderAnimationForLayer:(id)a;
 - (d) _timeFunction:(d)a;
 - (f) _solveForInput:(f)a;
 - (d) velocity;
 - (void) setVelocity:(d)a;
 - (d) mass;
 - (d) damping;
 - (void) setDamping:(d)a;


@end
