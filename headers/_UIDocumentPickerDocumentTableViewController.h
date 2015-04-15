
@protocol _UIDocumentPickerContainedViewController;
@interface _UIDocumentPickerDocumentTableViewController : UITableViewController <_UIDocumentPickerContainedViewController> {

    @"_UIDocumentPickerViewServiceViewController" _weak_serviceViewController;
    BOOL _shouldHideSortBar;
    BOOL _updatesMayAnimate;
    @"NSURL" _observedURL;
    @"_UIDocumentPickerContainerModel" _model;
    id _monitoringToken;
    @"_UIDocumentPickerSortOrderView" _sortView;
    @"UIActivityIndicatorView" _initialActivityView;
}

 - (void) dealloc;
 - (void) tableView:(id)awillDisplayCell:(id)bforRowAtIndexPath:(id)c;
 - (BOOL) tableView:(id)ashouldHighlightRowAtIndexPath:(id)b;
 - (void) tableView:(id)adidSelectRowAtIndexPath:(id)b;
 - (long long) tableView:(id)anumberOfRowsInSection:(long long)b;
 - (id) tableView:(id)acellForRowAtIndexPath:(id)b;
 - (long long) numberOfSectionsInTableView:(id)a;
 - (void) viewDidLayoutSubviews;
 - (void) viewWillAppear:(BOOL)a;
 - (void) willMoveToParentViewController:(id)a;
 - (id) model;
 - (id) serviceViewController;
 - (void) setServiceViewController:(id)a;
 - (void) containersChangedWithSnapshot:(id)adifferences:(id)b;
 - (id) initWithModel:(id)a;
 - (void) setModel:(id)a;
 - (void) scrollSortViewToVisible;
 - (id) sortView;
 - (void) setShouldHideSortBar:(BOOL)a;
 - (void) setSortView:(id)a;
 - (void) setInitialActivityView:(id)a;
 - (id) initialActivityView;
 - (void) _dynamicTypeSizeChanged:(id)a;
 - (void) _unlockAnimations;
 - (void) setUpdatesMayAnimate:(BOOL)a;
 - (void) setMonitoring:(BOOL)a;
 - (BOOL) shouldHideSortBar;
 - (id) monitoringToken;
 - (void) setMonitoringToken:(id)a;
 - (BOOL) updatesMayAnimate;
 - (void) updateEstimatedRowHeight;
 - (id) observedURL;
 - (void) setObservedURL:(id)a;


@end
