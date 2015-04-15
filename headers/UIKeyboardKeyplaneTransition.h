
@interface UIKeyboardKeyplaneTransition : NSObject {

    d _currentProgress;
    d _liftOffProgress;
    d _finishProgress;
    d _finishDuration;
    d _finalTransitionStartTime;
    @"CADisplayLink" _displayLink;
    @"UIKBTree" _start;
    @"UIKBTree" _end;
    @"UIView" _startView;
    @"UIView" _endView;
    @? _completionBlock;
    @"<UIKeyboardKeyplaneTransitionDelegate>" _transitionDelegate;
    BOOL _initiallyAtEnd;
}
@property (atomic, copy, readwrite) NSNumber* completionBlock;
@property (nonatomic, assign, readwrite) NSNumber* transitionDelegate;
@property (nonatomic, assign, readwrite) NSNumber* initiallyAtEnd;
@property (nonatomic, assign, readonly) NSNumber* startHeight;
@property (nonatomic, assign, readonly) NSNumber* endHeight;

 - (@?) completionBlock;
 - (void) setCompletionBlock:(@?)a;
 - (void) dealloc;
 - (void) removeAllAnimations;
 - (id) transitionDelegate;
 - (d) startHeight;
 - (d) endHeight;
 - (void) finalizeTransition;
 - (void) updateWithProgress:(d)a;
 - (void) transitionToFinalState:(id)a;
 - (void) rebuildWithStartKeyplane:(id)astartView:(id)bendKeyplane:(id)cendView:(id)d;
 - (void) commitTransitionRebuild;
 - (void) finishWithProgress:(d)acompletionBlock:(@?)b;
 - (BOOL) canDisplayTransitionFromKeyplane:(id)atoKeyplane:(id)b;
 - (void) setTransitionDelegate:(id)a;
 - (BOOL) initiallyAtEnd;
 - (void) setInitiallyAtEnd:(BOOL)a;


@end
