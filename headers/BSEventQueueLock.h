
@interface BSEventQueueLock : NSObject {

    BOOL _relinquished;
    NSString _reason;
    BSEventQueue _eventQueue;
}
@property (nonatomic, copy, readwrite) NSString* reason;
@property (nonatomic, retain, readwrite) BSEventQueue* eventQueue;

 - (id) description;
 - (void) dealloc;
 - (id) reason;
 - (void) relinquish;
 - (id) initWithEventQueue:(id)areason:(id)b;
 - (id) eventQueue;
 - (void) setEventQueue:(id)a;
 - (void) setReason:(id)a;


@end
