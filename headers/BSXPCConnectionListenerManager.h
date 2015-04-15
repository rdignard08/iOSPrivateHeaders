
@interface BSXPCConnectionListenerManager : NSObject {

    NSObject<OS_dispatch_queue> _listeningQueue;
    NSMutableDictionary _services;
    NSLock _servicesLock;
    NSObject<OS_dispatch_queue> _defaultHandlerQueue;
}
 + (id) sharedInstance;
 + (id) defaultHandlerQueue;
 + (void) listenForService:(id)aonQueue:(id)bwithHandler:(id)c;
 + (void) stopListeningForService:(id)a;

 - (id) _init;
 - (void) dealloc;
 - (id) init;
 - (id) _defaultHandlerQueue;
 - (void) _addService:(id)awithHandler:(id)bonQueue:(id)c;
 - (void) _removeService:(id)a;


@end
