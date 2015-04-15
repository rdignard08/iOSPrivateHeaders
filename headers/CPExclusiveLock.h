
@protocol NSLocking;
@interface CPExclusiveLock : NSObject <NSLocking> {

    int _fd;
    NSString* _name;
}

 - (BOOL) tryLock;
 - (void) dealloc;
 - (void) lock;
 - (void) unlock;
 - (id) name;
 - (id) initWithName:(id)a ;
 - (id) init;
 - (void) setName:(id)a ;


@end
