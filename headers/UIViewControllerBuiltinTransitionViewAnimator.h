
@protocol UIViewControllerAnimatedTransitioning;
@interface UIViewControllerBuiltinTransitionViewAnimator : NSObject <UIViewControllerAnimatedTransitioning> {

    @"<UIViewControllerContextTransitioning>" _transitionContext;
    BOOL _removeFromView;
    i _transition;
    id _delegate;
    @"UIView" _toView;
    @"UIView" _fromView;
}
@property (nonatomic, assign, readwrite) NSNumber* delegate;
@property (nonatomic, assign, readwrite) UIView* toView;
@property (nonatomic, assign, readwrite) UIView* fromView;
@property (nonatomic, assign, readwrite) NSNumber* removeFromView;
@property (nonatomic, assign, readwrite) NSNumber* transition;

 - (void) setDelegate:(id)a;
 - (d) transitionDuration:(id)a;
 - (void) animateTransition:(id)a;
 - (d) durationForTransition:(i)a;
 - (void) transitionViewDidStart:(id)a;
 - (BOOL) transitionViewShouldUseViewControllerCallbacks;
 - (void) transitionViewDidComplete:(id)afromView:(id)btoView:(id)cremoveFromView:(BOOL)d;
 - ({CGPoint=dd}) transitionView:(id)aendOriginForToView:(id)bforTransition:(i)cdefaultOrigin:({CGPoint=dd})d;
 - ({CGPoint=dd}) transitionView:(id)abeginOriginForToView:(id)bforTransition:(i)cdefaultOrigin:({CGPoint=dd})d;
 - ({CGPoint=dd}) transitionView:(id)aendOriginForFromView:(id)bforTransition:(i)cdefaultOrigin:({CGPoint=dd})d;
 - (void) transitionView:(id)astartCustomTransitionWithDuration:(d)b;
 - (id) fromView;
 - (id) toView;
 - (void) setTransition:(i)a;
 - (i) transition;
 - (id) initWithTransition:(i)a;
 - (void) setToView:(id)a;
 - (void) setFromView:(id)a;
 - (void) setRemoveFromView:(BOOL)a;
 - (void) _prepareKeyboardForTransition:(i)afromView:(id)b;
 - ({CGPoint=dd}) _adjustOrigin:({CGPoint=dd})agivenOtherOrigin:({CGPoint=dd})bforTransition:(i)c;
 - (BOOL) removeFromView;
 - (id) delegate;


@end
