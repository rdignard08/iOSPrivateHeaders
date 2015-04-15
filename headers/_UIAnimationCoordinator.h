
@protocol UIViewControllerAnimatedTransitioning;
@interface _UIAnimationCoordinator : NSObject <UIViewControllerAnimatedTransitioning> {

    @"NSMutableDictionary" _stash;
    @"_UIViewControllerOneToOneTransitionContext" _transitionContext;
    @"UIPercentDrivenInteractiveTransition" _interactiveTransition;
    d _duration;
    @? _preperation;
    @? _animator;
    @? _completion;
    @"UIView" _containerView;
    @"UIViewController" _viewController;
    {CGRect="origin"{CGPoint="x"d"y"d}"size"{CGSize="width"d"height"d}} _startFrame;
    {CGRect="origin"{CGPoint="x"d"y"d}"size"{CGSize="width"d"height"d}} _endFrame;
}
@property (nonatomic, retain, readonly) _UIViewControllerOneToOneTransitionContext* transitionContext;
@property (nonatomic, assign, readwrite) NSNumber* duration;
@property (nonatomic, copy, readwrite) NSNumber* preperation;
@property (nonatomic, copy, readwrite) NSNumber* animator;
@property (nonatomic, copy, readwrite) NSNumber* completion;
@property (nonatomic, retain, readwrite) UIView* containerView;
@property (nonatomic, retain, readwrite) UIViewController* viewController;
@property (nonatomic, assign, readwrite) NSNumber* startFrame;
@property (nonatomic, assign, readwrite) NSNumber* endFrame;
@property (nonatomic, retain, readonly) NSMutableDictionary* stash;

 - (d) duration;
 - (void) dealloc;
 - (id) containerView;
 - (d) transitionDuration:(id)a;
 - (void) animateTransition:(id)a;
 - (void) animationEnded:(BOOL)a;
 - (void) setContainerView:(id)a;
 - (@?) completion;
 - (void) setCompletion:(@?)a;
 - (void) setStartFrame:({CGRect={CGPoint=dd}{CGSize=dd}})a;
 - (void) setEndFrame:({CGRect={CGPoint=dd}{CGSize=dd}})a;
 - (void) setViewController:(id)a;
 - (id) viewController;
 - (void) setAnimator:(@?)a;
 - (id) stash;
 - (void) animateInteractively;
 - (void) finishInteractiveAnimation;
 - (void) cancelInteractiveAnimation;
 - (void) updateInteractiveProgress:(d)a;
 - (void) animate;
 - ({CGRect={CGPoint=dd}{CGSize=dd}}) startFrame;
 - (void) setPreperation:(@?)a;
 - (void) _updateTransitionContext;
 - (@?) preperation;
 - (@?) animator;
 - (id) transitionContext;
 - (void) setDuration:(d)a;
 - ({CGRect={CGPoint=dd}{CGSize=dd}}) endFrame;


@end
