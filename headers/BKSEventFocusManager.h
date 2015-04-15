
@interface BKSEventFocusManager : NSObject {

    BOOL _needsFlush;
    BOOL _systemAppControlsFocusOnMainDisplay;
    NSMutableSet* _currentState;
    NSMutableDictionary* _pendingStatesByPriority;
}
@property (nonatomic, assign, readonly) NSMutableSet* currentState;
@property (nonatomic, assign, readonly) NSMutableDictionary* pendingStatesByPriority;
@property (nonatomic, assign, readwrite) NSNumber* needsFlush;
@property (nonatomic, assign, readwrite) NSNumber* systemAppControlsFocusOnMainDisplay;
 + (id) sharedInstance;

 - (id) description;
 - (void) dealloc;
 - (void) deferEventsForClientWithProperties:(id)a toClientWithProperties:(id)b ;
 - (id) init;
 - (BOOL) needsFlush;
 - (void) setNeedsFlush:(BOOL)a ;
 - (void) deferEventsForClientWithProperties:(id)a toClientWithProperties:(id)b withPriority:(int)c ;
 - (void) _pruneSet:(id)a ofDeferralsPassingTest:(@?)b ;
 - (id) pendingStatesByPriority;
 - (void) reallyFlushWithSet:(id)a ;
 - (void) setSystemAppControlsFocusOnMainDisplay:(BOOL)a ;
 - (void) setForegroundApplicationOnMainDisplay:(id)a pid:(int)b ;
 - (BOOL) systemAppControlsFocusOnMainDisplay;
 - (id) currentState;
 - (void) flush;


@end
