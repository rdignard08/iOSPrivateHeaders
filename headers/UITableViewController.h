
@protocol UITableViewDelegate, UITableViewDataSource;
@interface UITableViewController : UIViewController <UITableViewDelegate, UITableViewDataSource> {

    q _tableViewStyle;
    id _keyboardSupport;
    id _staticDataSource;
    {?="clearsSelectionOnViewWillAppear"b1"insetsApplied"b1"adjustingInsets"b1} _tableViewControllerFlags;
    @"_UIFilteredDataSource" _filteredDataSource;
    q _filteredDataType;
}

 - (void) dealloc;
 - (BOOL) respondsToSelector:(SEL)a;
 - (d) tableView:(id)aheightForRowAtIndexPath:(id)b;
 - (d) tableView:(id)aheightForHeaderInSection:(q)b;
 - (d) tableView:(id)aheightForFooterInSection:(q)b;
 - (id) tableView:(id)aviewForHeaderInSection:(q)b;
 - (id) tableView:(id)aviewForFooterInSection:(q)b;
 - (void) tableView:(id)awillBeginEditingRowAtIndexPath:(id)b;
 - (void) tableView:(id)adidEndEditingRowAtIndexPath:(id)b;
 - (q) tableView:(id)aindentationLevelForRowAtIndexPath:(id)b;
 - (q) tableView:(id)anumberOfRowsInSection:(q)b;
 - (id) tableView:(id)acellForRowAtIndexPath:(id)b;
 - (q) numberOfSectionsInTableView:(id)a;
 - (id) tableView:(id)atitleForHeaderInSection:(q)b;
 - (id) tableView:(id)atitleForFooterInSection:(q)b;
 - (void) _willChangeToIdiom:(q)aonScreen:(id)b;
 - (void) setTableView:(id)a;
 - (void) setEditing:(BOOL)aanimated:(BOOL)b;
 - (id) initWithNibName:(id)abundle:(id)b;
 - (void) loadView;
 - (id) initWithStyle:(q)a;
 - (void) viewWillAppear:(BOOL)a;
 - (void) viewDidAppear:(BOOL)a;
 - (void) viewWillDisappear:(BOOL)a;
 - (BOOL) _viewControllerWasSelected;
 - (id) tableView;
 - (void) _adjustTableForKeyboardInfo:(id)a;
 - (void) setClearsSelectionOnViewWillAppear:(BOOL)a;
 - (id) _existingTableView;
 - (void) _applyDefaultDataSourceToTable:(id)a;
 - (void) _refreshFilteredDataSourceFilterTypeForScreen:(id)a;
 - (q) _resolvedDataSourceFilterTypeForScreen:(id)a;
 - (BOOL) clearsSelectionOnViewWillAppear;
 - (void) setRefreshControl:(id)a;
 - (id) refreshControl;
 - (q) _filteredDataType;
 - (void) _setFilteredDataType:(q)a;
 - (id) _staticDataSource;
 - (void) _setStaticDataSource:(id)a;
 - (id) init;
 - (void) encodeWithCoder:(id)a;
 - (id) initWithCoder:(id)a;


@end
