
@interface BSActionListenerController : NSObject {

    NSObject<OS_dispatch_queue>* _queue;
    unsigned long long _transactionCount;
    BSActionListener* _listener;
    unsigned int _listenerCount;
    unsigned int _listenerTearDownToken;
}
 + (id) sharedInstance;

 - (void) dealloc;
 - (id) init;
 - (id) listener;
 - (void) beginTransactionForListener:(id)a ;
 - (void) endTransactionForListener:(id)a ;
 - (void) beginTransaction;
 - (void) endTransaction;


@end
