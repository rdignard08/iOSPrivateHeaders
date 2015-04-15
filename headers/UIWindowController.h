
@interface UIWindowController : NSObject {

    @"UITransitionView" _transitionView;
    @"UIWindow" _window;
    i _currentTransition;
    id _target;
    SEL _didEndSelector;
    @"UIViewController" _fromViewController;
    @"UIViewController" _toViewController;
    {CGPoint="x"d"y"d} _beginOriginForToView;
    {CGPoint="x"d"y"d} _endOriginForToView;
    BOOL _presenting;
    q _toModalStyle;
    BOOL _needsDidAppear;
    BOOL _needsDidDisappear;
    BOOL __interactiveTransition;
    @"<UIViewControllerAnimatedTransitioning>" _transitionController;
    @"<UIViewControllerInteractiveTransitioning>" _interactionController;
}
@property (nonatomic, assign, readwrite) UIWindow* window;
@property (nonatomic, assign, readonly) UITransitionView* transitionView;
@property (nonatomic, assign, readwrite) NSNumber* presenting;
@property (nonatomic, retain, readwrite, _setTransitionController:) NSNumber* _transitionController;
@property (nonatomic, retain, readwrite, _setInteractionController:) NSNumber* _interactionController;
@property (nonatomic, assign, readwrite, _isInteractiveTransition, _setInteractiveTransition:) NSNumber* _interactiveTransition;
 + (void) windowWillBeDeallocated:(id)a;
 + (id) windowControllerForWindow:(id)a;

 - (void) dealloc;
 - (id) _interactionController;
 - (void) setWindow:(id)a;
 - (d) durationForTransition:(i)a;
 - (void) transitionViewDidStart:(id)a;
 - (BOOL) transitionViewShouldUseViewControllerCallbacks;
 - (void) transitionViewDidComplete:(id)afromView:(id)btoView:(id)cremoveFromView:(BOOL)d;
 - ({CGPoint=dd}) transitionView:(id)aendOriginForToView:(id)bforTransition:(i)cdefaultOrigin:({CGPoint=dd})d;
 - ({CGPoint=dd}) transitionView:(id)abeginOriginForToView:(id)bforTransition:(i)cdefaultOrigin:({CGPoint=dd})d;
 - ({CGPoint=dd}) transitionView:(id)aendOriginForFromView:(id)bforTransition:(i)cdefaultOrigin:({CGPoint=dd})d;
 - (void) transitionView:(id)astartCustomTransitionWithDuration:(d)b;
 - (BOOL) presenting;
 - (void) _transplantView:(id)atoSuperview:(id)batIndex:(Q)c;
 - ({CGSize=dd}) _flipSize:({CGSize=dd})a;
 - (id) _transitionController;
 - (void) setPresenting:(BOOL)a;
 - (void) _setTransitionController:(id)a;
 - (void) _setInteractionController:(id)a;
 - (void) transition:(i)afromViewController:(id)btoViewController:(id)ctarget:(id)ddidEndSelector:(SEL)eanimation:(@?)f;
 - (id) transitionView;
 - ({CGPoint=dd}) _originForViewController:(id)aorientation:(q)bactualStatusBarHeight:(d)cfullScreenLayout:(BOOL)dinWindow:(id)e;
 - ({CGRect={CGPoint=dd}{CGSize=dd}}) _boundsForViewController:(id)atransition:(i)borientation:(q)cfullScreenLayout:(BOOL)dinWindow:(id)e;
 - (void) _setInteractiveTransition:(BOOL)a;
 - (void) transitionViewDidCancel:(id)afromView:(id)btoView:(id)c;
 - (void) _prepareKeyboardForTransition:(i)afromView:(id)b;
 - (BOOL) _isInteractiveTransition;
 - ({CGPoint=dd}) _adjustOrigin:({CGPoint=dd})agivenOtherOrigin:({CGPoint=dd})bforTransition:(i)c;
 - (void) transition:(i)afromViewController:(id)btoViewController:(id)ctarget:(id)ddidEndSelector:(SEL)e;
 - (id) window;


@end
