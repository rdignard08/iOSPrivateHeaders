
@interface _UIRemoteViewControllerConnectionRequest : NSObject {

    _UIRemoteViewService* _service;
    @? _handler;
    NSString* _viewServiceBundleIdentifier;
    NSString* _viewControllerClassName;
    NSUUID* _contextToken;
    NSArray* _serializedAppearanceCustomizations;
    BOOL _legacyAppearance;
    id _exportedHostingObject;
    Class _remoteViewControllerClass;
    <_UIViewServiceDeputyXPCInterface>* _serviceViewControllerDeputyInterface;
    _UIAsyncInvocation* _cancelInvocationForCurrentOperation;
    _UIRemoteViewControllerConnectionInfo* _connectionInfo;
    NSObject<OS_dispatch_queue>* _queue;
    BOOL _isCancelledOrComplete;
    NSError* _error;
    _UIAsyncInvocation* _requestCancellationInvocation;
}
 + (id) __requestRemoteViewController:(id)aservice:(id)bfromServiceWithBundleIdentifier:(id)cserializedAppearanceCustomizations:(id)dlegacyAppearance:(BOOL)eexportedHostingObject:(id)fserviceViewControllerDeputyInterface:(id)gconnectionHandler:(@?)h;
 + (id) requestViewController:(id)afromServiceWithBundleIdentifier:(id)bserializedAppearanceCustomizations:(id)clegacyAppearance:(BOOL)dexportedHostingObject:(id)eserviceViewControllerDeputyInterface:(id)fconnectionHandler:(@?)g;
 + (id) requestViewControllerWithService:(id)aserializedAppearanceCustomizations:(id)blegacyAppearance:(BOOL)cexportedHostingObject:(id)dremoteViewControllerClass:(Class)eserviceViewControllerDeputyInterface:(id)fconnectionHandler:(@?)g;

 - (void) dealloc;
 - (void) _cancelUnconditionallyThen:(@?)a ;
 - (void) _connectToPlugInKitService;
 - (void) _connectToViewService;
 - (id) _cancelWithError:(id)a ;
 - (void) _connectToViewControllerOperator;
 - (void) _sendServiceViewControllerRequest;
 - (void) _connectToDeputyWithInterface:(id)a fromExportedHostingObject:(id)b successHandler:(@?)c ;
 - (void) _connectToTextEffectsOperator;
 - (void) _connectToServiceViewController;
 - (void) _sendServiceTextEffectsRequest;
 - (void) _connectToViewControllerControlMessageDeputy;
 - (void) _didFinishEstablishingConnection;


@end
