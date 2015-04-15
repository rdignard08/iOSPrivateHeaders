
@protocol UICollectionViewDataSource, UICollectionViewDelegate, _UIDocumentPickerContainedViewController;
@interface _UIDocumentPickerDocumentCollectionViewController : UICollectionViewController <UICollectionViewDataSource, UICollectionViewDelegate, _UIDocumentPickerContainedViewController> {

    <_UIDocumentPickerServiceViewController>* _weak_serviceViewController;
    BOOL _shouldHideSortBar;
    BOOL _updatesMayAnimate;
    _UIDocumentPickerContainerModel* _model;
    id _monitoringToken;
    _UIDocumentPickerSortOrderView* _sortView;
    NSArray* _modelObjects;
    UIActivityIndicatorView* _initialActivityView;
}

 - (void) dealloc;
 - (long long) collectionView:(id)a numberOfItemsInSection:(long long)b ;
 - (id) collectionView:(id)a cellForItemAtIndexPath:(id)b ;
 - (BOOL) collectionView:(id)a shouldSelectItemAtIndexPath:(id)b ;
 - (void) collectionView:(id)a didSelectItemAtIndexPath:(id)b ;
 - (void) collectionView:(id)a willDisplayCell:(id)b forItemAtIndexPath:(id)c ;
 - (void) collectionView:(id)a didEndDisplayingCell:(id)b forItemAtIndexPath:(id)c ;
 - (void) viewWillLayoutSubviews;
 - (void) viewDidLayoutSubviews;
 - (void) willMoveToParentViewController:(id)a ;
 - (void) viewDidAppear:(BOOL)a ;
 - (id) modelObjects;
 - (void) setModelObjects:(id)a ;
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
 - (void) _updateIconSpacing;
 - (BOOL) shouldHideSortBar;
 - (id) monitoringToken;
 - (void) setMonitoringToken:(id)a ;
 - (BOOL) updatesMayAnimate;


@end
