
@protocol _UIDocumentPickerContainedViewController;
@interface _UIDocumentPickerDocumentTableViewController : UITableViewController <_UIDocumentPickerContainedViewController> {

    _UIDocumentPickerViewServiceViewController* _weak_serviceViewController;
    BOOL _shouldHideSortBar;
    BOOL _updatesMayAnimate;
    NSURL* _observedURL;
    _UIDocumentPickerContainerModel* _model;
    id _monitoringToken;
    _UIDocumentPickerSortOrderView* _sortView;
    UIActivityIndicatorView* _initialActivityView;
}

 - (void) dealloc;
 - (void) tableView:(id)a willDisplayCell:(id)b forRowAtIndexPath:(id)c ;
 - (BOOL) tableView:(id)a shouldHighlightRowAtIndexPath:(id)b ;
 - (void) tableView:(id)a didSelectRowAtIndexPath:(id)b ;
 - (long long) tableView:(id)a numberOfRowsInSection:(long long)b ;
 - (id) tableView:(id)a cellForRowAtIndexPath:(id)b ;
 - (long long) numberOfSectionsInTableView:(id)a ;
 - (void) viewDidLayoutSubviews;
 - (void) viewWillAppear:(BOOL)a ;
 - (void) willMoveToParentViewController:(id)a ;
 - (id) model;
 - (id) serviceViewController;
 - (void) setServiceViewController:(id)a ;
 - (void) containersChangedWithSnapshot:(id)a differences:(id)b ;
 - (id) initWithModel:(id)a ;
 - (void) setModel:(id)a ;
 - (void) scrollSortViewToVisible;
 - (id) sortView;
 - (void) setShouldHideSortBar:(BOOL)a ;
 - (void) setSortView:(id)a ;
 - (void) setInitialActivityView:(id)a ;
 - (id) initialActivityView;
 - (void) _dynamicTypeSizeChanged:(id)a ;
 - (void) _unlockAnimations;
 - (void) setUpdatesMayAnimate:(BOOL)a ;
 - (void) setMonitoring:(BOOL)a ;
 - (BOOL) shouldHideSortBar;
 - (id) monitoringToken;
 - (void) setMonitoringToken:(id)a ;
 - (BOOL) updatesMayAnimate;
 - (void) updateEstimatedRowHeight;
 - (id) observedURL;
 - (void) setObservedURL:(id)a ;


@end
