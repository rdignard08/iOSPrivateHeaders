
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

 - (void) performSelector:(SEL)a target:(id)b argument:(id)c order:(unsigned long long)d modes:(id)e ;
 - (void) cancelPerformSelector:(SEL)a target:(id)b argument:(id)c ;
 - (void) cancelPerformSelectorsWithTarget:(id)a ;
 - (void) addPort:(id)a forMode:(id)b ;
 - (void) removePort:(id)a forMode:(id)b ;
 - (void) _enumerateInfoPairsWithBlock:(@?)a ;
 - (void) _portInvalidated:(id)a ;
 - (BOOL) _containsPort:(id)a forMode:(id)b ;
 - (void) _addPort:(id)a forMode:(id)b ;
 - (void) _removePort:(id)a forMode:(id)b ;
 - (BOOL) runMode:(id)a beforeDate:(id)b ;
 - (BOOL) containsPort:(id)a forMode:(id)b ;
 - (id) portsForMode:(id)a ;
 - (void) removeTimer:(id)a forMode:(id)b ;
 - (id) timersForMode:(id)a ;
 - (BOOL) containsTimer:(id)a forMode:(id)b ;
 - (id) allModes;
 - (void) _invalidateTimers;
 - (id) limitDateForMode:(id)a ;
 - (void) _wakeup;
 - (void) acceptInputForMode:(id)a beforeDate:(id)b ;
 - (BOOL) runMode:(id)a untilDate:(id)b ;
 - (void) runUntilDate:(id)a ;
 - (BOOL) runBeforeDate:(id)a ;
 - (id) copyWithZone:(^{_NSZone=})a ;
 - (id) description;
 - (void) dealloc;
 - (^{__CFRunLoop=}) getCFRunLoop;
 - (id) currentMode;
 - (id) init;
 - (void) run;
 - (void) addTimer:(id)a forMode:(id)b ;


@end
