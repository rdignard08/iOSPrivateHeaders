
@protocol NSLocking;
@interface NSLock : NSObject <NSLocking> {

    ^v _priv;
}
@property (atomic, copy, readwrite) NSString* name;
 + (id) allocWithZone:(^{_NSZone=})a;

 - (BOOL) lockBeforeDate:(id)a;
 - (BOOL) tryLock;
 - (id) description;
 - (void) dealloc;
 - (void) finalize;
 - (void) lock;
 - (void) unlock;
 - (id) name;
 - (id) init;
 - (void) setName:(id)a;


@end
