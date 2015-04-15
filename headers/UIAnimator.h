
@interface UIAnimator : NSObject {

    NSMutableArray* _animations;
    double _lastUpdateTime;
    [3@] _heartbeat;
    [3i] _heartbeatClientCount;
}
 + (void) disableAnimation;
 + (void) enableAnimation;
 + (id) sharedAnimator;

 - (void) dealloc;
 - (void) removeAnimationsForTarget:(id)a ofKind:(Class)b ;
 - (void) addAnimation:(id)a withDuration:(double)b start:(BOOL)c ;
 - (void) stopAnimation:(id)a ;
 - (void) _addAnimation:(id)a withDuration:(double)b start:(BOOL)c startTime:(double)d ;
 - (void) _startAnimation:(id)a withStartTime:(double)b ;
 - (void) addAnimations:(id)a withDuration:(double)b start:(BOOL)c ;
 - (void) removeAnimationsForTarget:(id)a ;
 - (void) startAnimation:(id)a ;
 - (float) fractionForAnimation:(id)a ;
 - (void) _advanceAnimationsOfType:(int)a withTimestamp:(double)b ;
 - (void) _TimerHeartbeatCallback:(id)a ;
 - (void) _TVHeartbeatCallback:(id)a ;
 - (void) _LCDHeartbeatCallback:(id)a ;
 - (BOOL) _isRunningAnimation:(id)a ;


@end
