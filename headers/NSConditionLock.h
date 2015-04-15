
@protocol NSLocking;
@interface NSConditionLock : NSObject <NSLocking> {

    ^v _priv;
}
@property (atomic, assign, readonly) NSNumber* condition;
@property (atomic, copy, readwrite) NSString* name;
 + (id) allocWithZone:(^{_NSZone=})a;

 - (BOOL) lockBeforeDate:(id)a;
 - (BOOL) tryLock;
 - (id) initWithCondition:(q)a;
 - (BOOL) lockWhenCondition:(q)abeforeDate:(id)b;
 - (id) description;
 - (void) dealloc;
 - (void) finalize;
 - (void) lock;
 - (void) unlock;
 - (id) name;
 - (void) lockWhenCondition:(q)a;
 - (BOOL) tryLockWhenCondition:(q)a;
 - (id) init;
 - (void) setName:(id)a;
 - (q) condition;
 - (void) unlockWithCondition:(q)a;


@end
