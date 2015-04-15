
@interface __NSCFOutputStream : NSOutputStream {

}
 + (BOOL) automaticallyNotifiesObserversForKey:(id)a;
 + (id) allocWithZone:(^{_NSZone=})a;

 - (id) initToMemory;
 - (id) initToBuffer:(*)acapacity:(Q)b;
 - (id) initToFileAtPath:(id)aappend:(BOOL)b;
 - (id) retain;
 - (Vv) release;
 - (Q) retainCount;
 - (void) finalize;
 - (BOOL) _tryRetain;
 - (BOOL) _isDeallocating;
 - (Q) hash;
 - (BOOL) isEqual:(id)a;
 - (void) open;
 - (void) close;
 - (void) setDelegate:(id)a;
 - (id) propertyForKey:(id)a;
 - (BOOL) setProperty:(id)aforKey:(id)b;
 - (void) scheduleInRunLoop:(id)aforMode:(id)b;
 - (void) removeFromRunLoop:(id)aforMode:(id)b;
 - (Q) streamStatus;
 - (id) streamError;
 - (BOOL) _setCFClientFlags:(Q)acallback:(^?)bcontext:(^{?=q^v^?^?^?})c;
 - (void) _scheduleInCFRunLoop:(^{__CFRunLoop=})aforMode:(^{__CFString=})b;
 - (void) _unscheduleFromCFRunLoop:(^{__CFRunLoop=})aforMode:(^{__CFString=})b;
 - (id) initWithURL:(id)aappend:(BOOL)b;
 - (q) write:(r*)amaxLength:(Q)b;
 - (BOOL) hasSpaceAvailable;
 - (id) delegate;


@end
