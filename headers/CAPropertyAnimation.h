
@interface CAPropertyAnimation : CAAnimation {

}
 + (id) animationWithKeyPath:(id)a;

 - (id) keyPath;
 - (void) setKeyPath:(id)a;
 - (BOOL) _setCARenderAnimation:(^{Animation=^^?{Atomic={?=i}}f{Ref<CA::Render::Timing>=^{Timing}}{Ref<CA::Render::Vector>=^{Vector}}^vIIII})alayer:(id)b;
 - (I) _propertyFlagsForLayer:(id)a;
 - (void) applyForTime:(d)apresentationObject:(id)bmodelObject:(id)c;
 - (BOOL) isAdditive;
 - (BOOL) isCumulative;
 - (id) valueFunction;
 - (void) setCumulative:(BOOL)a;
 - (BOOL) additive;
 - (BOOL) cumulative;
 - (void) setAdditive:(BOOL)a;
 - (void) setValueFunction:(id)a;


@end
