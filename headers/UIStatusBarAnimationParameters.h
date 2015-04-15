
@interface UIStatusBarAnimationParameters : NSObject {

    double _duration;
    double _delay;
    long long _curve;
    <_UIBasicAnimationFactory> _animationFactory;
    double _startTime;
}
@property (nonatomic, assign, readwrite) NSNumber* duration;
@property (nonatomic, assign, readwrite) NSNumber* delay;
@property (nonatomic, assign, readwrite) NSNumber* curve;
@property (nonatomic, retain, readwrite) NSNumber* animationFactory;
@property (nonatomic, assign, readwrite) NSNumber* startTime;
 + (void) animateWithParameters:(id)afromCurrentState:(BOOL)banimations:(@?)ccompletion:(@?)d;
 + (void) animateWithParameters:(id)aanimations:(@?)bcompletion:(@?)c;
 + (void) animateWithParameters:(id)afromCurrentState:(BOOL)bframeInterval:(double)canimations:(@?)dcompletion:(@?)e;

 - (double) duration;
 - (void) dealloc;
 - (id) initWithDefaultParameters;
 - (void) setDelay:(double)a;
 - (void) setCurve:(long long)a;
 - (long long) curve;
 - (BOOL) shouldAnimate;
 - (id) initWithEmptyParameters;
 - (id) animationFactory;
 - (void) setAnimationFactory:(id)a;
 - (id) init;
 - (double) startTime;
 - (void) setStartTime:(double)a;
 - (double) delay;
 - (void) setDuration:(double)a;


@end
