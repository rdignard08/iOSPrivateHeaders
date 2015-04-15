
@interface _UIDocumentPickerManagementViewController : UITableViewController {

    @"NSArray" _allPickers;
}

 - (void) tableView:(id)awillDisplayCell:(id)bforRowAtIndexPath:(id)c;
 - (BOOL) tableView:(id)ashouldHighlightRowAtIndexPath:(id)b;
 - (q) tableView:(id)aeditingStyleForRowAtIndexPath:(id)b;
 - (BOOL) tableView:(id)ashouldIndentWhileEditingRowAtIndexPath:(id)b;
 - (id) tableView:(id)atargetIndexPathForMoveFromRowAtIndexPath:(id)btoProposedIndexPath:(id)c;
 - (q) tableView:(id)anumberOfRowsInSection:(q)b;
 - (id) tableView:(id)acellForRowAtIndexPath:(id)b;
 - (q) numberOfSectionsInTableView:(id)a;
 - (BOOL) tableView:(id)acanMoveRowAtIndexPath:(id)b;
 - (void) tableView:(id)amoveRowAtIndexPath:(id)btoIndexPath:(id)c;
 - (void) traitCollectionDidChange:(id)a;
 - (id) initWithStyle:(q)a;
 - (void) _doneButtonPressed;
 - (id) allPickers;
 - (void) setAllPickers:(id)a;
 - (void) switchToggled:(id)a;
 - (id) init;


@end