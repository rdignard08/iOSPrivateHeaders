
@protocol UITableViewDelegate, UITableViewDataSource;
@interface UITableViewController : UIViewController <UITableViewDelegate, UITableViewDataSource> {

    long long _tableViewStyle;
    id _keyboardSupport;
    id _staticDataSource;
    {?="clearsSelectionOnViewWillAppear"b1"insetsApplied"b1"adjustingInsets"b1} _tableViewControllerFlags;
    _UIFilteredDataSource _filteredDataSource;
    long long _filteredDataType;
}

 - (void) dealloc;
 - (BOOL) respondsToSelector:(SEL)a;
 - (double) tableView:(id)aheightForRowAtIndexPath:(id)b;
 - (double) tableView:(id)aheightForHeaderInSection:(long long)b;
 - (double) tableView:(id)aheightForFooterInSection:(long long)b;
 - (id) tableView:(id)aviewForHeaderInSection:(long long)b;
 - (id) tableView:(id)aviewForFooterInSection:(long long)b;
 - (void) tableView:(id)awillBeginEditingRowAtIndexPath:(id)b;
 - (void) tableView:(id)adidEndEditingRowAtIndexPath:(id)b;
 - (long long) tableView:(id)aindentationLevelForRowAtIndexPath:(id)b;
 - (long long) tableView:(id)anumberOfRowsInSection:(long long)b;
 - (id) tableView:(id)acellForRowAtIndexPath:(id)b;
 - (long long) numberOfSectionsInTableView:(id)a;
 - (id) tableView:(id)atitleForHeaderInSection:(long long)b;
 - (id) tableView:(id)atitleForFooterInSection:(long long)b;
 - (void) _willChangeToIdiom:(long long)aonScreen:(id)b;
 - (void) setTableView:(id)a;
 - (void) setEditing:(BOOL)aanimated:(BOOL)b;
 - (id) initWithNibName:(id)abundle:(id)b;
 - (void) loadView;
 - (id) initWithStyle:(long long)a;
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
 - (long long) _resolvedDataSourceFilterTypeForScreen:(id)a;
 - (BOOL) clearsSelectionOnViewWillAppear;
 - (void) setRefreshControl:(id)a;
 - (id) refreshControl;
 - (long long) _filteredDataType;
 - (void) _setFilteredDataType:(long long)a;
 - (id) _staticDataSource;
 - (void) _setStaticDataSource:(id)a;
 - (id) init;
 - (void) encodeWithCoder:(id)a;
 - (id) initWithCoder:(id)a;


@end
