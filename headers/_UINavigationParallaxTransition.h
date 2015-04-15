
@protocol _UIBasicAnimationFactory, UIViewControllerAnimatedTransitioningEx;
@interface _UINavigationParallaxTransition : NSObject <_UIBasicAnimationFactory, UIViewControllerAnimatedTransitioningEx> {

    BOOL _interactionAborted;
    BOOL _clipUnderlapWhileTransitioning;
    long long _operation;
    @"<UIViewControllerContextTransitioning>" _transitionContext;
    @"_UINavigationInteractiveTransitionBase" _interactionController;
    @"_UIParallaxDimmingView" _borderDimmingView;
    @"_UIParallaxDimmingView" _contentDimmingView;
    @"UIView" _containerFromView;
    @"UIView" _containerToView;
    @"UIView" _clipUnderView;
    long long _transitionStyle;
    double _transitionGap;
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
 - (double) gapBetweenViews;
 - (double) parallaxOffset;
 - (id) contentDimmingView;
 - (double) transitionDuration:(id)a;
 - (id) borderDimmingView;
 - (void) setClipUnderView:(id)a;
 - (id) shadowContainerForKeyboardTransition:(id)a;
 - (void) resizeShadow:(id)a;
 - (id) _basicAnimationForView:(id)awithKeyPath:(id)b;
 - (id) _timingFunctionForAnimation;
 - (void) setInteractionController:(id)a;
 - (BOOL) interactionAborted;
 - (long long) operation;
 - (void) setOperation:(long long)a;
 - (void) animateTransition:(id)a;
 - (void) animationEnded:(BOOL)a;
 - (id) initWithCurrentOperation:(long long)a;
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
 - (long long) transitionStyle;
 - (void) setTransitionStyle:(long long)a;
 - (double) transitionGap;
 - (void) setTransitionGap:(double)a;
 - (id) transitionContext;
 - (void) setTransitionContext:(id)a;


@end
