
@interface BSActionListener : BSBaseXPCServer {

    @"NSObject<OS_dispatch_queue>" _queue;
    @"NSMapTable" _queue_portToContextMap;
}

 - (void) dealloc;
 - (id) init;
 - (id) initWithServiceName:(id)aonQueue:(id)b;
 - (void) queue_handleMessage:(id)aclient:(id)b;
 - ({?=I@}) listenForResponseWithHandler:(@?)atimeout:(unsigned long long)b;


@end
