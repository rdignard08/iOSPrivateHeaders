
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

 - (id) initWithMachPort:(unsigned int)a ;
 - (BOOL) sendBeforeDate:(id)a components:(id)b from:(id)c reserved:(unsigned long long)d ;
 - (BOOL) sendBeforeDate:(id)a msgid:(unsigned long long)b components:(id)c from:(id)d reserved:(unsigned long long)e ;
 - (void) addConnection:(id)a toRunLoop:(id)b forMode:(id)c ;
 - (id) initWithMachPort:(unsigned int)a options:(unsigned long long)b ;
 - (void) handlePortMessage:(id)a ;
 - (BOOL) sendBeforeTime:(double)a streamData:(^v)b components:(id)c from:(id)d msgid:(unsigned int)e ;
 - (id) retain;
 - (Vv) release;
 - (unsigned long long) retainCount;
 - (void) dealloc;
 - (void) finalize;
 - (BOOL) _tryRetain;
 - (BOOL) _isDeallocating;
 - (BOOL) isKindOfClass:(Class)a ;
 - (void) invalidate;
 - (unsigned int) machPort;
 - (BOOL) isValid;
 - (unsigned long long) hash;
 - (BOOL) isEqual:(id)a ;
 - (unsigned long long) _cfTypeID;
 - (void) setDelegate:(id)a ;
 - (void) scheduleInRunLoop:(id)a forMode:(id)b ;
 - (void) removeFromRunLoop:(id)a forMode:(id)b ;
 - (id) init;
 - (BOOL) isMemberOfClass:(Class)a ;
 - (id) delegate;


@end
