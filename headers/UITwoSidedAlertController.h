
@interface UITwoSidedAlertController : NSObject {

    UIAlertView _front;
    UIAlertView _back;
    UIAlertView _currentAlert;
    id _delegate;
}

 - (void) dealloc;
 - (void) setDelegate:(id)a;
 - (void) show;
 - (void) alertViewCancel:(id)a;
 - (void) dismiss;
 - (void) didPresentAlertView:(id)a;
 - (id) createFrontAlert;
 - (id) createBackAlert;
 - (id) frontAlert;
 - (id) backAlert;
 - (void) flip;
 - (void) frontAlertClickedButtonAtIndex:(long long)a;
 - (void) backAlertClickedButtonAtIndex:(long long)a;
 - (void) alertSheet:(id)abuttonClicked:(int)b;
 - (void) animationDidStop:(id)afinished:(BOOL)b;


@end
