
@protocol _UIDocumentPickerRemoteViewControllerContaining, UIAlertControllerContaining;
@interface UIDocumentMenuViewController : UIViewController <_UIDocumentPickerRemoteViewControllerContaining, UIAlertControllerContaining> {

    @"<UIDocumentMenuDelegate>" _weak_delegate;
    BOOL _dismissDelegateCalled;
    @"NSMutableArray" _auxiliaryOptions;
    @"_UIDocumentPickerRemoteViewController" _remoteViewController;
    @"UIAlertController" _alertController;
    Q _documentPickerMode;
    @"NSURL" _uploadURL;
}

 - (void) dealloc;
 - (void) setDelegate:(id)a;
 - (q) modalPresentationStyle;
 - (void) loadView;
 - (void) _setRemoteViewController:(id)a;
 - (void) _dismissViewController;
 - (void) setModalPresentationStyle:(q)a;
 - (id) _remoteViewController;
 - (void) setDocumentPickerMode:(Q)a;
 - (void) _commonInitWithCompletion:(@?)a;
 - (void) setUploadURL:(id)a;
 - (Q) documentPickerMode;
 - (id) uploadURL;
 - (id) initWithDocumentTypes:(id)ainMode:(Q)b;
 - (id) initWithURL:(id)ainMode:(Q)b;
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
 - (void) addOptionWithTitle:(id)aimage:(id)border:(Q)chandler:(@?)d;
 - (id) delegate;


@end
