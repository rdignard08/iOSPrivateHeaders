
@interface UIKeyboardKeyplaneTransition : NSObject {

    double _currentProgress;
    double _liftOffProgress;
    double _finishProgress;
    double _finishDuration;
    double _finalTransitionStartTime;
    CADisplayLink* _displayLink;
    UIKBTree* _start;
    UIKBTree* _end;
    UIView* _startView;
    UIView* _endView;
    @? _completionBlock;
    <UIKeyboardKeyplaneTransitionDelegate>* _transitionDelegate;
    BOOL _initiallyAtEnd;
}
@property (atomic, copy, readwrite) NSNumber* completionBlock;
@property (nonatomic, assign, readwrite) NSNumber* transitionDelegate;
@property (nonatomic, assign, readwrite) NSNumber* initiallyAtEnd;
@property (nonatomic, assign, readonly) NSNumber* startHeight;
@property (nonatomic, assign, readonly) NSNumber* endHeight;

 - (@?) completionBlock;
 - (void) setCompletionBlock:(@?)a ;
 - (void) dealloc;
 - (void) removeAllAnimations;
 - (id) transitionDelegate;
 - (double) startHeight;
 - (double) endHeight;
 - (void) finalizeTransition;
 - (void) updateWithProgress:(double)a ;
 - (void) transitionToFinalState:(id)a ;
 - (void) rebuildWithStartKeyplane:(id)a startView:(id)b endKeyplane:(id)c endView:(id)d ;
 - (void) commitTransitionRebuild;
 - (void) finishWithProgress:(double)a completionBlock:(@?)b ;
 - (BOOL) canDisplayTransitionFromKeyplane:(id)a toKeyplane:(id)b ;
 - (void) setTransitionDelegate:(id)a ;
 - (BOOL) initiallyAtEnd;
 - (void) setInitiallyAtEnd:(BOOL)a ;


@end
