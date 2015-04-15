
@interface CPDistributedMessagingAsyncOperation : NSOperation {

    @"CPDistributedMessagingCenter" _center;
    @"NSString" _name;
    @"NSData" _userInfoData;
    @"NSString" _oolKey;
    @"NSData" _oolData;
    id _target;
    SEL _selector;
    ^v _context;
    BOOL _makeServer;
    @"NSThread" _calloutThread;
    @"NSDictionary" _reply;
    @"NSError" _error;
}

 - (void) main;
 - (void) dealloc;
 - (id) initWithCenter:(id)amessageName:(id)buserInfoData:(id)coolKey:(id)doolData:(id)etarget:(id)fselector:(SEL)gcontext:(^v)hmakeServer:(BOOL)i;
 - (void) _releaseSendingData;
 - (void) _performCallout;


@end
