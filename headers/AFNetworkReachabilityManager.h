
@interface AFNetworkReachabilityManager : NSObject {

    long long _networkReachabilityStatus;
    ^{__SCNetworkReachability=} _networkReachability;
    @? _networkReachabilityStatusBlock;
}
@property (nonatomic, assign, readwrite) NSNumber* networkReachabilityStatus;
@property (nonatomic, assign, readonly, getter=isReachable) NSNumber* reachable;
@property (nonatomic, assign, readonly, getter=isReachableViaWWAN) NSNumber* reachableViaWWAN;
@property (nonatomic, assign, readonly, getter=isReachableViaWiFi) NSNumber* reachableViaWiFi;
@property (nonatomic, assign, readwrite) NSNumber* networkReachability;
@property (nonatomic, copy, readwrite) NSNumber* networkReachabilityStatusBlock;
 + (id) managerForAddress:(r^v)a;
 + (id) managerForDomain:(id)a;
 + (id) keyPathsForValuesAffectingValueForKey:(id)a;
 + (id) sharedManager;

 - (id) initWithReachability:(^{__SCNetworkReachability=})a ;
 - (void) setNetworkReachability:(^{__SCNetworkReachability=})a ;
 - (void) setNetworkReachabilityStatus:(long long)a ;
 - (void) stopMonitoring;
 - (BOOL) isReachableViaWWAN;
 - (BOOL) isReachableViaWiFi;
 - (long long) networkReachabilityStatus;
 - (^{__SCNetworkReachability=}) networkReachability;
 - (@?) networkReachabilityStatusBlock;
 - (void) setNetworkReachabilityStatusBlock:(@?)a ;
 - (BOOL) isReachable;
 - (id) localizedNetworkReachabilityStatusString;
 - (void) setReachabilityStatusChangeBlock:(@?)a ;
 - (void) .cxx_destruct;
 - (void) dealloc;
 - (void) startMonitoring;


@end
