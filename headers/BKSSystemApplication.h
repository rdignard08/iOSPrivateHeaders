
@protocol BKSSystemApplicationClientDelegate;
@interface BKSSystemApplication : NSObject <BKSSystemApplicationClientDelegate> {

    NSObject<OS_dispatch_queue> _queue;
    BKSSystemApplicationClient _client;
    <BKSSystemApplicationDelegate> _delegate;
}
@property (nonatomic, assign, readwrite) NSNumber* delegate;

 - (id) initWithQueue:(id)a;
 - (void) dealloc;
 - (void) setDelegate:(id)a;
 - (id) delegate;
 - (void) start;
 - (void) restart;
 - (void) sendActions:(id)a;
 - (BOOL) clientIsAliveForWatchdog:(id)a;


@end
