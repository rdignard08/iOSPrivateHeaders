
@interface UIDragger : NSObject {

    ^? _interpolator;
    UIView* _target;
    id _delegate;
    SEL _action;
    {CGPoint="x"d"y"d} _startLocation;
    {CGPoint="x"d"y"d} _stopLocation;
    double _duration;
    BOOL _showFinger;
    unsigned int _port;
    NSArray* _modes;
    unsigned long long _startTimestamp;
    unsigned long long _stopTimestamp;
    unsigned long long _lastTimestamp;
    BOOL _waitingForSmoothScrolling;
    UIImageView* _fingerView;
}

 - (void) dealloc;
 - (void) setDelegate:(id)a;
 - (void) setTarget:(id)a;
 - (void) setAction:(SEL)a;
 - (void) setStartLocation:({CGPoint=dd})a;
 - (void) dragDidEnd;
 - (void) _postMouseEvent:(int)atimestamp:(unsigned long long)blocation:({CGPoint=dd})c;
 - (void) _continueDrag:(id)a;
 - (double) _delayUntilNextEvent;
 - (void) _stopDrag:(id)a;
 - (void) setInterpolation:(^?)a;
 - (void) setStopLocation:({CGPoint=dd})a;
 - (void) showFinger;
 - (void) _smoothScrollingWillStart:(id)a;
 - (void) _smoothScrollingDidEnd:(id)a;
 - (id) init;
 - (void) run;
 - (void) setDuration:(double)a;


@end
