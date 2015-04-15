
@protocol UIViewControllerTransitionCoordinator;
@interface _UIViewControllerTransitionCoordinator : NSObject <UIViewControllerTransitionCoordinator> {

    @"_UIViewControllerTransitionContext" __mainContext;
    @"NSMutableArray" __alongsideAnimations;
    @"NSMutableArray" __alongsideAnimationViews;
    @"NSMutableArray" __alongsideCompletions;
    @"NSMutableArray" __interactiveChangeHandlers;
}
@property (nonatomic, assign, readwrite, _setMainContext:) _UIViewControllerTransitionContext* _mainContext;
@property (nonatomic, retain, readwrite, _setAlongsideAnimations:) NSMutableArray* _alongsideAnimations;
@property (nonatomic, retain, readwrite, _setAlongsideAnimationViews:) NSMutableArray* _alongsideAnimationViews;
@property (nonatomic, retain, readwrite, _setAlongsideCompletions:) NSMutableArray* _alongsideCompletions;
@property (nonatomic, retain, readwrite, _setInteractiveChangeHandlers:) NSMutableArray* _interactiveChangeHandlers;

 - (BOOL) isCancelled;
 - (void) dealloc;
 - (id) containerView;
 - (id) viewControllerForKey:(id)a;
 - (id) viewForKey:(id)a;
 - (BOOL) isInteractive;
 - (d) percentComplete;
 - (q) presentationStyle;
 - (BOOL) isRotating;
 - (BOOL) isAnimated;
 - (void) _setAlongsideAnimations:(id)a;
 - (id) _alongsideAnimations;
 - (BOOL) animateAlongsideTransition:(@?)acompletion:(@?)b;
 - (BOOL) animateAlongsideTransitionInView:(id)aanimation:(@?)bcompletion:(@?)c;
 - (d) transitionDuration;
 - (q) completionCurve;
 - (id) _alongsideAnimationViews;
 - (void) notifyWhenInteractionEndsUsingBlock:(@?)a;
 - (id) _mainContext;
 - (BOOL) initiallyInteractive;
 - ({CGAffineTransform=dddddd}) targetTransform;
 - (id) _alongsideAnimations:(BOOL)a;
 - (id) _alongsideCompletions:(BOOL)a;
 - (void) _applyBlocks:(id)areleaseBlocks:(@?)b;
 - (d) completionVelocity;
 - (id) _alongsideCompletions;
 - (id) initWithMainContext:(id)a;
 - (void) _setAlongsideCompletions:(id)a;
 - (id) _interactiveChangeHandlers;
 - (void) _setInteractiveChangeHandlers:(id)a;
 - (void) _setMainContext:(id)a;
 - (void) _setAlongsideAnimationViews:(id)a;
 - (id) _interactiveChangeHandlers:(BOOL)a;
 - (BOOL) isCompleting;
 - (void) handlerToInvokeOnInteractivityChanges:(@?)a;
 - ({CGAffineTransform=dddddd}) affineTransform;


@end
