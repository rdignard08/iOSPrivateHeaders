
@interface CFPrefsSearchListSource : CFPrefsSource {

    ^{__CFString=} _identifier;
    ^{__CFArray=} _sourceList;
    ^{_opaque_pthread_mutex_t=q[56c]} _searchListLock;
    BOOL initialized;
}
 + (void) withSnapshotSearchList:(@?)a;
 + (void) withSearchListForIdentifier:(^{__CFString=})acontainer:(^{__CFString=})bperform:(@?)c;
 + (void) withSuiteSearchListForIdentifier:(^{__CFString=})auser:(^{__CFString=})blocked:(BOOL)cperform:(@?)d;

 - (id) copyWithZone:(^{_NSZone=})a;
 - (void) dealloc;
 - (void) finalize;
 - (void) alreadylocked_setValue:(^v)aforKey:(^{__CFString=})b;
 - (^{__CFArray=}) alreadylocked_copyKeyList;
 - (void) lock;
 - (void) unlock;
 - (^v) alreadylocked_copyValueForKey:(^{__CFString=})a;
 - (^{__CFDictionary=}) alreadylocked_copyDictionary;
 - (BOOL) alreadylocked_requestNewData;
 - (BOOL) synchronize;
 - (id) createRequestNewContentMessageForDaemon:(BOOL)a;
 - (void) handleReply:(id)atoRequestNewDataMessage:(id)bonConnection:(id)cretryCount:(i)derror:(^B)e;
 - (q) generationCount;
 - (^{__CFString=}) domainIdentifier;
 - (void) addSource:(id)a;
 - (void) freeze;
 - (void) removeSource:(id)a;
 - (void) replaceSource:(id)awithSource:(id)b;
 - (id) initWithIdentifier:(^{__CFString=})a;
 - (void) addManagedSourceForIdentifier:(^{__CFString=})auser:(^{__CFString=})b;
 - (void) addNamedVolatileSourceForIdentifier:(^{__CFString=})a;
 - (void) addSourceForIdentifier:(^{__CFString=})auser:(^{__CFString=})bbyHost:(BOOL)ccontainer:(^{__CFString=})d;
 - (void) addSuiteSourceForIdentifier:(^{__CFString=})auser:(^{__CFString=})b;
 - (void) addCompatibilitySource;
 - (q) generationCountFromListOfSources:(^@)acount:(q)b;


@end
