
@protocol UITableViewDelegate, UITableViewDataSource;
@interface UIMoreListController : UIViewController <UITableViewDelegate, UITableViewDataSource> {

    UITableView* _table;
    BOOL _allowsCustomizing;
    BOOL _disableCustomizing;
    BOOL _hideNavigationBar;
    NSArray* _moreViewControllers;
    UIMoreListCellLayoutManager* _layoutManager;
    UIBarButtonItem* _moreEditButtonItem;
    BOOL _moreViewControllersChanged;
}

 - (void) dealloc;
 - (void) tableView:(id)a willDisplayCell:(id)b forRowAtIndexPath:(id)c ;
 - (void) tableView:(id)a didSelectRowAtIndexPath:(id)b ;
 - (long long) tableView:(id)a numberOfRowsInSection:(long long)b ;
 - (id) tableView:(id)a cellForRowAtIndexPath:(id)b ;
 - (long long) numberOfSectionsInTableView:(id)a ;
 - (void) encodeRestorableStateWithCoder:(id)a ;
 - (void) decodeRestorableStateWithCoder:(id)a ;
 - (void) _willChangeToIdiom:(long long)a onScreen:(id)b ;
 - (void) loadView;
 - (void) viewWillAppear:(BOOL)a ;
 - (BOOL) _isSupportedInterfaceOrientation:(long long)a ;
 - (id) tabBarItem;
 - (BOOL) _viewControllerWasSelected;
 - (void) setMoreViewControllers:(id)a ;
 - (id) moreViewControllers;
 - (void) setAllowsCustomizing:(BOOL)a ;
 - (void) setMoreViewControllersChanged:(BOOL)a ;
 - (BOOL) allowsCustomizing;
 - (BOOL) moreViewControllersChanged;
 - (void) _updateEditButton;
 - (void) _layoutCells;
 - (id) _targetNavigationController;
 - (id) init;
 - (id) table;


@end
