
@interface _UIAlertControllerTextFieldViewController : UITableViewController {

    NSMutableArray* textFieldViews;
    NSMutableArray* textFields;
    BOOL _textFieldsCanBecomeFirstResponder;
    <_UIAlertControllerTextFieldViewControllerContaining>* _container;
}

 - (void) dealloc;
 - (id) container;
 - (void) setContainer:(id)a;
 - (long long) tableView:(id)anumberOfRowsInSection:(long long)b;
 - (id) tableView:(id)acellForRowAtIndexPath:(id)b;
 - (long long) numberOfSectionsInTableView:(id)a;
 - (id) textFieldAtIndex:(long long)a;
 - (id) initWithStyle:(long long)a;
 - (void) viewWillAppear:(BOOL)a;
 - (id) addTextFieldWithPlaceholder:(id)aisSecure:(BOOL)b;
 - (id) textFields;
 - (void) setTextFieldsCanBecomeFirstResponder:(BOOL)a;
 - (void) removeAllTextFields;
 - (BOOL) textFieldsCanBecomeFirstResponder;
 - (void) _returnKeyPressedInTextField:(id)a;
 - (void) _updatePreferredContentSize;
 - (long long) numberOfTextFields;
 - (double) _bottomMarginForTextFields;


@end
