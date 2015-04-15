
@protocol NSLocking;
@interface NSMultiReadUniWriteLock : NSObject <NSLocking> {

    ^v _priv;
}
 + (id) allocWithZone:(^{_NSZone=})a;

 - (void) lockForReading;
 - (BOOL) tryLockForReading;
 - (BOOL) lockForReadingBeforeDate:(id)a ;
 - (void) lockForWriting;
 - (BOOL) tryLockForWriting;
 - (BOOL) lockForWritingBeforeDate:(id)a ;
 - (id) description;
 - (void) dealloc;
 - (void) finalize;
 - (void) lock;
 - (void) unlock;
 - (id) name;
 - (id) init;
 - (void) setName:(id)a ;


@end
