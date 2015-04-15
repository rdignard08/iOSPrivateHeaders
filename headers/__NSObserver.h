
@interface __NSObserver : NSObject {

    NSNotificationCenter* nc;
    NSOperationQueue* queue;
    NSString* name;
    id object;
    @? block;
}
 + (id) observerWithCenter:(id)aqueue:(id)bname:(id)cobject:(id)dblock:(@?)e;
 + (BOOL) isAnObserver:(id)a;
 + (void) forgetObserver:(id)a;

 - (void) _doit:(id)a ;
 - (void) dealloc;
 - (id) name;
 - (id) object;


@end
