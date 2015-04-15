
@protocol NSXPCListenerDelegate, _NSExtensionContextVending;
@interface _NSExtensionContextVendor : NSObject <NSXPCListenerDelegate, _NSExtensionContextVending> {

    NSMutableDictionary* __extensionServiceConnections;
    NSMutableDictionary* __extensionContexts;
    NSMutableDictionary* __extensionPrincipalObjects;
}
@property (nonatomic, retain, readwrite, setter=_setExtensionServiceConnections:) NSMutableDictionary* _extensionServiceConnections;
@property (nonatomic, retain, readwrite, setter=_setExtensionContexts:) NSMutableDictionary* _extensionContexts;
@property (nonatomic, retain, readwrite, setter=_setExtensionPrincipalObjects:) NSMutableDictionary* _extensionPrincipalObjects;
 + (id) _sharedExtensionContextVendor;
 + (id) _extensionDictionary;
 + (id) _extensionMainStoryboard;
 + (Class) _extensionPrincipalClass;
 + (Class) _extensionContextClass;
 + (void) _startListening;
 + (id) _completionConcurrentQueue;
 + (id) _expirationConcurrentQueue;

 - (BOOL) listener:(id)a shouldAcceptNewConnection:(id)b ;
 - (void) dealloc;
 - (void) _tearDownContextWithUUID:(id)a ;
 - (BOOL) _shouldCreatePrincipalObject;
 - (void) _setPrincipalObject:(id)a forUUID:(id)b ;
 - (id) _extensionContextForUUID:(id)a ;
 - (void) _beginRequestWithExtensionItems:(id)a listenerEndpoint:(id)b withContextUUID:(id)c completion:(@?)d ;
 - (void) _hostDidEnterBackgroundForContextUUID:(id)a completion:(@?)b ;
 - (void) _hostWillEnterForegroundForContextUUID:(id)a completion:(@?)b ;
 - (void) _hostWillResignActiveForContextUUID:(id)a completion:(@?)b ;
 - (void) _hostDidBecomeActiveForContextUUID:(id)a completion:(@?)b ;
 - (id) _extensionServiceConnections;
 - (void) _setExtensionServiceConnections:(id)a ;
 - (id) _extensionContexts;
 - (void) _setExtensionContexts:(id)a ;
 - (id) _extensionPrincipalObjects;
 - (void) _setExtensionPrincipalObjects:(id)a ;


@end
