
@interface CPDistributedMessagingCenter : NSObject {

    NSString _centerName;
    NSLock _lock;
    unsigned int _sendPort;
    NSOperationQueue _asyncQueue;
    ^{__CFRunLoopSource=} _serverSource;
    NSString _requiredEntitlement;
    NSMutableDictionary _callouts;
    unsigned int _parkedServerPort;
    CPDistributedMessagingCallout _currentCallout;
    unsigned int _replyPort;
    BOOL _portPassing;
    BOOL _delayedReply;
    BOOL _requireLookupByPID;
    int _targetPID;
}
 + (id) centerNamed:(id)a;
 + (id) _centerNamed:(id)arequireLookupByPID:(BOOL)b;
 + (id) pidRestrictedCenterNamed:(id)a;

 - (void) dealloc;
 - (id) name;
 - (id) _initWithServerName:(id)a;
 - (void) runServerOnCurrentThread;
 - (id) _initWithServerName:(id)arequireLookupByPID:(BOOL)b;
 - (void) _setSendPort:(unsigned int)a;
 - (void) _setupInvalidationSource;
 - (BOOL) _sendMessage:(id)auserInfo:(id)breceiveReply:(^@)cerror:(^@)dtoTarget:(id)eselector:(SEL)fcontext:(^v)g;
 - (BOOL) _sendMessage:(id)auserInfo:(id)breceiveReply:(^@)cerror:(^@)dtoTarget:(id)eselector:(SEL)fcontext:(^v)gnonBlocking:(BOOL)h;
 - (BOOL) _sendMessage:(id)auserInfoData:(id)boolKey:(id)coolData:(id)dmakeServer:(BOOL)ereceiveReply:(^@)fnonBlocking:(BOOL)gerror:(^@)h;
 - (unsigned int) _sendPort;
 - (id) _initAnonymousServer;
 - (unsigned int) _serverPort;
 - (void) runServerOnCurrentThreadProtectedByEntitlement:(id)a;
 - (void) _sendReplyMessage:(id)aportPassing:(BOOL)bonMachPort:(unsigned int)c;
 - (id) _initClientWithPort:(unsigned int)a;
 - (BOOL) sendMessageName:(id)auserInfo:(id)b;
 - (BOOL) sendNonBlockingMessageName:(id)auserInfo:(id)b;
 - (id) sendMessageAndReceiveReplyName:(id)auserInfo:(id)b;
 - (id) sendMessageAndReceiveReplyName:(id)auserInfo:(id)berror:(^@)c;
 - (void) sendMessageAndReceiveReplyName:(id)auserInfo:(id)btoTarget:(id)cselector:(SEL)dcontext:(^v)e;
 - (void) stopServer;
 - (void) registerForMessageName:(id)atarget:(id)bselector:(SEL)c;
 - (id) delayReply;
 - (void) sendDelayedReply:(id)adictionary:(id)b;
 - (void) unregisterForMessageName:(id)a;
 - (BOOL) doesServerExist;
 - (void) _dispatchMessageNamed:(id)auserInfo:(id)breply:(^@)cauditToken:(^{?=[8I]})d;
 - (BOOL) _isTaskEntitled:(^{?=[8I]})a;
 - (id) _requiredEntitlement;
 - (void) setTargetPID:(int)a;


@end
