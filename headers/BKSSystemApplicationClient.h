
@interface BKSSystemApplicationClient : BSBaseXPCClient {

    @"NSObject<OS_dispatch_queue>" _callOutQueue;
    BOOL _pendingCheckIn;
    BOOL _sentConnect;
    @"NSObject<OS_dispatch_semaphore>" _checkinSemaphore;
    @"<BKSSystemApplicationClientDelegate>" _delegate;
}

 - (void) dealloc;
 - (void) setDelegate:(id)a;
 - (id) delegate;
 - (void) queue_handleMessage:(id)a;
 - (void) queue_connectionWasResumed;
 - (void) queue_connectionWasInterrupted;
 - (void) queue_connectionWasInvalidated;
 - (id) initWithCalloutQueue:(id)a;
 - (void) connect;
 - (void) checkIn;
 - (void) restart;
 - (void) sendActions:(id)a;
 - (void) _connect;
 - (void) _sendMessageOfType:(q)apacker:(@?)breplyHandler:(@?)cwaitForReply:(BOOL)dwaitDuration:(Q)e;
 - (void) _sendMessageOfType:(q)apacker:(@?)b;
 - (void) _queue_handleWatchdogPing:(id)a;
 - (void) _sendMessageOfType:(q)apacker:(@?)breplyHandler:(@?)c;


@end
