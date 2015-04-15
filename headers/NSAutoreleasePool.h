
@interface NSAutoreleasePool : NSObject {

    ^v _token;
    ^v _reserved3;
    ^v _reserved2;
    ^v _reserved;
}
 + (void) showPools;
 + (void) releaseAllPools;
 + (unsigned long long) autoreleasedObjectCount;
 + (unsigned long long) topAutoreleasePoolCount;
 + (BOOL) autoreleasePoolExists;
 + (void) enableRelease:(BOOL)a;
 + (void) enableFreedObjectCheck:(BOOL)a;
 + (unsigned long long) poolCountHighWaterMark;
 + (void) setPoolCountHighWaterMark:(unsigned long long)a;
 + (unsigned long long) poolCountHighWaterResolution;
 + (void) setPoolCountHighWaterResolution:(unsigned long long)a;
 + (unsigned long long) totalAutoreleasedObjects;
 + (void) resetTotalAutoreleasedObjects;
 + (id) allocWithZone:(^{_NSZone=})a;
 + (void) addObject:(id)a;

 - (id) retain;
 - (Vv) release;
 - (id) autorelease;
 - (unsigned long long) retainCount;
 - (void) dealloc;
 - (void) addObject:(id)a;
 - (id) initWithCapacity:(unsigned long long)a;
 - (id) init;
 - (void) drain;


@end
