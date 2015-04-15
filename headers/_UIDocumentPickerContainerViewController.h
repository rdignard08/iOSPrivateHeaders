
@protocol _UIDocumentPickerServiceInvalidating;
@interface _UIDocumentPickerContainerViewController : UIViewController <_UIDocumentPickerServiceInvalidating> {

    _UIDocumentPickerViewServiceViewController* _weak_serviceViewController;
    BOOL _rootContainer;
    _UIDocumentPickerContainerModel* _model;
    UIViewController<_UIDocumentPickerContainedViewController>* _childViewController;
    _UINavigationControllerPalette* _searchPalette;
}

 - (void) dealloc;
 - (void) invalidate;
 - (id) initWithURL:(id)a ;
 - (void) viewDidLayoutSubviews;
 - (void) didMoveToParentViewController:(id)a ;
 - (void) viewWillAppear:(BOOL)a ;
 - (void) willMoveToParentViewController:(id)a ;
 - (void) viewWillDisappear:(BOOL)a ;
 - (id) model;
 - (id) serviceViewController;
 - (void) setServiceViewController:(id)a ;
 - (void) setRootContainer:(BOOL)a ;
 - (id) initWithModel:(id)a ;
 - (void) setModel:(id)a ;
 - (BOOL) isRootContainer;
 - (void) teardownPalettes;
 - (id) childViewController;
 - (void) setChildViewController:(id)a ;
 - (void) setChildViewController:(id)a animated:(BOOL)b ;
 - (void) _sortOrderViewChanged:(id)a ;
 - (void) ensureChildViewController;
 - (void) _updateForServiceView;
 - (void) setupPalettes;
 - (void) setSearchPalette:(id)a ;
 - (id) searchPalette;
 - (void) _pickCurrentLocationForUpload:(id)a ;
 - (void) _tryExportingFile:(id)a toLocation:(id)b ;
 - (id) _mangledFilenameForURL:(id)a ;
 - (id) url;


@end
