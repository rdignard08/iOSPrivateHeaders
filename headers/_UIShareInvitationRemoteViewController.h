
@protocol _UIShareInvitationViewControllerHost;
@interface _UIShareInvitationRemoteViewController : _UIRemoteViewController <_UIShareInvitationViewControllerHost> {

    _UISharingViewController* _publicController;
    NSExtension* _extension;
    <NSCopying><NSObject>* _extensionRequestIdentifier;
}
 + (id) exportedInterface;
 + (id) serviceViewControllerInterface;

 - (void) invalidate;
 - (void) setExtensionRequestIdentifier:(id)a ;
 - (void) setExtension:(id)a ;
 - (void) _dismissViewController;
 - (void) setPublicController:(id)a ;
 - (void) viewDidLoad;
 - (void) _tintColorDidChangeToColor:(id)a ;
 - (id) publicController;
 - (void) viewServiceDidTerminateWithError:(id)a ;
 - (id) extension;
 - (id) extensionRequestIdentifier;
 - (void) _performAuxiliaryActionWithCompletion:(@?)a ;
 - (void) _performHeaderActionWithCompletion:(@?)a ;
 - (void) _shareDidChange;
 - (void) _shareWasMadePrivate;


@end
