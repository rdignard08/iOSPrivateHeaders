
@interface CFPrefsPlistSource : CFPrefsSource {

    NSObject<OS_dispatch_group>* _synchGroup;
    ^{__CFString=} userIdentifier;
    ^{__CFString=} domainIdentifier;
    ^{__CFString=} container;
    ^{__CFDictionary=} _locallySetDict;
    r* accessPath;
    {?="_isByHost"b1"_volatile"b1"_readonly"b1"_avoidsDaemonCache"b1"_restrictedAccess"b1"_checkedInvalidHome"b1"_lastWriteFailed"b1} _flags;
}

 - (id) description;
 - (void) dealloc;
 - (void) finalize;
 - (id) initWithDomain:(^{__CFString=})a user:(^{__CFString=})b byHost:(BOOL)c containerPath:(^{__CFString=})d ;
 - (void) alreadylocked_setValue:(^v)a forKey:(^{__CFString=})b ;
 - (^{__CFArray=}) alreadylocked_copyKeyList;
 - (^v) alreadylocked_copyValueForKey:(^{__CFString=})a ;
 - (^{__CFDictionary=}) alreadylocked_copyDictionary;
 - (^v) copyValueForKey:(^{__CFString=})a ;
 - (BOOL) alreadylocked_requestNewData;
 - (BOOL) synchronize;
 - (void) mergeIntoDictionary:(^{__CFDictionary=})a ;
 - (id) createRequestNewContentMessageForDaemon:(BOOL)a ;
 - (void) handleReply:(id)a toRequestNewDataMessage:(id)b onConnection:(id)c retryCount:(int)d error:(^B)e ;
 - (long long) alreadylocked_generationCount;
 - (long long) generationCount;
 - (void) clearCache;
 - (void) setDaemonCacheEnabled:(BOOL)a ;
 - (void) setAccessRestricted:(BOOL)a ;
 - (^{__CFString=}) userIdentifier;
 - (^{__CFString=}) domainIdentifier;
 - (BOOL) isByHost;
 - (^{__CFString=}) container;
 - (void) setDomainIdentifier:(^{__CFString=})a ;
 - (void) setUserIdentifier:(^{__CFString=})a ;
 - (void) setContainer:(^{__CFString=})a ;
 - (long long) sendMessageSettingValue:(^v)a forKey:(^{__CFString=})b ;
 - (BOOL) handleErrorReply:(id)a fromMessageSettingKey:(^{__CFString=})b toValue:(^v)c retryCount:(int)d retryContinuation:(@?)e ;
 - (BOOL) attachAccessTokenToMessage:(id)a ;
 - (void) sendFullyPreparedMessage:(id)a settingValue:(^v)b forKey:(^{__CFString=})c retryCount:(int)d ;
 - (id) createSynchronizeMessage;
 - (void) addPIDImpersonationIfNecessary:(id)a ;
 - (void) sendRequestNewDataMessage:(id)a toConnection:(id)b retryCount:(int)c error:(^B)d ;
 - (BOOL) volatilizeIfInvalidHomeDir;
 - (BOOL) handleErrorReply:(id)a retryCount:(int)b retryContinuation:(@?)c ;
 - (void) _sharedCleanup;


@end
