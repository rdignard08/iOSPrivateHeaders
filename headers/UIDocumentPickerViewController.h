
@protocol _UIDocumentPickerRemoteViewControllerContaining;
@interface UIDocumentPickerViewController : UIViewController <_UIDocumentPickerRemoteViewControllerContaining> {

    <UIDocumentPickerDelegate>* _weak_delegate;
    unsigned long long _documentPickerMode;
    _UIDocumentPickerRemoteViewController* _remoteViewController;
    _UIRemoteViewService* _remoteViewService;
    NSURL* _uploadURL;
    NSMutableArray* _stitchingTokens;
}
 + (id) localizedName;
 + (id) _identifier;
 + (id) _extension;
 + (id) supportedContentTypes;
 + (unsigned long long) supportedModes;
 + (id) image;

 - (void) dealloc;
 - (void) setDelegate:(id)a ;
 - (void) setStitchingTokens:(id)a ;
 - (void) _setRemoteViewController:(id)a ;
 - (void) _dismissViewController;
 - (id) _remoteViewController;
 - (id) stitchingTokens;
 - (void) _finishStitching;
 - (void) _callDelegateWithSelectedURLAndDismiss:(id)a ;
 - (void) setDocumentPickerMode:(unsigned long long)a ;
 - (void) _commonInitWithCompletion:(@?)a ;
 - (void) setUploadURL:(id)a ;
 - (void) _prepareForDeletionIfNecessary;
 - (unsigned long long) documentPickerMode;
 - (id) uploadURL;
 - (id) initWithDocumentTypes:(id)a inMode:(unsigned long long)b ;
 - (id) initWithURL:(id)a inMode:(unsigned long long)b ;
 - (void) _didSelectURL:(id)a ;
 - (void) _didSelectPicker;
 - (void) _dismissWithOption:(id)a ;
 - (void) _stitchFileCreationAtURL:(id)a ;
 - (void) _displayLocationsMenuFromRect:({CGRect={CGPoint=dd}{CGSize=dd}})a ;
 - (void) addAuxiliaryOptionWithTitle:(id)a image:(id)b identifier:(id)c ;
 - (id) _initWithRemoteViewController:(id)a inMode:(unsigned long long)b uploadURLOrNil:(id)c ;
 - (id) initForSelectingDocumentMatchingTypes:(id)a inMode:(unsigned long long)b ;
 - (id) initWithExistingDocumentAtURL:(id)a inMode:(unsigned long long)b ;
 - (id) remoteViewService;
 - (void) setRemoteViewService:(id)a ;
 - (id) delegate;


@end
