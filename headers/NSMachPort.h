
@interface NSMachPort : NSPort {

    id _delegate;
    Q _flags;
    I _machPort;
    Q _reserved;
}
 + (id) portWithMachPort:(I)a;
 + (BOOL) sendBeforeTime:(d)astreamData:(id)bcomponents:(id)cto:(id)dfrom:(id)emsgid:(I)freserved:(Q)g;
 + (void) parseMachMessage:(^v)alocalPort:(^@)bremotePort:(^@)cmsgid:(^I)dcomponents:(^@)e;
 + (void) resetAllPorts;
 + (id) portWithMachPort:(I)aoptions:(Q)b;
 + (void) _fixNSMachPortLeak;
 + (id) port;

 - (id) initWithMachPort:(I)a;
 - (BOOL) sendBeforeDate:(id)acomponents:(id)bfrom:(id)creserved:(Q)d;
 - (BOOL) sendBeforeDate:(id)amsgid:(Q)bcomponents:(id)cfrom:(id)dreserved:(Q)e;
 - (void) addConnection:(id)atoRunLoop:(id)bforMode:(id)c;
 - (id) initWithMachPort:(I)aoptions:(Q)b;
 - (void) handlePortMessage:(id)a;
 - (BOOL) sendBeforeTime:(d)astreamData:(^v)bcomponents:(id)cfrom:(id)dmsgid:(I)e;
 - (id) retain;
 - (Vv) release;
 - (Q) retainCount;
 - (void) dealloc;
 - (void) finalize;
 - (BOOL) _tryRetain;
 - (BOOL) _isDeallocating;
 - (BOOL) isKindOfClass:(Class)a;
 - (void) invalidate;
 - (I) machPort;
 - (BOOL) isValid;
 - (Q) hash;
 - (BOOL) isEqual:(id)a;
 - (Q) _cfTypeID;
 - (void) setDelegate:(id)a;
 - (void) scheduleInRunLoop:(id)aforMode:(id)b;
 - (void) removeFromRunLoop:(id)aforMode:(id)b;
 - (id) init;
 - (BOOL) isMemberOfClass:(Class)a;
 - (id) delegate;


@end
