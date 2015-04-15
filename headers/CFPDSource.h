
@interface CFPDSource : NSObject {

    @"NSObject<OS_dispatch_queue>" _queue;
    @"CFPDDataBuffer" _plist;
    ^{__CFArray=} _pendingChangesQueue;
    ^{__CFString=} _userName;
    ^{__CFString=} _domain;
    r* _actualPath;
    r* _pathToTemporaryFileToWriteTo;
    I _lastEuid;
    I _lastEgid;
    i _owner;
    s _generationShmemIndex;
    c _plistAccessingCount;
    b1 _dirty;
    b1 _byHost;
    b1 _managed;
    b1 _neverCache;
    b1 _checkedForNonPrefsPlist;
    b1 _hasDrainedPendingChangesSinceLastReplyToOwner;
    b1 _restrictedReadability;
    b1 _waitingForDeviceUnlock;
}
 + (void) withSourceCache:(@?)a;
 + (void) synchronousWithSourceCache:(@?)a;
 + (void) withSourceForDomain:(^{__CFString=})ainContainer:(^{__CFString=})buser:(^{__CFString=})cbyHost:(BOOL)dmanaged:(BOOL)esynchronously:(BOOL)fperform:(@?)g;

 - (id) description;
 - (void) dealloc;
 - (BOOL) managed;
 - (void) clearCache;
 - (^{__CFString=}) container;
 - (^{__CFString=}) domain;
 - (void) writeToDisk:(BOOL)a;
 - (void) updateShmemEntry;
 - (void) lockedSync:(@?)a;
 - (void) transitionToMultiOwner;
 - (void) addOwner:(id)a;
 - (s) shmemIndex;
 - (id) acceptMessage:(id)a;
 - (^{__CFString=}) debugDump;
 - (void) removeOwner;
 - (^{__CFString=}) user;
 - (void) cacheActualPath;
 - (C) _backingPlistChangedSinceLastSync:(^Q)a;
 - (void) cacheActualAndTemporaryPathsWithEUID:(I)aegid:(I)b;
 - (void) enqueueNewKey:(^{__CFString=})avalue:(^v)b;
 - (id) propertyList;
 - (BOOL) clearCacheIfStale:(^Q)a;
 - (BOOL) acceptLocalMessage:(id)awithReply:(^{__CFDictionary=})binode:(^Q)c;
 - (void) cacheActualPathCreatingIfNecessary:(BOOL)aeuid:(I)begid:(I)c;
 - (BOOL) getUncanonicalizedPath:(*)a;
 - (id) initWithDomain:(^{__CFString=})auserName:(^{__CFString=})bbyHost:(BOOL)cmanaged:(BOOL)dshmemIndex:(s)e;
 - (void) noteAccessed;
 - (void) lockedAsync:(@?)a;
 - (BOOL) hasEverHadMultipleOwners;
 - (void) beginAccessingPlist;
 - (void) endAccessingPlist;
 - (void) drainPendingChanges;
 - (void) setDirty:(BOOL)a;
 - (void) autosync:(BOOL)a;
 - (id) propertyListWithoutDrainingPendingChanges;
 - (void) setPlist:(id)a;
 - (BOOL) validateSandboxForWrite:(id)acontainerPath:(r*)btargetingContainer:(^B)c;
 - (BOOL) validateReadAccessToken:(i)a;
 - (BOOL) validateSandboxForRead:(id)acontainerPath:(r*)b;
 - (i) validateMessage:(id)awithNewKey:(^{__CFString=})bnewValue:(^v)ccurrentPlistData:(id)dcontainerPath:(r*)ediagnosticMessage:(r^*)f;
 - (BOOL) byHost;


@end
