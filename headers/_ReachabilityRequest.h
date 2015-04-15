
@interface _ReachabilityRequest : NSObject {

    @"NSLock" _lock;
    @"NSString" _hostname;
    ^{__SCNetworkReachability=} _reachability;
    I _flags;
    ^{__CFDictionary=} _observers;
    BOOL _isReachable;
    BOOL _receivedAtLeastOneCallback;
}
@property (nonatomic, assign, readwrite) NSString* hostname;

 - (id) description;
 - (void) dealloc;
 - (void) removeObserver:(id)a;
 - (void) reachabilityChangedWithFlags:(I)a;
 - (id) initWithHostname:(id)a;
 - (void) addObserver:(id)aselector:(SEL)b;
 - (BOOL) hasObservers;
 - (id) hostname;
 - (void) setHostname:(id)a;


@end
