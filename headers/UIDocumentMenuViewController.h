
@protocol _UIDocumentPickerRemoteViewControllerContaining, UIAlertControllerContaining;
@interface UIDocumentMenuViewController : UIViewController <_UIDocumentPickerRemoteViewControllerContaining, UIAlertControllerContaining> {

    <UIDocumentMenuDelegate> _weak_delegate;
    BOOL _dismissDelegateCalled;
    NSMutableArray _auxiliaryOptions;
    _UIDocumentPickerRemoteViewController _remoteViewController;
    UIAlertController _alertController;
    unsigned long long _documentPickerMode;
    NSURL _uploadURL;
}

 - (void) dealloc;
 - (void) setDelegate:(id)a;
 - (long long) modalPresentationStyle;
 - (void) loadView;
 - (void) _setRemoteViewController:(id)a;
 - (void) _dismissViewController;
 - (void) setModalPresentationStyle:(long long)a;
 - (id) _remoteViewController;
 - (void) setDocumentPickerMode:(unsigned long long)a;
 - (void) _commonInitWithCompletion:(@?)a;
 - (void) setUploadURL:(id)a;
 - (unsigned long long) documentPickerMode;
 - (id) uploadURL;
 - (id) initWithDocumentTypes:(id)ainMode:(unsigned long long)b;
 - (id) initWithURL:(id)ainMode:(unsigned long long)b;
 - (void) _didSelectURL:(id)a;
 - (void) _didSelectPicker;
 - (void) _dismissWithOption:(id)a;
 - (void) _stitchFileCreationAtURL:(id)a;
 - (void) _displayLocationsMenuFromRect:({CGRect={CGPoint=dd}{CGSize=dd}})a;
 - (void) viewWillAppear:(BOOL)a;
 - (id) _presentationControllerForPresentedController:(id)apresentingController:(id)bsourceController:(id)c;
 - (BOOL) _requiresCustomPresentationController;
 - (id) _containedAlertController;
 - (void) setAlertController:(id)a;
 - (void) setAuxiliaryOptions:(id)a;
 - (id) auxiliaryOptions;
 - (id) alertController;
 - (void) setDismissDelegateCalled:(BOOL)a;
 - (BOOL) dismissDelegateCalled;
 - (void) addOptionWithTitle:(id)aimage:(id)border:(unsigned long long)chandler:(@?)d;
 - (id) delegate;


@end
