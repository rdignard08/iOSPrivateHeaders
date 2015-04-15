
@interface CATransition : CAAnimation {

}

 - (void) setType:(id)a;
 - (void) setTransitionFlags:(I)a;
 - (void) setFilter:(id)a;
 - (id) type;
 - (void) setOptions:(id)a;
 - (id) options;
 - (void) setSubtype:(id)a;
 - (BOOL) _setCARenderAnimation:(^{Animation=^^?{Atomic={?=i}}f{Ref<CA::Render::Timing>=^{Timing}}{Ref<CA::Render::Vector>=^{Vector}}^vIIII})alayer:(id)b;
 - (I) _propertyFlagsForLayer:(id)a;
 - (^{Animation=^^?{Atomic={?=i}}f{Ref<CA::Render::Timing>=^{Timing}}{Ref<CA::Render::Vector>=^{Vector}}^vIIII}) _copyRenderAnimationForLayer:(id)a;
 - (id) filter;
 - (id) subtype;
 - (f) startProgress;
 - (f) endProgress;
 - (I) transitionFlags;
 - (void) setStartProgress:(f)a;
 - (void) setEndProgress:(f)a;


@end
