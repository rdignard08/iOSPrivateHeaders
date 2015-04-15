
@interface UITwoSidedAlertController : NSObject {

    @"UIAlertView" _front;
    @"UIAlertView" _back;
    @"UIAlertView" _currentAlert;
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
 - (void) frontAlertClickedButtonAtIndex:(q)a;
 - (void) backAlertClickedButtonAtIndex:(q)a;
 - (void) alertSheet:(id)abuttonClicked:(i)b;
 - (void) animationDidStop:(id)afinished:(BOOL)b;


@end
