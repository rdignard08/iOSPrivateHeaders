
@interface CPDistributedMessagingAsyncOperation : NSOperation {

    CPDistributedMessagingCenter* _center;
    NSString* _name;
    NSData* _userInfoData;
    NSString* _oolKey;
    NSData* _oolData;
    id _target;
    SEL _selector;
    ^v _context;
    BOOL _makeServer;
    NSThread* _calloutThread;
    NSDictionary* _reply;
    NSError* _error;
}

 - (void) main;
 - (void) dealloc;
 - (id) initWithCenter:(id)a messageName:(id)b userInfoData:(id)c oolKey:(id)d oolData:(id)e target:(id)f selector:(SEL)g context:(^v)h makeServer:(BOOL)i ;
 - (void) _releaseSendingData;
 - (void) _performCallout;


@end
