
@interface BKSApplicationStateMonitor : NSObject {

    @"NSObject<OS_xpc_object>" _connection;
    @"BSSignal" _invalidationSignal;
    @? _handler;
    I _interestedStates;
    @"NSArray" _interestedBundleIDs;
    @"NSObject<OS_dispatch_queue>" _queue;
    @"NSObject<OS_dispatch_queue>" _messageHandlingQueue;
    @"NSObject<OS_xpc_object>" _serverEndpoint;
    BOOL _denied;
}
@property (nonatomic, copy, readwrite) NSNumber* handler;
@property (nonatomic, assign, readwrite) NSNumber* interestedStates;
@property (nonatomic, copy, readwrite) NSArray* interestedBundleIDs;

 - (id) _connection;
 - (void) dealloc;
 - (void) invalidate;
 - (id) init;
 - (void) queue_handleMessage:(id)a;
 - (@?) handler;
 - (void) queue_invalidate;
 - (void) queue_reregister;
 - (void) queue_connectionWasInvalidated;
 - (void) _setEndpoint:(id)a;
 - (void) setHandler:(@?)a;
 - (id) bundleInfoValueForKey:(id)aPID:(i)b;
 - (I) applicationStateForApplication:(id)a;
 - (I) mostElevatedApplicationStateForPID:(i)a;
 - (void) applicationInfoForPID:(i)acompletion:(@?)b;
 - (void) applicationInfoForApplication:(id)acompletion:(@?)b;
 - (id) initWithBundleIDs:(id)astates:(I)b;
 - (id) initWithEndpoint:(id)abundleIDs:(id)bstates:(I)c;
 - (void) setInterestedBundleIDs:(id)a;
 - (void) setInterestedStates:(I)a;
 - (void) queue_registerWithServer;
 - (void) queue_setHandler:(@?)a;
 - (void) queue_setInterestedBundleIDs:(id)a;
 - (void) queue_setInterestedStates:(I)a;
 - (I) interestedStates;
 - (void) updateInterestedBundleIDs:(id)astates:(I)b;
 - (id) interestedBundleIDs;
 - (void) queue_updateInterestedStates;
 - (void) queue_updateInterestedStates:(BOOL)a;
 - (void) updateInterestedBundleIDs:(id)a;
 - (void) updateInterestedStates:(I)a;
 - (BOOL) isApplicationBeingDebugged:(id)a;


@end
