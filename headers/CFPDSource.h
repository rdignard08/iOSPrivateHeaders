
@interface CFPDSource : NSObject {

    NSObject<OS_dispatch_queue>* _queue;
    CFPDDataBuffer* _plist;
    ^{__CFArray=} _pendingChangesQueue;
    ^{__CFString=} _userName;
    ^{__CFString=} _domain;
    r* _actualPath;
    r* _pathToTemporaryFileToWriteTo;
    unsigned int _lastEuid;
    unsigned int _lastEgid;
    int _owner;
    short _generationShmemIndex;
    char _plistAccessingCount;
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
 - (void) writeToDisk:(BOOL)a ;
 - (void) updateShmemEntry;
 - (void) lockedSync:(@?)a ;
 - (void) transitionToMultiOwner;
 - (void) addOwner:(id)a ;
 - (short) shmemIndex;
 - (id) acceptMessage:(id)a ;
 - (^{__CFString=}) debugDump;
 - (void) removeOwner;
 - (^{__CFString=}) user;
 - (void) cacheActualPath;
 - (unsigned char) _backingPlistChangedSinceLastSync:(^Q)a ;
 - (void) cacheActualAndTemporaryPathsWithEUID:(unsigned int)a egid:(unsigned int)b ;
 - (void) enqueueNewKey:(^{__CFString=})a value:(^v)b ;
 - (id) propertyList;
 - (BOOL) clearCacheIfStale:(^Q)a ;
 - (BOOL) acceptLocalMessage:(id)a withReply:(^{__CFDictionary=})b inode:(^Q)c ;
 - (void) cacheActualPathCreatingIfNecessary:(BOOL)a euid:(unsigned int)b egid:(unsigned int)c ;
 - (BOOL) getUncanonicalizedPath:(char*)a ;
 - (id) initWithDomain:(^{__CFString=})a userName:(^{__CFString=})b byHost:(BOOL)c managed:(BOOL)d shmemIndex:(short)e ;
 - (void) noteAccessed;
 - (void) lockedAsync:(@?)a ;
 - (BOOL) hasEverHadMultipleOwners;
 - (void) beginAccessingPlist;
 - (void) endAccessingPlist;
 - (void) drainPendingChanges;
 - (void) setDirty:(BOOL)a ;
 - (void) autosync:(BOOL)a ;
 - (id) propertyListWithoutDrainingPendingChanges;
 - (void) setPlist:(id)a ;
 - (BOOL) validateSandboxForWrite:(id)a containerPath:(r*)b targetingContainer:(^B)c ;
 - (BOOL) validateReadAccessToken:(int)a ;
 - (BOOL) validateSandboxForRead:(id)a containerPath:(r*)b ;
 - (int) validateMessage:(id)a withNewKey:(^{__CFString=})b newValue:(^v)c currentPlistData:(id)d containerPath:(r*)e diagnosticMessage:(r^*)f ;
 - (BOOL) byHost;


@end
