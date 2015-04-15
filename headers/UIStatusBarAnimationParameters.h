
@interface UIStatusBarAnimationParameters : NSObject {

    d _duration;
    d _delay;
    q _curve;
    @"<_UIBasicAnimationFactory>" _animationFactory;
    d _startTime;
}
@property (nonatomic, assign, readwrite) NSNumber* duration;
@property (nonatomic, assign, readwrite) NSNumber* delay;
@property (nonatomic, assign, readwrite) NSNumber* curve;
@property (nonatomic, retain, readwrite) NSNumber* animationFactory;
@property (nonatomic, assign, readwrite) NSNumber* startTime;
 + (void) animateWithParameters:(id)afromCurrentState:(BOOL)banimations:(@?)ccompletion:(@?)d;
 + (void) animateWithParameters:(id)aanimations:(@?)bcompletion:(@?)c;
 + (void) animateWithParameters:(id)afromCurrentState:(BOOL)bframeInterval:(d)canimations:(@?)dcompletion:(@?)e;

 - (d) duration;
 - (void) dealloc;
 - (id) initWithDefaultParameters;
 - (void) setDelay:(d)a;
 - (void) setCurve:(q)a;
 - (q) curve;
 - (BOOL) shouldAnimate;
 - (id) initWithEmptyParameters;
 - (id) animationFactory;
 - (void) setAnimationFactory:(id)a;
 - (id) init;
 - (d) startTime;
 - (void) setStartTime:(d)a;
 - (d) delay;
 - (void) setDuration:(d)a;


@end
