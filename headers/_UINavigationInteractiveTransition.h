
@interface _UINavigationInteractiveTransition : _UINavigationInteractiveTransitionBase {

    UIScreenEdgePanGestureRecognizer* _edgePanRecognizer;
}

 - (void) dealloc;
 - (id) gestureRecognizerView;
 - (void) startInteractiveTransition;
 - (void) setNotInteractiveTransition;
 - (BOOL) gestureRecognizerShouldBegin:(id)a ;
 - (BOOL) gestureRecognizer:(id)a shouldRecognizeSimultaneouslyWithGestureRecognizer:(id)b ;
 - (BOOL) gestureRecognizer:(id)a shouldReceiveTouch:(id)b ;
 - (BOOL) _gestureRecognizer:(id)a shouldBeRequiredToFailByGestureRecognizer:(id)b ;
 - (void) _configureNavigationGesture;
 - (id) initWithViewController:(id)a animator:(id)b ;
 - (id) screenEdgePanGestureRecognizer;


@end
