
@interface UIDragger : NSObject {

    ^? _interpolator;
    @"UIView" _target;
    id _delegate;
    SEL _action;
    {CGPoint="x"d"y"d} _startLocation;
    {CGPoint="x"d"y"d} _stopLocation;
    d _duration;
    BOOL _showFinger;
    I _port;
    @"NSArray" _modes;
    Q _startTimestamp;
    Q _stopTimestamp;
    Q _lastTimestamp;
    BOOL _waitingForSmoothScrolling;
    @"UIImageView" _fingerView;
}

 - (void) dealloc;
 - (void) setDelegate:(id)a;
 - (void) setTarget:(id)a;
 - (void) setAction:(SEL)a;
 - (void) setStartLocation:({CGPoint=dd})a;
 - (void) dragDidEnd;
 - (void) _postMouseEvent:(i)atimestamp:(Q)blocation:({CGPoint=dd})c;
 - (void) _continueDrag:(id)a;
 - (d) _delayUntilNextEvent;
 - (void) _stopDrag:(id)a;
 - (void) setInterpolation:(^?)a;
 - (void) setStopLocation:({CGPoint=dd})a;
 - (void) showFinger;
 - (void) _smoothScrollingWillStart:(id)a;
 - (void) _smoothScrollingDidEnd:(id)a;
 - (id) init;
 - (void) run;
 - (void) setDuration:(d)a;


@end
