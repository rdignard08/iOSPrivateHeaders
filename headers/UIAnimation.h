
@interface UIAnimation : NSObject {

    id _target;
    SEL _action;
    id _delegate;
    @? _completion;
    {?="curve"b4"tvOutput"b1"useNSTimer"b1} _animationFlags;
    double _startTime;
    double _duration;
    int _state;
}

 - (id) target;
 - (id) initWithTarget:(id)a ;
 - (void) setProgress:(float)a ;
 - (void) dealloc;
 - (void) setDelegate:(id)a ;
 - (SEL) action;
 - (void) setAnimationCurve:(int)a ;
 - (void) setUsesNSTimer:(BOOL)a ;
 - (void) setAction:(SEL)a ;
 - (float) fractionForTime:(double)a ;
 - (void) markStop;
 - (@?) completion;
 - (void) setCompletion:(@?)a ;
 - (void) markStart:(double)a ;
 - (float) progressForFraction:(float)a ;
 - (void) stopAnimation;
 - (BOOL) usesNSTimer;
 - (int) state;
 - (id) delegate;
 - (int) type;
 - (void) setDuration:(double)a ;


@end
