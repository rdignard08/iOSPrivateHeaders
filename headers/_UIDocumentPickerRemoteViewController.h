
@protocol _UIDocumentPickerViewControllerHost, _UIDocumentPickerServiceInvalidating;
@interface _UIDocumentPickerRemoteViewController : _UIRemoteViewController <_UIDocumentPickerViewControllerHost, _UIDocumentPickerServiceInvalidating> {

    @"UIViewController<_UIDocumentPickerRemoteViewControllerContaining>" _publicController;
    @"NSString" _identifier;
    @"NSExtension" _extension;
    @"<NSCopying><NSObject>" _extensionRequestIdentifier;
}
 + (id) exportedInterface;
 + (id) serviceViewControllerInterface;

 - (void) invalidate;
 - (void) setExtensionRequestIdentifier:(id)a;
 - (void) setExtension:(id)a;
 - (void) _dismissViewController;
 - (void) setPublicController:(id)a;
 - (void) setPreferredContentSize:({CGSize=dd})a;
 - (void) _didSelectPicker;
 - (void) _dismissWithOption:(id)a;
 - (void) _stitchFileCreationAtURL:(id)a;
 - (void) viewDidLoad;
 - (void) _tintColorDidChangeToColor:(id)a;
 - (void) _didSelectURLWrapper:(id)a;
 - (id) publicController;
 - (void) viewServiceDidTerminateWithError:(id)a;
 - (id) extension;
 - (id) extensionRequestIdentifier;
 - (id) identifier;
 - (void) setIdentifier:(id)a;


@end
