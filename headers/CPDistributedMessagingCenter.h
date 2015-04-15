
@interface CPDistributedMessagingCenter : NSObject {

    NSString* _centerName;
    NSLock* _lock;
    unsigned int _sendPort;
    NSOperationQueue* _asyncQueue;
    ^{__CFRunLoopSource=} _serverSource;
    NSString* _requiredEntitlement;
    NSMutableDictionary* _callouts;
    unsigned int _parkedServerPort;
    CPDistributedMessagingCallout* _currentCallout;
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
 - (id) _initWithServerName:(id)a ;
 - (void) runServerOnCurrentThread;
 - (id) _initWithServerName:(id)a requireLookupByPID:(BOOL)b ;
 - (void) _setSendPort:(unsigned int)a ;
 - (void) _setupInvalidationSource;
 - (BOOL) _sendMessage:(id)a userInfo:(id)b receiveReply:(^@)c error:(^@)d toTarget:(id)e selector:(SEL)f context:(^v)g ;
 - (BOOL) _sendMessage:(id)a userInfo:(id)b receiveReply:(^@)c error:(^@)d toTarget:(id)e selector:(SEL)f context:(^v)g nonBlocking:(BOOL)h ;
 - (BOOL) _sendMessage:(id)a userInfoData:(id)b oolKey:(id)c oolData:(id)d makeServer:(BOOL)e receiveReply:(^@)f nonBlocking:(BOOL)g error:(^@)h ;
 - (unsigned int) _sendPort;
 - (id) _initAnonymousServer;
 - (unsigned int) _serverPort;
 - (void) runServerOnCurrentThreadProtectedByEntitlement:(id)a ;
 - (void) _sendReplyMessage:(id)a portPassing:(BOOL)b onMachPort:(unsigned int)c ;
 - (id) _initClientWithPort:(unsigned int)a ;
 - (BOOL) sendMessageName:(id)a userInfo:(id)b ;
 - (BOOL) sendNonBlockingMessageName:(id)a userInfo:(id)b ;
 - (id) sendMessageAndReceiveReplyName:(id)a userInfo:(id)b ;
 - (id) sendMessageAndReceiveReplyName:(id)a userInfo:(id)b error:(^@)c ;
 - (void) sendMessageAndReceiveReplyName:(id)a userInfo:(id)b toTarget:(id)c selector:(SEL)d context:(^v)e ;
 - (void) stopServer;
 - (void) registerForMessageName:(id)a target:(id)b selector:(SEL)c ;
 - (id) delayReply;
 - (void) sendDelayedReply:(id)a dictionary:(id)b ;
 - (void) unregisterForMessageName:(id)a ;
 - (BOOL) doesServerExist;
 - (void) _dispatchMessageNamed:(id)a userInfo:(id)b reply:(^@)c auditToken:(^{?=[8I]})d ;
 - (BOOL) _isTaskEntitled:(^{?=[8I]})a ;
 - (id) _requiredEntitlement;
 - (void) setTargetPID:(int)a ;


@end
