
@protocol NSLocking;
@interface NSConditionLock : NSObject <NSLocking> {

    ^v _priv;
}
@property (atomic, assign, readonly) NSNumber* condition;
@property (atomic, copy, readwrite) NSString* name;
 + (id) allocWithZone:(^{_NSZone=})a;

 - (BOOL) lockBeforeDate:(id)a ;
 - (BOOL) tryLock;
 - (id) initWithCondition:(long long)a ;
 - (BOOL) lockWhenCondition:(long long)a beforeDate:(id)b ;
 - (id) description;
 - (void) dealloc;
 - (void) finalize;
 - (void) lock;
 - (void) unlock;
 - (id) name;
 - (void) lockWhenCondition:(long long)a ;
 - (BOOL) tryLockWhenCondition:(long long)a ;
 - (id) init;
 - (void) setName:(id)a ;
 - (long long) condition;
 - (void) unlockWithCondition:(long long)a ;


@end
