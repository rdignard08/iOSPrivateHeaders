
@interface _NSXPCConnectionExpectedReplyInfo : NSObject {

    NSBlock* _replyBlock;
    @? _errorBlock;
    @? _cleanupBlock;
    SEL _selector;
    NSXPCInterface* _interface;
    NSDictionary* _userInfo;
    unsigned long long _proxyNumber;
}
@property (atomic, assign, readwrite) NSNumber* selector;
@property (atomic, copy, readwrite) NSBlock* replyBlock;
@property (atomic, copy, readwrite) NSNumber* errorBlock;
@property (atomic, copy, readwrite) NSNumber* cleanupBlock;
@property (atomic, retain, readwrite) NSXPCInterface* interface;
@property (atomic, retain, readwrite) NSDictionary* userInfo;
@property (atomic, assign, readwrite) NSNumber* proxyNumber;

 - (id) interface;
 - (void) setInterface:(id)a ;
 - (id) replyBlock;
 - (unsigned long long) proxyNumber;
 - (@?) cleanupBlock;
 - (@?) errorBlock;
 - (void) setProxyNumber:(unsigned long long)a ;
 - (void) setReplyBlock:(id)a ;
 - (void) setErrorBlock:(@?)a ;
 - (void) setCleanupBlock:(@?)a ;
 - (SEL) selector;
 - (void) dealloc;
 - (id) userInfo;
 - (void) setUserInfo:(id)a ;
 - (void) setSelector:(SEL)a ;


@end
