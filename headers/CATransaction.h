
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
 + (void) setInputTime:(double)a;
 + (unsigned int) currentState;
 + (BOOL) disableActions;
 + (void) setDisableActions:(BOOL)a;
 + (double) commitTime;
 + (void) setCommitTime:(double)a;
 + (id) _implicitAnimationForLayer:(id)akeyPath:(id)b;
 + (void) commit;
 + (void) flush;
 + (double) animationDuration;
 + (id) animationTimingFunction;
 + (void) pushAnimator:(@?)a;
 + (void) popAnimator;
 + (void) setCommitHandler:(@?)a;
 + (void) activateBackground:(BOOL)a;
 + (BOOL) animatesFromModelValues;
 + (void) setAnimatesFromModelValues:(BOOL)a;
 + (double) inputTime;
 + (void) assertInactive;
 + (void) setAnimationDuration:(double)a;
 + (void) setAnimationTimingFunction:(id)a;



@end
