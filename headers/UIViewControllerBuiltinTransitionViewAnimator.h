
@protocol UIViewControllerAnimatedTransitioning;
@interface UIViewControllerBuiltinTransitionViewAnimator : NSObject <UIViewControllerAnimatedTransitioning> {

    <UIViewControllerContextTransitioning>* _transitionContext;
    BOOL _removeFromView;
    int _transition;
    id _delegate;
    UIView* _toView;
    UIView* _fromView;
}
@property (nonatomic, assign, readwrite) NSNumber* delegate;
@property (nonatomic, assign, readwrite) UIView* toView;
@property (nonatomic, assign, readwrite) UIView* fromView;
@property (nonatomic, assign, readwrite) NSNumber* removeFromView;
@property (nonatomic, assign, readwrite) NSNumber* transition;

 - (void) setDelegate:(id)a;
 - (double) transitionDuration:(id)a;
 - (void) animateTransition:(id)a;
 - (double) durationForTransition:(int)a;
 - (void) transitionViewDidStart:(id)a;
 - (BOOL) transitionViewShouldUseViewControllerCallbacks;
 - (void) transitionViewDidComplete:(id)afromView:(id)btoView:(id)cremoveFromView:(BOOL)d;
 - ({CGPoint=dd}) transitionView:(id)aendOriginForToView:(id)bforTransition:(int)cdefaultOrigin:({CGPoint=dd})d;
 - ({CGPoint=dd}) transitionView:(id)abeginOriginForToView:(id)bforTransition:(int)cdefaultOrigin:({CGPoint=dd})d;
 - ({CGPoint=dd}) transitionView:(id)aendOriginForFromView:(id)bforTransition:(int)cdefaultOrigin:({CGPoint=dd})d;
 - (void) transitionView:(id)astartCustomTransitionWithDuration:(double)b;
 - (id) fromView;
 - (id) toView;
 - (void) setTransition:(int)a;
 - (int) transition;
 - (id) initWithTransition:(int)a;
 - (void) setToView:(id)a;
 - (void) setFromView:(id)a;
 - (void) setRemoveFromView:(BOOL)a;
 - (void) _prepareKeyboardForTransition:(int)afromView:(id)b;
 - ({CGPoint=dd}) _adjustOrigin:({CGPoint=dd})agivenOtherOrigin:({CGPoint=dd})bforTransition:(int)c;
 - (BOOL) removeFromView;
 - (id) delegate;


@end
