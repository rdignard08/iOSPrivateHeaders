
@interface _UIUserNotificationAlertView : UIAlertView {

    ^{__CFUserNotification=} _userNotification;
    ^{__CFRunLoopSource=} _userNotificationRunLoopSource;
    BOOL _runsModal;
    BOOL _runningModal;
    id _strongDelegate;
}
 + (void) initialize;

 - (void) dealloc;
 - (void) show;
 - (void) dismissWithClickedButtonIndex:(q)aanimated:(BOOL)b;
 - (q) addButtonWithTitle:(id)a;
 - (id) textFieldAtIndex:(q)a;
 - (BOOL) runsModal;
 - (void) setRunsModal:(BOOL)a;
 - (void) setRemoteViewController:(id)a;
 - (void) _removeObservervations;
 - (void) cancelAlertView;
 - (void) _cancelUserNotification;
 - (void) setHostedWindow:(id)a;
 - (BOOL) isVisible;


@end
