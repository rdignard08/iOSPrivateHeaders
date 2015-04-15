
@interface NSMachPort : NSPort {

    id _delegate;
    unsigned long long _flags;
    unsigned int _machPort;
    unsigned long long _reserved;
}
 + (id) portWithMachPort:(unsigned int)a;
 + (BOOL) sendBeforeTime:(double)astreamData:(id)bcomponents:(id)cto:(id)dfrom:(id)emsgid:(unsigned int)freserved:(unsigned long long)g;
 + (void) parseMachMessage:(^v)alocalPort:(^@)bremotePort:(^@)cmsgid:(^I)dcomponents:(^@)e;
 + (void) resetAllPorts;
 + (id) portWithMachPort:(unsigned int)aoptions:(unsigned long long)b;
 + (void) _fixNSMachPortLeak;
 + (id) port;

 - (id) initWithMachPort:(unsigned int)a;
 - (BOOL) sendBeforeDate:(id)acomponents:(id)bfrom:(id)creserved:(unsigned long long)d;
 - (BOOL) sendBeforeDate:(id)amsgid:(unsigned long long)bcomponents:(id)cfrom:(id)dreserved:(unsigned long long)e;
 - (void) addConnection:(id)atoRunLoop:(id)bforMode:(id)c;
 - (id) initWithMachPort:(unsigned int)aoptions:(unsigned long long)b;
 - (void) handlePortMessage:(id)a;
 - (BOOL) sendBeforeTime:(double)astreamData:(^v)bcomponents:(id)cfrom:(id)dmsgid:(unsigned int)e;
 - (id) retain;
 - (Vv) release;
 - (unsigned long long) retainCount;
 - (void) dealloc;
 - (void) finalize;
 - (BOOL) _tryRetain;
 - (BOOL) _isDeallocating;
 - (BOOL) isKindOfClass:(Class)a;
 - (void) invalidate;
 - (unsigned int) machPort;
 - (BOOL) isValid;
 - (unsigned long long) hash;
 - (BOOL) isEqual:(id)a;
 - (unsigned long long) _cfTypeID;
 - (void) setDelegate:(id)a;
 - (void) scheduleInRunLoop:(id)aforMode:(id)b;
 - (void) removeFromRunLoop:(id)aforMode:(id)b;
 - (id) init;
 - (BOOL) isMemberOfClass:(Class)a;
 - (id) delegate;


@end
