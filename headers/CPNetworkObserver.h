
@interface CPNetworkObserver : NSObject {

    NSLock* _lock;
    NSMutableDictionary* _reachabilityRequests;
    unsigned int _networkReachability;
    ^{__SCNetworkReachability=} _networkReach;
    ^{__CFDictionary=} _networkObservers;
    ^{__SCPreferences=} _wifiPreferences;
    ^{__CFDictionary=} _wifiObservers;
    BOOL _networkNotified;
    BOOL _networkReachable;
    BOOL _wifiNotified;
    BOOL _wifiEnabled;
}
 + (id) sharedNetworkObserver;

 - (void) dealloc;
 - (id) init;
 - (void) removeObserver:(id)a;
 - (void) removeObserver:(id)aforHostname:(id)b;
 - (void) _networkReachableFirstCallBack:(id)a;
 - (void) _networkReachableCallBack:(unsigned int)a;
 - (void) _networkObserversInitialize;
 - (void) _wifiFirstCallBack:(id)a;
 - (void) _wifiCallBack:(unsigned int)a;
 - (void) _wifiObserversInitialize;
 - (void) addObserver:(id)aselector:(SEL)bforHostname:(id)c;
 - (BOOL) isWiFiEnabled;
 - (void) addWiFiObserver:(id)aselector:(SEL)b;
 - (void) removeWiFiObserver:(id)a;
 - (void) addNetworkReachableObserver:(id)aselector:(SEL)b;
 - (void) removeNetworkReachableObserver:(id)a;
 - (BOOL) isNetworkReachable;


@end
