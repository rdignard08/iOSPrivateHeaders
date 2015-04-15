
@interface UITableViewControllerKeyboardSupport : NSObject {

    @"UITableViewController" _tableViewController;
    d _adjustmentForKeyboard;
    b1 _viewIsDisappearing;
    b1 _registeredForNotifications;
}
@property (nonatomic, assign, readwrite) NSNumber* adjustmentForKeyboard;
@property (nonatomic, assign, readwrite) NSNumber* viewIsDisappearing;
@property (nonatomic, assign, readwrite) NSNumber* registeredForNotifications;

 - (void) _keyboardWillShow:(id)a;
 - (void) _keyboardWillHide:(id)a;
 - (void) setViewIsDisappearing:(BOOL)a;
 - (BOOL) viewIsDisappearing;
 - (void) setRegisteredForNotifications:(BOOL)a;
 - (BOOL) registeredForNotifications;
 - (id) initWithTableViewController:(id)a;
 - (void) _keyboardDidShow:(id)a;
 - (void) _keyboardDidHide:(id)a;
 - (void) _keyboardDidChangeFrame:(id)a;
 - (d) adjustmentForKeyboard;
 - (void) setAdjustmentForKeyboard:(d)a;


@end
