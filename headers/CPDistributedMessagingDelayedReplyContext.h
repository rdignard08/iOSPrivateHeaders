
@interface CPDistributedMessagingDelayedReplyContext : NSObject {

    I _replyPort;
    BOOL _portPassing;
}
@property (nonatomic, assign, readwrite) NSNumber* replyPort;
@property (nonatomic, assign, readwrite) NSNumber* portPassing;

 - (void) dealloc;
 - (id) initWithReplyPort:(I)aportPassing:(BOOL)b;
 - (I) replyPort;
 - (void) setReplyPort:(I)a;
 - (BOOL) portPassing;
 - (void) setPortPassing:(BOOL)a;


@end
