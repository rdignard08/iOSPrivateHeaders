
@protocol NSSecureCoding, NSCopying, NSXPCListenerDelegate, _NSExtensionAuxHostingBase;
@interface NSExtensionContext : NSObject <NSSecureCoding, NSCopying, NSXPCListenerDelegate, _NSExtensionAuxHostingBase> {

    BOOL __dummyExtension;
    NSArray* _inputItems;
    NSUUID* __UUID;
    @? __requestCleanUpBlock;
    <_NSExtensionContextHosting>* __extensionHostProxy;
    <_NSExtensionContextVending>* __extensionVendorProxy;
    NSXPCConnection* __auxiliaryConnection;
    NSXPCListener* __auxiliaryListener;
    id __principalObject;
}
@property (nonatomic, copy, readwrite) NSArray* inputItems;
@property (nonatomic, copy, readwrite) NSUUID* _UUID;
@property (nonatomic, copy, readwrite, setter=_setRequestCleanUpBlock:) NSNumber* _requestCleanUpBlock;
@property (nonatomic, retain, readwrite, setter=_setExtensionHostProxy:) NSNumber* _extensionHostProxy;
@property (nonatomic, retain, readwrite, setter=_setExtensionVendorProxy:) NSNumber* _extensionVendorProxy;
@property (nonatomic, retain, readwrite, setter=_setAuxiliaryConnection:) NSXPCConnection* _auxiliaryConnection;
@property (nonatomic, retain, readwrite, setter=_setAuxiliaryListener:) NSXPCListener* _auxiliaryListener;
@property (nonatomic, assign, readwrite, setter=_setPrincipalObject:) NSNumber* _principalObject;
@property (nonatomic, assign, readwrite, getter=_isDummyExtension, setter=_setDummyExtension:) NSNumber* _dummyExtension;
 + (BOOL) supportsSecureCoding;
 + (void) initialize;
 + (id) _extensionContextHostProtocol;
 + (id) _extensionContextVendorProtocol;
 + (id) _extensionContextForIdentifier:(id)a;
 + (id) _extensionContextHostProtocolAllowedClassesForItems;
 + (id) _extensionAuxiliaryHostProtocol;
 + (id) _extensionAuxiliaryVendorProtocol;

 - (BOOL) listener:(id)a shouldAcceptNewConnection:(id)b ;
 - (id) copyWithZone:(^{_NSZone=})a ;
 - (id) description;
 - (void) dealloc;
 - (void) invalidate;
 - (void) openURL:(id)a completionHandler:(@?)b ;
 - (void) _setRequestCleanUpBlock:(@?)a ;
 - (id) _auxiliaryConnection;
 - (void) completeRequestReturningItems:(id)a completionHandler:(@?)b ;
 - (id) init;
 - (void) encodeWithCoder:(id)a ;
 - (id) initWithCoder:(id)a ;
 - (id) initWithInputItems:(id)a listenerEndpoint:(id)b contextUUID:(id)c ;
 - (void) _setExtensionHostProxy:(id)a ;
 - (void) _willPerformHostCallback:(@?)a ;
 - (void) _setPrincipalObject:(id)a ;
 - (void) _openURL:(id)a completion:(@?)b ;
 - (void) ___nsx_pingHost:(@?)a ;
 - (id) _derivedExtensionAuxiliaryHostProtocol;
 - (id) initWithInputItems:(id)a contextUUID:(id)b ;
 - (id) initWithInputItems:(id)a ;
 - (void) _completeRequestReturningItemsSecondHalf:(@?)a ;
 - (BOOL) _isHost;
 - (BOOL) _isDummyExtension;
 - (void) didConnectToVendor:(id)a ;
 - (void) cancelRequestWithError:(id)a ;
 - (void) _loadItemForPayload:(id)a completionHandler:(@?)b ;
 - (void) _loadPreviewImageForPayload:(id)a completionHandler:(@?)b ;
 - (id) inputItems;
 - (void) _setInputItems:(id)a ;
 - (id) _UUID;
 - (void) set_UUID:(id)a ;
 - (@?) _requestCleanUpBlock;
 - (id) _extensionHostProxy;
 - (id) _extensionVendorProxy;
 - (void) _setExtensionVendorProxy:(id)a ;
 - (void) _setAuxiliaryConnection:(id)a ;
 - (id) _auxiliaryListener;
 - (void) _setAuxiliaryListener:(id)a ;
 - (id) _principalObject;
 - (void) _setDummyExtension:(BOOL)a ;


@end
