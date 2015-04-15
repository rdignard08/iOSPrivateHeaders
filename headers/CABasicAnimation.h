
@interface CABasicAnimation : CAPropertyAnimation {

}
 + (id) normalizedAnimationWithKeyPath:(id)afromValue:(id)btoValue:(id)c;

 - (void) setRoundsToInteger:(BOOL)a;
 - (void) setStartAngle:(d)a;
 - (id) fromValue;
 - (id) toValue;
 - (id) byValue;
 - (void) setFromValue:(id)a;
 - (void) CA_prepareRenderValue;
 - (BOOL) _setCARenderAnimation:(^{Animation=^^?{Atomic={?=i}}f{Ref<CA::Render::Timing>=^{Timing}}{Ref<CA::Render::Vector>=^{Vector}}^vIIII})alayer:(id)b;
 - (^{Animation=^^?{Atomic={?=i}}f{Ref<CA::Render::Timing>=^{Timing}}{Ref<CA::Render::Vector>=^{Vector}}^vIIII}) _copyRenderAnimationForLayer:(id)a;
 - (void) applyForTime:(d)apresentationObject:(id)bmodelObject:(id)c;
 - (BOOL) roundsToInteger;
 - (d) startAngle;
 - (d) endAngle;
 - (d) _timeFunction:(d)a;
 - (void) setByValue:(id)a;
 - (void) setEndAngle:(d)a;
 - (void) setToValue:(id)a;


@end
