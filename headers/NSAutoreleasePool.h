
@interface NSAutoreleasePool : NSObject {

    ^v _token;
    ^v _reserved3;
    ^v _reserved2;
    ^v _reserved;
}
 + (void) showPools;
 + (void) releaseAllPools;
 + (Q) autoreleasedObjectCount;
 + (Q) topAutoreleasePoolCount;
 + (BOOL) autoreleasePoolExists;
 + (void) enableRelease:(BOOL)a;
 + (void) enableFreedObjectCheck:(BOOL)a;
 + (Q) poolCountHighWaterMark;
 + (void) setPoolCountHighWaterMark:(Q)a;
 + (Q) poolCountHighWaterResolution;
 + (void) setPoolCountHighWaterResolution:(Q)a;
 + (Q) totalAutoreleasedObjects;
 + (void) resetTotalAutoreleasedObjects;
 + (id) allocWithZone:(^{_NSZone=})a;
 + (void) addObject:(id)a;

 - (id) retain;
 - (Vv) release;
 - (id) autorelease;
 - (Q) retainCount;
 - (void) dealloc;
 - (void) addObject:(id)a;
 - (id) initWithCapacity:(Q)a;
 - (id) init;
 - (void) drain;


@end
