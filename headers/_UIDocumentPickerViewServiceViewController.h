
@protocol _UIDocumentPickerRemoteViewControllerContaining, _UIDocumentPickerOverviewDelegate, _UIDocumentPickerViewController, _UIDocumentPickerServiceViewController;
@interface _UIDocumentPickerViewServiceViewController : UINavigationController <_UIDocumentPickerRemoteViewControllerContaining, _UIDocumentPickerOverviewDelegate, _UIDocumentPickerViewController, _UIDocumentPickerServiceViewController> {

    BOOL _displayedAsMenu;
    BOOL _hasBeenDismissed;
    BOOL _showingSpinner;
    NSArray* _pickableTypes;
    unsigned long long _pickerMode;
    NSURL* _uploadURL;
    NSArray* _auxiliaryOptions;
    NSString* _currentPickerIdentifier;
}
 + (id) _exportedInterface;
 + (id) _remoteViewControllerInterface;

 - (void) dealloc;
 - (void) _setTintColor:(id)a ;
 - (void) _showDefaultPicker;
 - (void) _dismissViewController;
 - (void) _prepareForDisplayWithCompletion:(@?)a ;
 - (void) _setPickableTypes:(id)a ;
 - (void) _setPickerMode:(unsigned long long)a ;
 - (void) _setUploadURLWrapper:(id)a ;
 - (id) uploadURL;
 - (void) _didSelectURL:(id)a ;
 - (void) _didSelectPicker;
 - (void) _dismissWithOption:(id)a ;
 - (void) _stitchFileCreationAtURL:(id)a ;
 - (void) _displayLocationsMenuFromRect:({CGRect={CGPoint=dd}{CGSize=dd}})a ;
 - (void) setSortOrder:(int)a ;
 - (id) pickableTypes;
 - (unsigned long long) pickerMode;
 - (int) sortOrder;
 - (void) setViewControllers:(id)a animated:(BOOL)b ;
 - (void) _setAuxiliaryOptions:(id)a ;
 - (void) _documentPickerDidDismiss;
 - (void) _setUploadURL:(id)a ;
 - (id) auxiliaryOptions;
 - (long long) displayMode;
 - (void) beginDownloadingURL:(id)a completion:(@?)b ;
 - (id) hostingViewController;
 - (BOOL) hasBeenDismissed;
 - (void) setHasBeenDismissed:(BOOL)a ;
 - (void) setNavigationItemSpinner:(BOOL)a ;
 - (void) _createBookmarkAndDismissWithCloudURL:(id)a ;
 - (void) _dismissWithFileProviderURL:(id)a bundleIdentifier:(id)b ;
 - (void) setCurrentPickerIdentifier:(id)a ;
 - (id) currentPickerIdentifier;
 - (void) _showTopLevelViewController;
 - (void) _checkFileStatus;
 - (void) setDisplayedAsMenu:(BOOL)a ;
 - (void) setupNavigationItemForPicker:(id)a isRoot:(BOOL)b ;
 - (void) _showPicker:(id)a ;
 - (void) _doneButton:(id)a ;
 - (void) _showLocationPopup:(id)a ;
 - (void) _didInstantiateThirdPartyPickerWithDescription:(id)a viewController:(id)b ;
 - (void) _presentError:(id)a forThirdPartyPickerWithDescription:(id)b ;
 - (void) dismissWithURL:(id)a forBundleIdentifier:(id)b ;
 - (void) _showLocationPopupFromBarButtonItem:(id)a rect:({CGRect={CGPoint=dd}{CGSize=dd}})b ;
 - (BOOL) displayedAsMenu;
 - (void) overviewController:(id)a selectedDocumentPickerWithIdentifier:(id)b ;
 - (BOOL) _appIsSharingAware;
 - (void) overviewController:(id)a selectedAuxiliaryOptionWithIdentifier:(id)b ;
 - (BOOL) shouldShowSearch;
 - (void) setDisplayMode:(long long)a ;
 - (void) _dismissWithImportURL:(id)a ;
 - (void) _willAppearInRemoteViewController;
 - (BOOL) showingSpinner;
 - (void) setShowingSpinner:(BOOL)a ;


@end
