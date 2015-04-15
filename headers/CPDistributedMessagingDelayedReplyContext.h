
@interface CPDistributedMessagingDelayedReplyContext : NSObject {

    unsigned int _replyPort;
    BOOL _portPassing;
}
@property (nonatomic, assign, readwrite) NSNumber* replyPort;
@property (nonatomic, assign, readwrite) NSNumber* portPassing;

 - (void) dealloc;
 - (id) initWithReplyPort:(unsigned int)aportPassing:(BOOL)b;
 - (unsigned int) replyPort;
 - (void) setReplyPort:(unsigned int)a;
 - (BOOL) portPassing;
 - (void) setPortPassing:(BOOL)a;


@end
