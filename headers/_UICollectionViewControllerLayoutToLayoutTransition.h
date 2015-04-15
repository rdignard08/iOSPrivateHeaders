
@protocol UIViewControllerAnimatedTransitioning;
@interface _UICollectionViewControllerLayoutToLayoutTransition : NSObject <UIViewControllerAnimatedTransitioning> {

    BOOL _crossFadeNavigationBar;
    BOOL _crossFadeBottomBars;
    BOOL _interactionAborted;
    @"UICollectionViewLayout" _toLayout;
    @"UIPercentDrivenInteractiveTransition" _interactionController;
    q _operation;
}
@property (nonatomic, retain, readwrite) UICollectionViewLayout* toLayout;
@property (nonatomic, assign, readwrite) NSNumber* crossFadeNavigationBar;
@property (nonatomic, assign, readwrite) NSNumber* crossFadeBottomBars;
@property (nonatomic, assign, readwrite) UIPercentDrivenInteractiveTransition* interactionController;
@property (nonatomic, assign, readwrite) NSNumber* interactionAborted;
@property (nonatomic, assign, readwrite) NSNumber* operation;
 + (id) transitionForOperation:(q)afromViewController:(id)btoViewController:(id)c;

 - (void) dealloc;
 - (id) interactionController;
 - (void) setInteractionAborted:(BOOL)a;
 - (d) transitionDuration:(id)a;
 - (void) setInteractionController:(id)a;
 - (BOOL) interactionAborted;
 - (q) operation;
 - (void) setOperation:(q)a;
 - (void) animateTransition:(id)a;
 - (void) animationEnded:(BOOL)a;
 - (BOOL) _shouldCrossFadeNavigationBar;
 - (BOOL) _shouldCrossFadeBottomBars;
 - (void) setToLayout:(id)a;
 - (void) setCrossFadeNavigationBar:(BOOL)a;
 - (void) setCrossFadeBottomBars:(BOOL)a;
 - (id) toLayout;
 - (BOOL) crossFadeNavigationBar;
 - (BOOL) crossFadeBottomBars;


@end
