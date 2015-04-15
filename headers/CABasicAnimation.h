
@interface CABasicAnimation : CAPropertyAnimation {

}
 + (id) normalizedAnimationWithKeyPath:(id)afromValue:(id)btoValue:(id)c;

 - (void) setRoundsToInteger:(BOOL)a ;
 - (void) setStartAngle:(double)a ;
 - (id) fromValue;
 - (id) toValue;
 - (id) byValue;
 - (void) setFromValue:(id)a ;
 - (void) CA_prepareRenderValue;
 - (BOOL) _setCARenderAnimation:(^{Animation=^^?{Atomic={?=i}}f{Ref<CA::Render::Timing>=^{Timing}}{Ref<CA::Render::Vector>=^{Vector}}^vIIII})a layer:(id)b ;
 - (^{Animation=^^?{Atomic={?=i}}f{Ref<CA::Render::Timing>=^{Timing}}{Ref<CA::Render::Vector>=^{Vector}}^vIIII}) _copyRenderAnimationForLayer:(id)a ;
 - (void) applyForTime:(double)a presentationObject:(id)b modelObject:(id)c ;
 - (BOOL) roundsToInteger;
 - (double) startAngle;
 - (double) endAngle;
 - (double) _timeFunction:(double)a ;
 - (void) setByValue:(id)a ;
 - (void) setEndAngle:(double)a ;
 - (void) setToValue:(id)a ;


@end
