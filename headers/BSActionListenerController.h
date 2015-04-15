
@interface BSActionListenerController : NSObject {

    @"NSObject<OS_dispatch_queue>" _queue;
    Q _transactionCount;
    @"BSActionListener" _listener;
    I _listenerCount;
    I _listenerTearDownToken;
}
 + (id) sharedInstance;

 - (void) dealloc;
 - (id) init;
 - (id) listener;
 - (void) beginTransactionForListener:(id)a;
 - (void) endTransactionForListener:(id)a;
 - (void) beginTransaction;
 - (void) endTransaction;


@end
