
@interface NSMessagePort : NSPort {

    ^v _port;
    id _delegate;
}
 + (BOOL) sendBeforeTime:(d)astreamData:(id)bcomponents:(id)cto:(id)dfrom:(id)emsgid:(I)freserved:(Q)g;
 + (void) _fixNSMessagePortLeak;

 - (BOOL) sendBeforeDate:(id)acomponents:(id)bfrom:(id)creserved:(Q)d;
 - (BOOL) sendBeforeDate:(id)amsgid:(Q)bcomponents:(id)cfrom:(id)dreserved:(Q)e;
 - (BOOL) sendBeforeTime:(d)astreamData:(^v)bcomponents:(id)cfrom:(id)dmsgid:(I)e;
 - (id) initWithRemoteName:(id)a;
 - (id) retain;
 - (Vv) release;
 - (Q) retainCount;
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
