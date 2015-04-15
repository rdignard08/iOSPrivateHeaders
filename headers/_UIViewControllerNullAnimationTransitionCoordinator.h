
@protocol UIViewControllerTransitionCoordinator;
@interface _UIViewControllerNullAnimationTransitionCoordinator : NSObject <UIViewControllerTransitionCoordinator> {

    BOOL _transitionIsInFlight;
    NSMutableArray* _alongsideAnimations;
    NSMutableArray* _alongsideCompletions;
    UIView* _containerView;
}
@property (nonatomic, assign, readwrite) UIView* containerView;

 - (BOOL) isCancelled;
 - (void) dealloc;
 - (id) containerView;
 - (id) viewControllerForKey:(id)a ;
 - (id) viewForKey:(id)a ;
 - (BOOL) isInteractive;
 - (double) percentComplete;
 - (long long) presentationStyle;
 - (BOOL) isRotating;
 - (BOOL) isAnimated;
 - (void) _runAlongsideAnimations;
 - (void) setContainerView:(id)a ;
 - (void) _runAlongsideCompletionsAfterCommit;
 - (BOOL) animateAlongsideTransition:(@?)a completion:(@?)b ;
 - (BOOL) animateAlongsideTransitionInView:(id)a animation:(@?)b completion:(@?)c ;
 - (double) transitionDuration;
 - (long long) completionCurve;
 - (void) notifyWhenInteractionEndsUsingBlock:(@?)a ;
 - (BOOL) initiallyInteractive;
 - ({CGAffineTransform=dddddd}) targetTransform;
 - (id) _alongsideAnimations:(BOOL)a ;
 - (id) _alongsideCompletions:(BOOL)a ;
 - (void) _applyBlocks:(id)a releaseBlocks:(@?)b ;
 - (double) completionVelocity;


@end
