
@interface UIWindowController : NSObject {

    UITransitionView* _transitionView;
    UIWindow* _window;
    int _currentTransition;
    id _target;
    SEL _didEndSelector;
    UIViewController* _fromViewController;
    UIViewController* _toViewController;
    {CGPoint="x"d"y"d} _beginOriginForToView;
    {CGPoint="x"d"y"d} _endOriginForToView;
    BOOL _presenting;
    long long _toModalStyle;
    BOOL _needsDidAppear;
    BOOL _needsDidDisappear;
    BOOL __interactiveTransition;
    <UIViewControllerAnimatedTransitioning>* _transitionController;
    <UIViewControllerInteractiveTransitioning>* _interactionController;
}
@property (nonatomic, assign, readwrite) UIWindow* window;
@property (nonatomic, assign, readonly) UITransitionView* transitionView;
@property (nonatomic, assign, readwrite) NSNumber* presenting;
@property (nonatomic, retain, readwrite, setter=_setTransitionController:) NSNumber* _transitionController;
@property (nonatomic, retain, readwrite, setter=_setInteractionController:) NSNumber* _interactionController;
@property (nonatomic, assign, readwrite, getter=_isInteractiveTransition, setter=_setInteractiveTransition:) NSNumber* _interactiveTransition;
 + (void) windowWillBeDeallocated:(id)a;
 + (id) windowControllerForWindow:(id)a;

 - (void) dealloc;
 - (id) _interactionController;
 - (void) setWindow:(id)a ;
 - (double) durationForTransition:(int)a ;
 - (void) transitionViewDidStart:(id)a ;
 - (BOOL) transitionViewShouldUseViewControllerCallbacks;
 - (void) transitionViewDidComplete:(id)a fromView:(id)b toView:(id)c removeFromView:(BOOL)d ;
 - ({CGPoint=dd}) transitionView:(id)a endOriginForToView:(id)b forTransition:(int)c defaultOrigin:({CGPoint=dd})d ;
 - ({CGPoint=dd}) transitionView:(id)a beginOriginForToView:(id)b forTransition:(int)c defaultOrigin:({CGPoint=dd})d ;
 - ({CGPoint=dd}) transitionView:(id)a endOriginForFromView:(id)b forTransition:(int)c defaultOrigin:({CGPoint=dd})d ;
 - (void) transitionView:(id)a startCustomTransitionWithDuration:(double)b ;
 - (BOOL) presenting;
 - (void) _transplantView:(id)a toSuperview:(id)b atIndex:(unsigned long long)c ;
 - ({CGSize=dd}) _flipSize:({CGSize=dd})a ;
 - (id) _transitionController;
 - (void) setPresenting:(BOOL)a ;
 - (void) _setTransitionController:(id)a ;
 - (void) _setInteractionController:(id)a ;
 - (void) transition:(int)a fromViewController:(id)b toViewController:(id)c target:(id)d didEndSelector:(SEL)e animation:(@?)f ;
 - (id) transitionView;
 - ({CGPoint=dd}) _originForViewController:(id)a orientation:(long long)b actualStatusBarHeight:(double)c fullScreenLayout:(BOOL)d inWindow:(id)e ;
 - ({CGRect={CGPoint=dd}{CGSize=dd}}) _boundsForViewController:(id)a transition:(int)b orientation:(long long)c fullScreenLayout:(BOOL)d inWindow:(id)e ;
 - (void) _setInteractiveTransition:(BOOL)a ;
 - (void) transitionViewDidCancel:(id)a fromView:(id)b toView:(id)c ;
 - (void) _prepareKeyboardForTransition:(int)a fromView:(id)b ;
 - (BOOL) _isInteractiveTransition;
 - ({CGPoint=dd}) _adjustOrigin:({CGPoint=dd})a givenOtherOrigin:({CGPoint=dd})b forTransition:(int)c ;
 - (void) transition:(int)a fromViewController:(id)b toViewController:(id)c target:(id)d didEndSelector:(SEL)e ;
 - (id) window;


@end
