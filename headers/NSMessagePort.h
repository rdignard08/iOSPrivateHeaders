
@interface NSMessagePort : NSPort {

    ^v _port;
    id _delegate;
}
 + (BOOL) sendBeforeTime:(double)astreamData:(id)bcomponents:(id)cto:(id)dfrom:(id)emsgid:(unsigned int)freserved:(unsigned long long)g;
 + (void) _fixNSMessagePortLeak;

 - (BOOL) sendBeforeDate:(id)a components:(id)b from:(id)c reserved:(unsigned long long)d ;
 - (BOOL) sendBeforeDate:(id)a msgid:(unsigned long long)b components:(id)c from:(id)d reserved:(unsigned long long)e ;
 - (BOOL) sendBeforeTime:(double)a streamData:(^v)b components:(id)c from:(id)d msgid:(unsigned int)e ;
 - (id) initWithRemoteName:(id)a ;
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
 - (void) setDelegate:(id)a ;
 - (void) scheduleInRunLoop:(id)a forMode:(id)b ;
 - (void) removeFromRunLoop:(id)a forMode:(id)b ;
 - (id) initWithName:(id)a ;
 - (id) init;
 - (id) delegate;
 - (BOOL) setName:(id)a ;


@end
