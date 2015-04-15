
@interface CAAnimationGroup : CAAnimation {

}

 - (id) animations;
 - (void) setAnimations:(id)a ;
 - (void) CA_prepareRenderValue;
 - (unsigned int) _propertyFlagsForLayer:(id)a ;
 - (^{Animation=^^?{Atomic={?=i}}f{Ref<CA::Render::Timing>=^{Timing}}{Ref<CA::Render::Vector>=^{Vector}}^vIIII}) _copyRenderAnimationForLayer:(id)a ;
 - (void) setDefaultDuration:(double)a ;
 - (void) applyForTime:(double)a presentationObject:(id)b modelObject:(id)c ;


@end
