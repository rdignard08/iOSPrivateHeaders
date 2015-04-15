
@interface UIInputViewControllerInterfaceClient : NSExtensionContext {

    @"<_UIIVCInterface>" _forwardingInterface;
}
 + (id) _extensionAuxiliaryHostProtocol;
 + (id) _extensionAuxiliaryVendorProtocol;

 - (void) dealloc;
 - (id) responseDelegate;
 - (id) forwardingInterface;
 - (void) _handleInputViewControllerState:(id)a;
 - (void) _tearDownRemoteService;
 - (void) setForwardingInterface:(id)a;


@end
