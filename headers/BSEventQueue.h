
@interface BSEventQueue : NSObject {

    @"NSHashTable" _eventQueueLocks;
    @"NSMutableArray" _eventQueue;
    @"NSObject<OS_dispatch_queue>" _queue;
    @"NSString" _name;
    @"BSEventQueueEvent" _executingEvent;
}
@property (nonatomic, retain, readwrite) NSNumber* queue;
@property (nonatomic, copy, readonly) NSArray* pendingEvents;
@property (nonatomic, copy, readwrite) NSString* name;
@property (nonatomic, retain, readwrite) BSEventQueueEvent* executingEvent;

 - (id) description;
 - (void) dealloc;
 - (id) name;
 - (BOOL) isLocked;
 - (id) init;
 - (void) setName:(id)a;
 - (id) queue;
 - (void) _addEventQueueLock:(id)a;
 - (void) _removeEventQueueLock:(id)a;
 - (BOOL) _shouldProcessEvent:(id)aenqueuedDuringExecutionOfEvent:(id)b;
 - (void) _noteWillPendEvents:(id)aatPosition:(i)b;
 - (void) _processNextEvent;
 - (void) executeOrInsertEvents:(id)aatPosition:(i)b;
 - (void) _executeOrPendEvents:(id)aposition:(i)b;
 - (id) acquireLockForReason:(id)a;
 - (void) _noteWillExecuteEvent:(id)a;
 - (void) flushEvents:(id)a;
 - (void) _noteWillCancelEventsWithName:(id)acount:(Q)b;
 - (void) setExecutingEvent:(id)a;
 - (void) relinquishLock:(id)a;
 - (void) _noteQueueDidLock;
 - (void) _noteQueueDidUnlock;
 - (id) initWithName:(id)aonQueue:(id)b;
 - (void) executeOrInsertEvent:(id)aatPosition:(i)b;
 - (id) pendingEvents;
 - (void) flushPendingEvents;
 - (void) flushAllEvents;
 - (void) cancelEventsWithName:(id)a;
 - (BOOL) hasEventWithPrefix:(id)a;
 - (BOOL) hasEventWithName:(id)a;
 - (id) executingEvent;
 - (void) setQueue:(id)a;


@end
