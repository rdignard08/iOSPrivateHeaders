
@interface NSRunLoop : NSObject {

    id _rl;
    id _dperf;
    id _perft;
    id _info;
    id _ports;
    [6^v] _reserved;
}
 + (id) mainRunLoop;
 + (id) _new:(id)a;
 + (id) currentRunLoop;

 - (void) performSelector:(SEL)atarget:(id)bargument:(id)corder:(Q)dmodes:(id)e;
 - (void) cancelPerformSelector:(SEL)atarget:(id)bargument:(id)c;
 - (void) cancelPerformSelectorsWithTarget:(id)a;
 - (void) addPort:(id)aforMode:(id)b;
 - (void) removePort:(id)aforMode:(id)b;
 - (void) _enumerateInfoPairsWithBlock:(@?)a;
 - (void) _portInvalidated:(id)a;
 - (BOOL) _containsPort:(id)aforMode:(id)b;
 - (void) _addPort:(id)aforMode:(id)b;
 - (void) _removePort:(id)aforMode:(id)b;
 - (BOOL) runMode:(id)abeforeDate:(id)b;
 - (BOOL) containsPort:(id)aforMode:(id)b;
 - (id) portsForMode:(id)a;
 - (void) removeTimer:(id)aforMode:(id)b;
 - (id) timersForMode:(id)a;
 - (BOOL) containsTimer:(id)aforMode:(id)b;
 - (id) allModes;
 - (void) _invalidateTimers;
 - (id) limitDateForMode:(id)a;
 - (void) _wakeup;
 - (void) acceptInputForMode:(id)abeforeDate:(id)b;
 - (BOOL) runMode:(id)auntilDate:(id)b;
 - (void) runUntilDate:(id)a;
 - (BOOL) runBeforeDate:(id)a;
 - (id) copyWithZone:(^{_NSZone=})a;
 - (id) description;
 - (void) dealloc;
 - (^{__CFRunLoop=}) getCFRunLoop;
 - (id) currentMode;
 - (id) init;
 - (void) run;
 - (void) addTimer:(id)aforMode:(id)b;


@end
