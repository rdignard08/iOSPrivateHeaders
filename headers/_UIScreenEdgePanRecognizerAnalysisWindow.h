
@interface _UIScreenEdgePanRecognizerAnalysisWindow : UIWindow {

    NSMutableArray _failureMessageLabels;
    UIDelayedAction _messageFadeAction;
    UIView _backgroundView;
    _UIScreenEdgePanRecognizer _recognizer;
    long long _maximumVisibleOverlayItems;
}

 - (void) dealloc;
 - (id) hitTest:({CGPoint=dd})awithEvent:(id)b;
 - (void) layoutSubviews;
 - (BOOL) _isWindowServerHostingManaged;
 - (void) dismissMessages;
 - (void) fadeOldestMessage;
 - (void) pushMessage:(id)atoVisualOverlay:(BOOL)b;
 - (void) pushFailureMessage:(id)atoVisualOverlay:(BOOL)b;
 - (void) pushStatusMessage:(id)atoVisualOverlay:(BOOL)b;
 - (id) recognizer;
 - (void) setRecognizer:(id)a;
 - (long long) maximumVisibleOverlayItems;
 - (void) setMaximumVisibleOverlayItems:(long long)a;
 - (id) initWithFrame:({CGRect={CGPoint=dd}{CGSize=dd}})a;


@end
