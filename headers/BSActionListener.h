
@interface BSActionListener : BSBaseXPCServer {

    NSObject<OS_dispatch_queue>* _queue;
    NSMapTable* _queue_portToContextMap;
}

 - (void) dealloc;
 - (id) init;
 - (id) initWithServiceName:(id)a onQueue:(id)b ;
 - (void) queue_handleMessage:(id)a client:(id)b ;
 - ({?=I@}) listenForResponseWithHandler:(@?)a timeout:(unsigned long long)b ;


@end
