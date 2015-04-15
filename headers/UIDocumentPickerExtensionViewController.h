
@protocol _UIDocumentPickerExtensionViewController;
@interface UIDocumentPickerExtensionViewController : UIViewController <_UIDocumentPickerExtensionViewController> {

    unsigned long long _documentPickerMode;
    NSURL _originalURL;
    NSArray _validTypes;
    NSString _providerIdentifier;
    NSURL _documentStorageURL;
}
 + (id) _exportedInterface;
 + (id) _remoteViewControllerInterface;

 - (void) dealloc;
 - (void) _setTintColor:(id)a;
 - (void) _setPickableTypes:(id)a;
 - (void) _setPickerMode:(unsigned long long)a;
 - (void) _setUploadURLWrapper:(id)a;
 - (unsigned long long) documentPickerMode;
 - (void) _documentPickerDidDismiss;
 - (void) _prepareWithExtensionInfo:(id)acompletionHandler:(@?)b;
 - (id) documentStorageURL;
 - (void) _setUploadURL:(id)a;
 - (void) _setDocumentStorageURL:(id)a;
 - (void) _setProviderIdentifier:(id)a;
 - (void) prepareForPresentationInMode:(unsigned long long)a;
 - (void) dismissGrantingAccessToURL:(id)a;
 - (void) prepareForDocumentSelectionInMode:(unsigned long long)a;
 - (id) originalURL;
 - (id) validTypes;
 - (id) providerIdentifier;


@end
