
@interface UIMoreNavigationController : UINavigationController {

    UIMoreListController* _moreListController;
    UINavigationController* _originalNavigationController;
    UIViewController* _originalRootViewController;
}
 + (Class) _moreListControllerClass;

 - (void) dealloc;
 - (void) _willChangeToIdiom:(long long)a onScreen:(id)b ;
 - (void) pushViewController:(id)a animated:(BOOL)b ;
 - (void) didShowViewController:(id)a animated:(BOOL)b ;
 - (id) moreListController;
 - (void) setMoreViewControllers:(id)a ;
 - (void) _restoreOriginalNavigationController;
 - (void) restoreOriginalNavigationController:(id)a ;
 - (id) displayedViewController;
 - (id) moreViewControllers;
 - (void) setDisplayedViewController:(id)a ;
 - (void) setAllowsCustomizing:(BOOL)a ;
 - (void) setMoreViewControllersChanged:(BOOL)a ;
 - (void) _redisplayMoreTableView;
 - (id) _preparedViewController:(id)a ;
 - (void) _ensureChildrenHaveParentViewController;
 - (BOOL) allowsCustomizing;
 - (BOOL) moreViewControllersChanged;
 - (id) _stateRestorationParentForChildViewController:(id)a index:(^Q)b ;
 - (id) init;


@end
