
@interface _UINavigationInteractiveTransition : _UINavigationInteractiveTransitionBase {

    UIScreenEdgePanGestureRecognizer* _edgePanRecognizer;
}

 - (void) dealloc;
 - (id) gestureRecognizerView;
 - (void) startInteractiveTransition;
 - (void) setNotInteractiveTransition;
 - (BOOL) gestureRecognizerShouldBegin:(id)a;
 - (BOOL) gestureRecognizer:(id)ashouldRecognizeSimultaneouslyWithGestureRecognizer:(id)b;
 - (BOOL) gestureRecognizer:(id)ashouldReceiveTouch:(id)b;
 - (BOOL) _gestureRecognizer:(id)ashouldBeRequiredToFailByGestureRecognizer:(id)b;
 - (void) _configureNavigationGesture;
 - (id) initWithViewController:(id)aanimator:(id)b;
 - (id) screenEdgePanGestureRecognizer;


@end
