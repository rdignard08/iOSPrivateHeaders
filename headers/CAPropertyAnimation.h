
@interface CAPropertyAnimation : CAAnimation {

}
 + (id) animationWithKeyPath:(id)a;

 - (id) keyPath;
 - (void) setKeyPath:(id)a ;
 - (BOOL) _setCARenderAnimation:(^{Animation=^^?{Atomic={?=i}}f{Ref<CA::Render::Timing>=^{Timing}}{Ref<CA::Render::Vector>=^{Vector}}^vIIII})a layer:(id)b ;
 - (unsigned int) _propertyFlagsForLayer:(id)a ;
 - (void) applyForTime:(double)a presentationObject:(id)b modelObject:(id)c ;
 - (BOOL) isAdditive;
 - (BOOL) isCumulative;
 - (id) valueFunction;
 - (void) setCumulative:(BOOL)a ;
 - (BOOL) additive;
 - (BOOL) cumulative;
 - (void) setAdditive:(BOOL)a ;
 - (void) setValueFunction:(id)a ;


@end
