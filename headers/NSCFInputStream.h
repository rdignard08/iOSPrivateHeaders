
@interface NSCFInputStream : NSInputStream {

}
 + (BOOL) automaticallyNotifiesObserversForKey:(id)a;
 + (id) allocWithZone:(^{_NSZone=})a;

 - (id) initWithFileAtPath:(id)a;
 - (id) retain;
 - (Vv) release;
 - (Q) retainCount;
 - (void) finalize;
 - (BOOL) retainWeakReference;
 - (BOOL) allowsWeakReference;
 - (Q) hash;
 - (BOOL) isEqual:(id)a;
 - (id) initWithURL:(id)a;
 - (void) open;
 - (void) close;
 - (void) setDelegate:(id)a;
 - (id) propertyForKey:(id)a;
 - (BOOL) setProperty:(id)aforKey:(id)b;
 - (void) scheduleInRunLoop:(id)aforMode:(id)b;
 - (void) removeFromRunLoop:(id)aforMode:(id)b;
 - (Q) streamStatus;
 - (id) streamError;
 - (q) read:(*)amaxLength:(Q)b;
 - (BOOL) getBuffer:(^*)alength:(^Q)b;
 - (BOOL) hasBytesAvailable;
 - (BOOL) _setCFClientFlags:(Q)acallback:(^?)bcontext:(^{?=q^v^?^?^?})c;
 - (void) _scheduleInCFRunLoop:(^{__CFRunLoop=})aforMode:(^{__CFString=})b;
 - (void) _unscheduleFromCFRunLoop:(^{__CFRunLoop=})aforMode:(^{__CFString=})b;
 - (id) delegate;
 - (id) initWithData:(id)a;


@end
