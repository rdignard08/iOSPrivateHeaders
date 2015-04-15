
@interface CPDistributedMessagingCenter : NSObject {

    @"NSString" _centerName;
    @"NSLock" _lock;
    I _sendPort;
    @"NSOperationQueue" _asyncQueue;
    ^{__CFRunLoopSource=} _serverSource;
    @"NSString" _requiredEntitlement;
    @"NSMutableDictionary" _callouts;
    I _parkedServerPort;
    @"CPDistributedMessagingCallout" _currentCallout;
    I _replyPort;
    BOOL _portPassing;
    BOOL _delayedReply;
    BOOL _requireLookupByPID;
    i _targetPID;
}
 + (id) centerNamed:(id)a;
 + (id) _centerNamed:(id)arequireLookupByPID:(BOOL)b;
 + (id) pidRestrictedCenterNamed:(id)a;

 - (void) dealloc;
 - (id) name;
 - (id) _initWithServerName:(id)a;
 - (void) runServerOnCurrentThread;
 - (id) _initWithServerName:(id)arequireLookupByPID:(BOOL)b;
 - (void) _setSendPort:(I)a;
 - (void) _setupInvalidationSource;
 - (BOOL) _sendMessage:(id)auserInfo:(id)breceiveReply:(^@)cerror:(^@)dtoTarget:(id)eselector:(SEL)fcontext:(^v)g;
 - (BOOL) _sendMessage:(id)auserInfo:(id)breceiveReply:(^@)cerror:(^@)dtoTarget:(id)eselector:(SEL)fcontext:(^v)gnonBlocking:(BOOL)h;
 - (BOOL) _sendMessage:(id)auserInfoData:(id)boolKey:(id)coolData:(id)dmakeServer:(BOOL)ereceiveReply:(^@)fnonBlocking:(BOOL)gerror:(^@)h;
 - (I) _sendPort;
 - (id) _initAnonymousServer;
 - (I) _serverPort;
 - (void) runServerOnCurrentThreadProtectedByEntitlement:(id)a;
 - (void) _sendReplyMessage:(id)aportPassing:(BOOL)bonMachPort:(I)c;
 - (id) _initClientWithPort:(I)a;
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
 - (void) setTargetPID:(i)a;


@end
