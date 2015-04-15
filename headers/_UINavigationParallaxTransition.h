
@protocol _UIBasicAnimationFactory, UIViewControllerAnimatedTransitioningEx;
@interface _UINavigationParallaxTransition : NSObject <_UIBasicAnimationFactory, UIViewControllerAnimatedTransitioningEx> {

    BOOL _interactionAborted;
    BOOL _clipUnderlapWhileTransitioning;
    q _operation;
    @"<UIViewControllerContextTransitioning>" _transitionContext;
    @"_UINavigationInteractiveTransitionBase" _interactionController;
    @"_UIParallaxDimmingView" _borderDimmingView;
    @"_UIParallaxDimmingView" _contentDimmingView;
    @"UIView" _containerFromView;
    @"UIView" _containerToView;
    @"UIView" _clipUnderView;
    q _transitionStyle;
    d _transitionGap;
}
@property (nonatomic, assign, readwrite) NSNumber* operation;
@property (nonatomic, retain, readwrite) NSNumber* transitionContext;
@property (nonatomic, assign, readwrite) NSNumber* interactionAborted;
@property (nonatomic, assign, readwrite) _UINavigationInteractiveTransitionBase* interactionController;
@property (nonatomic, retain, readwrite) _UIParallaxDimmingView* borderDimmingView;
@property (nonatomic, retain, readwrite) _UIParallaxDimmingView* contentDimmingView;
@property (nonatomic, retain, readwrite) UIView* containerFromView;
@property (nonatomic, retain, readwrite) UIView* containerToView;
@property (nonatomic, retain, readwrite) UIView* clipUnderView;
@property (nonatomic, assign, readwrite) NSNumber* clipUnderlapWhileTransitioning;
@property (nonatomic, assign, readwrite) NSNumber* transitionStyle;
@property (nonatomic, assign, readwrite) NSNumber* transitionGap;

 - (void) dealloc;
 - (void) setContentDimmingView:(id)a;
 - (void) setBorderDimmingView:(id)a;
 - (id) interactionController;
 - (void) setInteractionAborted:(BOOL)a;
 - (d) gapBetweenViews;
 - (d) parallaxOffset;
 - (id) contentDimmingView;
 - (d) transitionDuration:(id)a;
 - (id) borderDimmingView;
 - (void) setClipUnderView:(id)a;
 - (id) shadowContainerForKeyboardTransition:(id)a;
 - (void) resizeShadow:(id)a;
 - (id) _basicAnimationForView:(id)awithKeyPath:(id)b;
 - (id) _timingFunctionForAnimation;
 - (void) setInteractionController:(id)a;
 - (BOOL) interactionAborted;
 - (q) operation;
 - (void) setOperation:(q)a;
 - (void) animateTransition:(id)a;
 - (void) animationEnded:(BOOL)a;
 - (id) initWithCurrentOperation:(q)a;
 - (id) resizedToContainerView;
 - (id) resizedFromContainerView;
 - (void) prepareToAnimateKeyboard:(id)a;
 - (void) animateKeyboard:(id)a;
 - (void) completeKeyboard:(id)a;
 - (id) containerFromView;
 - (void) setContainerFromView:(id)a;
 - (id) containerToView;
 - (void) setContainerToView:(id)a;
 - (id) clipUnderView;
 - (BOOL) clipUnderlapWhileTransitioning;
 - (void) setClipUnderlapWhileTransitioning:(BOOL)a;
 - (q) transitionStyle;
 - (void) setTransitionStyle:(q)a;
 - (d) transitionGap;
 - (void) setTransitionGap:(d)a;
 - (id) transitionContext;
 - (void) setTransitionContext:(id)a;


@end
