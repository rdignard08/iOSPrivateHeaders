
@protocol UITableViewDelegate, UITableViewDataSource;
@interface UITableViewController : UIViewController <UITableViewDelegate, UITableViewDataSource> {

    long long _tableViewStyle;
    id _keyboardSupport;
    id _staticDataSource;
    {?="clearsSelectionOnViewWillAppear"b1"insetsApplied"b1"adjustingInsets"b1} _tableViewControllerFlags;
    _UIFilteredDataSource* _filteredDataSource;
    long long _filteredDataType;
}

 - (void) dealloc;
 - (BOOL) respondsToSelector:(SEL)a ;
 - (double) tableView:(id)a heightForRowAtIndexPath:(id)b ;
 - (double) tableView:(id)a heightForHeaderInSection:(long long)b ;
 - (double) tableView:(id)a heightForFooterInSection:(long long)b ;
 - (id) tableView:(id)a viewForHeaderInSection:(long long)b ;
 - (id) tableView:(id)a viewForFooterInSection:(long long)b ;
 - (void) tableView:(id)a willBeginEditingRowAtIndexPath:(id)b ;
 - (void) tableView:(id)a didEndEditingRowAtIndexPath:(id)b ;
 - (long long) tableView:(id)a indentationLevelForRowAtIndexPath:(id)b ;
 - (long long) tableView:(id)a numberOfRowsInSection:(long long)b ;
 - (id) tableView:(id)a cellForRowAtIndexPath:(id)b ;
 - (long long) numberOfSectionsInTableView:(id)a ;
 - (id) tableView:(id)a titleForHeaderInSection:(long long)b ;
 - (id) tableView:(id)a titleForFooterInSection:(long long)b ;
 - (void) _willChangeToIdiom:(long long)a onScreen:(id)b ;
 - (void) setTableView:(id)a ;
 - (void) setEditing:(BOOL)a animated:(BOOL)b ;
 - (id) initWithNibName:(id)a bundle:(id)b ;
 - (void) loadView;
 - (id) initWithStyle:(long long)a ;
 - (void) viewWillAppear:(BOOL)a ;
 - (void) viewDidAppear:(BOOL)a ;
 - (void) viewWillDisappear:(BOOL)a ;
 - (BOOL) _viewControllerWasSelected;
 - (id) tableView;
 - (void) _adjustTableForKeyboardInfo:(id)a ;
 - (void) setClearsSelectionOnViewWillAppear:(BOOL)a ;
 - (id) _existingTableView;
 - (void) _applyDefaultDataSourceToTable:(id)a ;
 - (void) _refreshFilteredDataSourceFilterTypeForScreen:(id)a ;
 - (long long) _resolvedDataSourceFilterTypeForScreen:(id)a ;
 - (BOOL) clearsSelectionOnViewWillAppear;
 - (void) setRefreshControl:(id)a ;
 - (id) refreshControl;
 - (long long) _filteredDataType;
 - (void) _setFilteredDataType:(long long)a ;
 - (id) _staticDataSource;
 - (void) _setStaticDataSource:(id)a ;
 - (id) init;
 - (void) encodeWithCoder:(id)a ;
 - (id) initWithCoder:(id)a ;


@end
