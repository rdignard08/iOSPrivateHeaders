
@interface NSMessagePort : NSPort {

    ^v _port;
    id _delegate;
}
 + (BOOL) sendBeforeTime:(double)astreamData:(id)bcomponents:(id)cto:(id)dfrom:(id)emsgid:(unsigned int)freserved:(unsigned long long)g;
 + (void) _fixNSMessagePortLeak;

 - (BOOL) sendBeforeDate:(id)acomponents:(id)bfrom:(id)creserved:(unsigned long long)d;
 - (BOOL) sendBeforeDate:(id)amsgid:(unsigned long long)bcomponents:(id)cfrom:(id)dreserved:(unsigned long long)e;
 - (BOOL) sendBeforeTime:(double)astreamData:(^v)bcomponents:(id)cfrom:(id)dmsgid:(unsigned int)e;
 - (id) initWithRemoteName:(id)a;
 - (id) retain;
 - (Vv) release;
 - (unsigned long long) retainCount;
 - (void) dealloc;
 - (void) finalize;
 - (BOOL) _tryRetain;
 - (BOOL) _isDeallocating;
 - (void) invalidate;
 - (BOOL) isValid;
 - (id) name;
 - (void) setDelegate:(id)a;
 - (void) scheduleInRunLoop:(id)aforMode:(id)b;
 - (void) removeFromRunLoop:(id)aforMode:(id)b;
 - (id) initWithName:(id)a;
 - (id) init;
 - (id) delegate;
 - (BOOL) setName:(id)a;


@end
