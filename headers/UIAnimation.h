
@interface UIAnimation : NSObject {

    id _target;
    SEL _action;
    id _delegate;
    @? _completion;
    {?="curve"b4"tvOutput"b1"useNSTimer"b1} _animationFlags;
    d _startTime;
    d _duration;
    i _state;
}

 - (id) target;
 - (id) initWithTarget:(id)a;
 - (void) setProgress:(f)a;
 - (void) dealloc;
 - (void) setDelegate:(id)a;
 - (SEL) action;
 - (void) setAnimationCurve:(i)a;
 - (void) setUsesNSTimer:(BOOL)a;
 - (void) setAction:(SEL)a;
 - (f) fractionForTime:(d)a;
 - (void) markStop;
 - (@?) completion;
 - (void) setCompletion:(@?)a;
 - (void) markStart:(d)a;
 - (f) progressForFraction:(f)a;
 - (void) stopAnimation;
 - (BOOL) usesNSTimer;
 - (i) state;
 - (id) delegate;
 - (i) type;
 - (void) setDuration:(d)a;


@end
