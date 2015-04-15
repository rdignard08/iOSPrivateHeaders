
@protocol NSXPCListenerDelegate, _NSExtensionContextVending;
@interface _NSExtensionContextVendor : NSObject <NSXPCListenerDelegate, _NSExtensionContextVending> {

    @"NSMutableDictionary" __extensionServiceConnections;
    @"NSMutableDictionary" __extensionContexts;
    @"NSMutableDictionary" __extensionPrincipalObjects;
}
@property (nonatomic, retain, readwrite, _setExtensionServiceConnections:) NSMutableDictionary* _extensionServiceConnections;
@property (nonatomic, retain, readwrite, _setExtensionContexts:) NSMutableDictionary* _extensionContexts;
@property (nonatomic, retain, readwrite, _setExtensionPrincipalObjects:) NSMutableDictionary* _extensionPrincipalObjects;
 + (id) _sharedExtensionContextVendor;
 + (id) _extensionDictionary;
 + (id) _extensionMainStoryboard;
 + (Class) _extensionPrincipalClass;
 + (Class) _extensionContextClass;
 + (void) _startListening;
 + (id) _completionConcurrentQueue;
 + (id) _expirationConcurrentQueue;

 - (BOOL) listener:(id)ashouldAcceptNewConnection:(id)b;
 - (void) dealloc;
 - (void) _tearDownContextWithUUID:(id)a;
 - (BOOL) _shouldCreatePrincipalObject;
 - (void) _setPrincipalObject:(id)aforUUID:(id)b;
 - (id) _extensionContextForUUID:(id)a;
 - (void) _beginRequestWithExtensionItems:(id)alistenerEndpoint:(id)bwithContextUUID:(id)ccompletion:(@?)d;
 - (void) _hostDidEnterBackgroundForContextUUID:(id)acompletion:(@?)b;
 - (void) _hostWillEnterForegroundForContextUUID:(id)acompletion:(@?)b;
 - (void) _hostWillResignActiveForContextUUID:(id)acompletion:(@?)b;
 - (void) _hostDidBecomeActiveForContextUUID:(id)acompletion:(@?)b;
 - (id) _extensionServiceConnections;
 - (void) _setExtensionServiceConnections:(id)a;
 - (id) _extensionContexts;
 - (void) _setExtensionContexts:(id)a;
 - (id) _extensionPrincipalObjects;
 - (void) _setExtensionPrincipalObjects:(id)a;


@end
