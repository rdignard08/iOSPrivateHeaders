
@interface CFPrefsPlistSource : CFPrefsSource {

    @"NSObject<OS_dispatch_group>" _synchGroup;
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
 - (id) initWithDomain:(^{__CFString=})auser:(^{__CFString=})bbyHost:(BOOL)ccontainerPath:(^{__CFString=})d;
 - (void) alreadylocked_setValue:(^v)aforKey:(^{__CFString=})b;
 - (^{__CFArray=}) alreadylocked_copyKeyList;
 - (^v) alreadylocked_copyValueForKey:(^{__CFString=})a;
 - (^{__CFDictionary=}) alreadylocked_copyDictionary;
 - (^v) copyValueForKey:(^{__CFString=})a;
 - (BOOL) alreadylocked_requestNewData;
 - (BOOL) synchronize;
 - (void) mergeIntoDictionary:(^{__CFDictionary=})a;
 - (id) createRequestNewContentMessageForDaemon:(BOOL)a;
 - (void) handleReply:(id)atoRequestNewDataMessage:(id)bonConnection:(id)cretryCount:(i)derror:(^B)e;
 - (q) alreadylocked_generationCount;
 - (q) generationCount;
 - (void) clearCache;
 - (void) setDaemonCacheEnabled:(BOOL)a;
 - (void) setAccessRestricted:(BOOL)a;
 - (^{__CFString=}) userIdentifier;
 - (^{__CFString=}) domainIdentifier;
 - (BOOL) isByHost;
 - (^{__CFString=}) container;
 - (void) setDomainIdentifier:(^{__CFString=})a;
 - (void) setUserIdentifier:(^{__CFString=})a;
 - (void) setContainer:(^{__CFString=})a;
 - (q) sendMessageSettingValue:(^v)aforKey:(^{__CFString=})b;
 - (BOOL) handleErrorReply:(id)afromMessageSettingKey:(^{__CFString=})btoValue:(^v)cretryCount:(i)dretryContinuation:(@?)e;
 - (BOOL) attachAccessTokenToMessage:(id)a;
 - (void) sendFullyPreparedMessage:(id)asettingValue:(^v)bforKey:(^{__CFString=})cretryCount:(i)d;
 - (id) createSynchronizeMessage;
 - (void) addPIDImpersonationIfNecessary:(id)a;
 - (void) sendRequestNewDataMessage:(id)atoConnection:(id)bretryCount:(i)cerror:(^B)d;
 - (BOOL) volatilizeIfInvalidHomeDir;
 - (BOOL) handleErrorReply:(id)aretryCount:(i)bretryContinuation:(@?)c;
 - (void) _sharedCleanup;


@end
