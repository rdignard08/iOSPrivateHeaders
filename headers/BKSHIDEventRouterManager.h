
@interface BKSHIDEventRouterManager : BKSHIDEventRouterManagerBase {

    BOOL _needsFlush;
}
 + (id) sharedInstance;

 - (void) dealloc;
 - (id) init;
 - (void) _routerUpdated:(id)a ;
 - (void) setEventRouters:(id)a ;
 - (void) _flushTrigger;
 - (BOOL) needsFlush;
 - (void) setNeedsFlush:(BOOL)a ;
 - (void) _flush;


@end
