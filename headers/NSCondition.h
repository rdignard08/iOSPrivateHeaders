
@protocol NSLocking;
@interface NSCondition : NSObject <NSLocking> {

    ^v _priv;
}
@property (atomic, copy, readwrite) NSString* name;
 + (id) allocWithZone:(^{_NSZone=})a;

 - (BOOL) waitUntilDate:(id)a;
 - (void) signal;
 - (id) description;
 - (void) dealloc;
 - (void) finalize;
 - (void) lock;
 - (void) unlock;
 - (id) name;
 - (id) init;
 - (void) wait;
 - (void) broadcast;
 - (void) setName:(id)a;


@end
