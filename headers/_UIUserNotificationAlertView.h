
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
 - (void) dismissWithClickedButtonIndex:(long long)aanimated:(BOOL)b;
 - (long long) addButtonWithTitle:(id)a;
 - (id) textFieldAtIndex:(long long)a;
 - (BOOL) runsModal;
 - (void) setRunsModal:(BOOL)a;
 - (void) setRemoteViewController:(id)a;
 - (void) _removeObservervations;
 - (void) cancelAlertView;
 - (void) _cancelUserNotification;
 - (void) setHostedWindow:(id)a;
 - (BOOL) isVisible;


@end
