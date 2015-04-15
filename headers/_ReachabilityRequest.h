
@interface _ReachabilityRequest : NSObject {

    NSLock* _lock;
    NSString* _hostname;
    ^{__SCNetworkReachability=} _reachability;
    unsigned int _flags;
    ^{__CFDictionary=} _observers;
    BOOL _isReachable;
    BOOL _receivedAtLeastOneCallback;
}
@property (nonatomic, assign, readwrite) NSString* hostname;

 - (id) description;
 - (void) dealloc;
 - (void) removeObserver:(id)a ;
 - (void) reachabilityChangedWithFlags:(unsigned int)a ;
 - (id) initWithHostname:(id)a ;
 - (void) addObserver:(id)a selector:(SEL)b ;
 - (BOOL) hasObservers;
 - (id) hostname;
 - (void) setHostname:(id)a ;


@end
