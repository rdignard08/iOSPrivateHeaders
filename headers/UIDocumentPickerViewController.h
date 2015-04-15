
@protocol _UIDocumentPickerRemoteViewControllerContaining;
@interface UIDocumentPickerViewController : UIViewController <_UIDocumentPickerRemoteViewControllerContaining> {

    @"<UIDocumentPickerDelegate>" _weak_delegate;
    Q _documentPickerMode;
    @"_UIDocumentPickerRemoteViewController" _remoteViewController;
    @"_UIRemoteViewService" _remoteViewService;
    @"NSURL" _uploadURL;
    @"NSMutableArray" _stitchingTokens;
}
 + (id) localizedName;
 + (id) _identifier;
 + (id) _extension;
 + (id) supportedContentTypes;
 + (Q) supportedModes;
 + (id) image;

 - (void) dealloc;
 - (void) setDelegate:(id)a;
 - (void) setStitchingTokens:(id)a;
 - (void) _setRemoteViewController:(id)a;
 - (void) _dismissViewController;
 - (id) _remoteViewController;
 - (id) stitchingTokens;
 - (void) _finishStitching;
 - (void) _callDelegateWithSelectedURLAndDismiss:(id)a;
 - (void) setDocumentPickerMode:(Q)a;
 - (void) _commonInitWithCompletion:(@?)a;
 - (void) setUploadURL:(id)a;
 - (void) _prepareForDeletionIfNecessary;
 - (Q) documentPickerMode;
 - (id) uploadURL;
 - (id) initWithDocumentTypes:(id)ainMode:(Q)b;
 - (id) initWithURL:(id)ainMode:(Q)b;
 - (void) _didSelectURL:(id)a;
 - (void) _didSelectPicker;
 - (void) _dismissWithOption:(id)a;
 - (void) _stitchFileCreationAtURL:(id)a;
 - (void) _displayLocationsMenuFromRect:({CGRect={CGPoint=dd}{CGSize=dd}})a;
 - (void) addAuxiliaryOptionWithTitle:(id)aimage:(id)bidentifier:(id)c;
 - (id) _initWithRemoteViewController:(id)ainMode:(Q)buploadURLOrNil:(id)c;
 - (id) initForSelectingDocumentMatchingTypes:(id)ainMode:(Q)b;
 - (id) initWithExistingDocumentAtURL:(id)ainMode:(Q)b;
 - (id) remoteViewService;
 - (void) setRemoteViewService:(id)a;
 - (id) delegate;


@end
