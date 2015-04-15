
@protocol NSXPCProxyCreating;
@interface NSXPCConnection : NSObject <NSXPCProxyCreating> {

    ^v _xconnection;
    id _repliesExpected;
    NSObject<OS_dispatch_queue>* _userQueue;
    unsigned int _state;
    unsigned int _state2;
    @? _interruptionHandler;
    @? _invalidationHandler;
    id _exportInfo;
    id _repliesRequested;
    id _importInfo;
    <NSObject>* _otherInfo;
    id _reserved1;
    id _lock;
    NSXPCInterface* _remoteObjectInterface;
    NSString* _serviceName;
    NSXPCListenerEndpoint* _endpoint;
    id _eCache;
    id _dCache;
}
@property (atomic, copy, readonly) NSString* serviceName;
@property (atomic, retain, readonly) NSXPCListenerEndpoint* endpoint;
@property (atomic, retain, readwrite) NSXPCInterface* exportedInterface;
@property (atomic, retain, readwrite) NSNumber* exportedObject;
@property (atomic, retain, readwrite) NSXPCInterface* remoteObjectInterface;
@property (atomic, retain, readonly) NSNumber* remoteObjectProxy;
@property (atomic, copy, readwrite) NSNumber* interruptionHandler;
@property (atomic, copy, readwrite) NSNumber* invalidationHandler;
@property (atomic, assign, readonly) NSNumber* auditSessionIdentifier;
@property (atomic, assign, readonly) NSNumber* processIdentifier;
@property (atomic, assign, readonly) NSNumber* effectiveUserIdentifier;
@property (atomic, assign, readonly) NSNumber* effectiveGroupIdentifier;
 + (id) _currentBoost;
 + (id) currentConnection;
 + (void) beginTransaction;
 + (void) endTransaction;

 - (void) stop;
 - (id) _errorDescription;
 - (id) initWithServiceName:(id)a options:(unsigned long long)b ;
 - (unsigned long long) _generationCount;
 - (void) _sendInvocation:(id)a withProxy:(id)b remoteInterface:(id)c withErrorHandler:(@?)d timeout:(double)e userInfo:(id)f ;
 - (void) _cancelProgress:(unsigned long long)a ;
 - (void) _pauseProgress:(unsigned long long)a ;
 - (void) _decodeAndInvokeReplyBlockWithData:(id)a sequence:(unsigned long long)b replyInfo:(id)c ;
 - ({?=[8I]}) auditToken;
 - (void) _sendDesistForProxy:(id)a ;
 - (void) _decodeAndInvokeMessageWithData:(id)a ;
 - (id) _initWithPeerConnection:(id)a name:(id)b options:(unsigned long long)c ;
 - (void) addBarrierBlock:(@?)a ;
 - (void) _sendInvocation:(id)a withProxy:(id)b remoteInterface:(id)c ;
 - (void) _sendInvocation:(id)a withProxy:(id)b remoteInterface:(id)c withErrorHandler:(@?)d ;
 - (void) _sendInvocation:(id)a withProxy:(id)b remoteInterface:(id)c withErrorHandler:(@?)d timeout:(double)e ;
 - (@?) interruptionHandler;
 - (@?) invalidationHandler;
 - (id) serviceName;
 - (id) _exportTable;
 - (id) valueForEntitlement:(id)a ;
 - (id) replacementObjectForEncoder:(id)a object:(id)b ;
 - (void) _setQueue:(id)a ;
 - (BOOL) _encodeCacheContainsClass:(Class)a ;
 - (void) _addClassToEncodeCache:(Class)a ;
 - (BOOL) _decodeCacheContainsClass:(Class)a ;
 - (void) _addClassToDecodeCache:(Class)a ;
 - (id) exportedObject;
 - (id) exportedInterface;
 - (id) remoteObjectProxyWithUserInfo:(id)a errorHandler:(@?)b ;
 - (id) remoteObjectProxyWithTimeout:(double)a errorHandler:(@?)b ;
 - (void) _addImportedProxy:(id)a ;
 - (void) _removeImportedProxy:(id)a ;
 - (int) auditSessionIdentifier;
 - (unsigned int) effectiveUserIdentifier;
 - (unsigned int) effectiveGroupIdentifier;
 - (void) _setUUID:(id)a ;
 - (void) _setTargetUserIdentifier:(unsigned int)a ;
 - (void) _updateProgress:(unsigned long long)a completed:(long long)b total:(long long)c ;
 - (void) _decodeProgressMessageWithData:(id)a ;
 - (id) remoteObjectInterface;
 - (id) description;
 - (void) dealloc;
 - (void) finalize;
 - (id) userInfo;
 - (void) invalidate;
 - (void) setDelegate:(id)a ;
 - (id) _queue;
 - (id) _xpcConnection;
 - (id) init;
 - (void) suspend;
 - (id) delegate;
 - (void) start;
 - (id) initWithMachServiceName:(id)a options:(unsigned long long)b ;
 - (id) remoteObjectProxy;
 - (void) setOptions:(unsigned long long)a ;
 - (void) setUserInfo:(id)a ;
 - (id) initWithMachServiceName:(id)a ;
 - (void) resume;
 - (void) setRemoteObjectInterface:(id)a ;
 - (void) setExportedInterface:(id)a ;
 - (void) setExportedObject:(id)a ;
 - (void) setInterruptionHandler:(@?)a ;
 - (void) setInvalidationHandler:(@?)a ;
 - (id) remoteObjectProxyWithErrorHandler:(@?)a ;
 - (id) initWithListenerEndpoint:(id)a ;
 - (id) initWithServiceName:(id)a ;
 - (id) endpoint;
 - (int) processIdentifier;
 - (void) _killConnection:(int)a ;
 - (id) initWithEndpoint:(id)a ;


@end
