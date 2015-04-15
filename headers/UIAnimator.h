
@interface UIAnimator : NSObject {

    @"NSMutableArray" _animations;
    d _lastUpdateTime;
    [3@] _heartbeat;
    [3i] _heartbeatClientCount;
}
 + (void) disableAnimation;
 + (void) enableAnimation;
 + (id) sharedAnimator;

 - (void) dealloc;
 - (void) removeAnimationsForTarget:(id)aofKind:(Class)b;
 - (void) addAnimation:(id)awithDuration:(d)bstart:(BOOL)c;
 - (void) stopAnimation:(id)a;
 - (void) _addAnimation:(id)awithDuration:(d)bstart:(BOOL)cstartTime:(d)d;
 - (void) _startAnimation:(id)awithStartTime:(d)b;
 - (void) addAnimations:(id)awithDuration:(d)bstart:(BOOL)c;
 - (void) removeAnimationsForTarget:(id)a;
 - (void) startAnimation:(id)a;
 - (f) fractionForAnimation:(id)a;
 - (void) _advanceAnimationsOfType:(i)awithTimestamp:(d)b;
 - (void) _TimerHeartbeatCallback:(id)a;
 - (void) _TVHeartbeatCallback:(id)a;
 - (void) _LCDHeartbeatCallback:(id)a;
 - (BOOL) _isRunningAnimation:(id)a;


@end
