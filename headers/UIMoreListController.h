
@protocol UITableViewDelegate, UITableViewDataSource;
@interface UIMoreListController : UIViewController <UITableViewDelegate, UITableViewDataSource> {

    @"UITableView" _table;
    BOOL _allowsCustomizing;
    BOOL _disableCustomizing;
    BOOL _hideNavigationBar;
    @"NSArray" _moreViewControllers;
    @"UIMoreListCellLayoutManager" _layoutManager;
    @"UIBarButtonItem" _moreEditButtonItem;
    BOOL _moreViewControllersChanged;
}

 - (void) dealloc;
 - (void) tableView:(id)awillDisplayCell:(id)bforRowAtIndexPath:(id)c;
 - (void) tableView:(id)adidSelectRowAtIndexPath:(id)b;
 - (q) tableView:(id)anumberOfRowsInSection:(q)b;
 - (id) tableView:(id)acellForRowAtIndexPath:(id)b;
 - (q) numberOfSectionsInTableView:(id)a;
 - (void) encodeRestorableStateWithCoder:(id)a;
 - (void) decodeRestorableStateWithCoder:(id)a;
 - (void) _willChangeToIdiom:(q)aonScreen:(id)b;
 - (void) loadView;
 - (void) viewWillAppear:(BOOL)a;
 - (BOOL) _isSupportedInterfaceOrientation:(q)a;
 - (id) tabBarItem;
 - (BOOL) _viewControllerWasSelected;
 - (void) setMoreViewControllers:(id)a;
 - (id) moreViewControllers;
 - (void) setAllowsCustomizing:(BOOL)a;
 - (void) setMoreViewControllersChanged:(BOOL)a;
 - (BOOL) allowsCustomizing;
 - (BOOL) moreViewControllersChanged;
 - (void) _updateEditButton;
 - (void) _layoutCells;
 - (id) _targetNavigationController;
 - (id) init;
 - (id) table;


@end
