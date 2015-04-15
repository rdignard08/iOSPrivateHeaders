
@interface CFPrefsSource : NSObject {

    ^{__CFDictionary=} _dict;
    b63 _generationCount;
    b1 _isSearchList;
    ^(?={_CFPrefsShmemEntry=b31b1}i) shmemEntry;
    ^{_opaque_pthread_mutex_t=q[56c]} _lock;
    (?="entry"{_CFPrefsShmemEntry="generation"b31"multiprocess"b1}"value"i) lastKnownShmemState;
}
 + (void) withSourceForIdentifier:(^{__CFString=})auser:(^{__CFString=})bbyHost:(BOOL)ccontainer:(^{__CFString=})dperform:(@?)e;
 + (void) withNamedVolatileSourceForIdentifier:(^{__CFString=})aperform:(@?)b;

 - (void) dealloc;
 - (void) finalize;
 - (void) alreadylocked_setValue:(^v)a forKey:(^{__CFString=})b ;
 - (void) alreadylocked_setValues:(r^^v)a forKeys:(r^^v)b count:(long long)c ;
 - (^{__CFArray=}) alreadylocked_copyKeyList;
 - (void) lock;
 - (void) alreadylocked_removeAllValues;
 - (void) unlock;
 - (^v) alreadylocked_copyValueForKey:(^{__CFString=})a ;
 - (^{__CFDictionary=}) alreadylocked_copyDictionary;
 - (void) setValue:(^v)a forKey:(^{__CFString=})b ;
 - (void) setValues:(r^^v)a forKeys:(r^^v)b count:(long long)c ;
 - (void) removeAllValues;
 - (^v) copyValueForKey:(^{__CFString=})a ;
 - (BOOL) alreadylocked_requestNewData;
 - (BOOL) synchronize;
 - (^{__CFArray=}) copyKeyList;
 - (^{__CFDictionary=}) copyDictionary;
 - (void) mergeIntoDictionary:(^{__CFDictionary=})a ;
 - (id) createRequestNewContentMessageForDaemon:(BOOL)a ;
 - (void) handleReply:(id)a toRequestNewDataMessage:(id)b onConnection:(id)c retryCount:(int)d error:(^B)e ;
 - (long long) alreadylocked_generationCount;
 - (long long) generationCount;
 - (BOOL) managed;
 - (void) clearCache;
 - (void) setDaemonCacheEnabled:(BOOL)a ;
 - (void) setAccessRestricted:(BOOL)a ;
 - (^{__CFString=}) userIdentifier;
 - (^{__CFString=}) domainIdentifier;
 - (BOOL) isByHost;
 - (^{__CFString=}) container;
 - (id) init;


@end
