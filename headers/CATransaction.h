
@interface CATransaction : NSObject {

}
 + (@?) completionBlock;
 + (void) setCompletionBlock:(@?)a;
 + (void) lock;
 + (void) unlock;
 + (void) setValue:(id)aforKey:(id)b;
 + (void) synchronize;
 + (@?) animator;
 + (id) valueForKey:(id)a;
 + (void) begin;
 + (void) activate;
 + (void) setInputTime:(d)a;
 + (I) currentState;
 + (BOOL) disableActions;
 + (void) setDisableActions:(BOOL)a;
 + (d) commitTime;
 + (void) setCommitTime:(d)a;
 + (id) _implicitAnimationForLayer:(id)akeyPath:(id)b;
 + (void) commit;
 + (void) flush;
 + (d) animationDuration;
 + (id) animationTimingFunction;
 + (void) pushAnimator:(@?)a;
 + (void) popAnimator;
 + (void) setCommitHandler:(@?)a;
 + (void) activateBackground:(BOOL)a;
 + (BOOL) animatesFromModelValues;
 + (void) setAnimatesFromModelValues:(BOOL)a;
 + (d) inputTime;
 + (void) assertInactive;
 + (void) setAnimationDuration:(d)a;
 + (void) setAnimationTimingFunction:(id)a;



@end
