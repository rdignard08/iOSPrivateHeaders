
@interface _UIAlertControllerTextFieldViewController : UITableViewController {

    @"NSMutableArray" textFieldViews;
    @"NSMutableArray" textFields;
    BOOL _textFieldsCanBecomeFirstResponder;
    @"<_UIAlertControllerTextFieldViewControllerContaining>" _container;
}

 - (void) dealloc;
 - (id) container;
 - (void) setContainer:(id)a;
 - (q) tableView:(id)anumberOfRowsInSection:(q)b;
 - (id) tableView:(id)acellForRowAtIndexPath:(id)b;
 - (q) numberOfSectionsInTableView:(id)a;
 - (id) textFieldAtIndex:(q)a;
 - (id) initWithStyle:(q)a;
 - (void) viewWillAppear:(BOOL)a;
 - (id) addTextFieldWithPlaceholder:(id)aisSecure:(BOOL)b;
 - (id) textFields;
 - (void) setTextFieldsCanBecomeFirstResponder:(BOOL)a;
 - (void) removeAllTextFields;
 - (BOOL) textFieldsCanBecomeFirstResponder;
 - (void) _returnKeyPressedInTextField:(id)a;
 - (void) _updatePreferredContentSize;
 - (q) numberOfTextFields;
 - (d) _bottomMarginForTextFields;


@end
