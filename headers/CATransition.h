
@interface CATransition : CAAnimation {

}

 - (void) setType:(id)a ;
 - (void) setTransitionFlags:(unsigned int)a ;
 - (void) setFilter:(id)a ;
 - (id) type;
 - (void) setOptions:(id)a ;
 - (id) options;
 - (void) setSubtype:(id)a ;
 - (BOOL) _setCARenderAnimation:(^{Animation=^^?{Atomic={?=i}}f{Ref<CA::Render::Timing>=^{Timing}}{Ref<CA::Render::Vector>=^{Vector}}^vIIII})a layer:(id)b ;
 - (unsigned int) _propertyFlagsForLayer:(id)a ;
 - (^{Animation=^^?{Atomic={?=i}}f{Ref<CA::Render::Timing>=^{Timing}}{Ref<CA::Render::Vector>=^{Vector}}^vIIII}) _copyRenderAnimationForLayer:(id)a ;
 - (id) filter;
 - (id) subtype;
 - (float) startProgress;
 - (float) endProgress;
 - (unsigned int) transitionFlags;
 - (void) setStartProgress:(float)a ;
 - (void) setEndProgress:(float)a ;


@end
