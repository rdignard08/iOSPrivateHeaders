
@interface _UIDocumentPickerManagementViewController : UITableViewController {

    NSArray* _allPickers;
}

 - (void) tableView:(id)a willDisplayCell:(id)b forRowAtIndexPath:(id)c ;
 - (BOOL) tableView:(id)a shouldHighlightRowAtIndexPath:(id)b ;
 - (long long) tableView:(id)a editingStyleForRowAtIndexPath:(id)b ;
 - (BOOL) tableView:(id)a shouldIndentWhileEditingRowAtIndexPath:(id)b ;
 - (id) tableView:(id)a targetIndexPathForMoveFromRowAtIndexPath:(id)b toProposedIndexPath:(id)c ;
 - (long long) tableView:(id)a numberOfRowsInSection:(long long)b ;
 - (id) tableView:(id)a cellForRowAtIndexPath:(id)b ;
 - (long long) numberOfSectionsInTableView:(id)a ;
 - (BOOL) tableView:(id)a canMoveRowAtIndexPath:(id)b ;
 - (void) tableView:(id)a moveRowAtIndexPath:(id)b toIndexPath:(id)c ;
 - (void) traitCollectionDidChange:(id)a ;
 - (id) initWithStyle:(long long)a ;
 - (void) _doneButtonPressed;
 - (id) allPickers;
 - (void) setAllPickers:(id)a ;
 - (void) switchToggled:(id)a ;
 - (id) init;


@end
