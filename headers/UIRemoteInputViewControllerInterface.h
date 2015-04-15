
@protocol _UIIVCResponseDelegate;
@interface UIRemoteInputViewControllerInterface : NSExtensionContext <_UIIVCResponseDelegate> {

    <_UIIVCResponseDelegate> _responseDelegate;
}
 + (id) _extensionAuxiliaryHostProtocol;
 + (id) _extensionAuxiliaryVendorProtocol;

 - (id) responseDelegate;
 - (void) setResponseDelegate:(id)a;
 - (void) _performInputViewControllerOutput:(id)a;
 - (void) _handleInputViewControllerState:(id)a;
 - (void) _tearDownRemoteService;
 - (void) _openURL:(id)acompletion:(@?)b;


@end
