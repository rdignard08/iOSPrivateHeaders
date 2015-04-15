
@interface UIAnimator : NSObject {

    @"NSMutableArray" _animations;
    double _lastUpdateTime;
    [3@] _heartbeat;
    [3i] _heartbeatClientCount;
}
 + (void) disableAnimation;
 + (void) enableAnimation;
 + (id) sharedAnimator;

 - (void) dealloc;
 - (void) removeAnimationsForTarget:(id)aofKind:(Class)b;
 - (void) addAnimation:(id)awithDuration:(double)bstart:(BOOL)c;
 - (void) stopAnimation:(id)a;
 - (void) _addAnimation:(id)awithDuration:(double)bstart:(BOOL)cstartTime:(double)d;
 - (void) _startAnimation:(id)awithStartTime:(double)b;
 - (void) addAnimations:(id)awithDuration:(double)bstart:(BOOL)c;
 - (void) removeAnimationsForTarget:(id)a;
 - (void) startAnimation:(id)a;
 - (float) fractionForAnimation:(id)a;
 - (void) _advanceAnimationsOfType:(int)awithTimestamp:(double)b;
 - (void) _TimerHeartbeatCallback:(id)a;
 - (void) _TVHeartbeatCallback:(id)a;
 - (void) _LCDHeartbeatCallback:(id)a;
 - (BOOL) _isRunningAnimation:(id)a;


@end
