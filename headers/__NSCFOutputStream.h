
@interface __NSCFOutputStream : NSOutputStream {

}
 + (BOOL) automaticallyNotifiesObserversForKey:(id)a;
 + (id) allocWithZone:(^{_NSZone=})a;

 - (id) initToMemory;
 - (id) initToBuffer:(char*)acapacity:(unsigned long long)b;
 - (id) initToFileAtPath:(id)aappend:(BOOL)b;
 - (id) retain;
 - (Vv) release;
 - (unsigned long long) retainCount;
 - (void) finalize;
 - (BOOL) _tryRetain;
 - (BOOL) _isDeallocating;
 - (unsigned long long) hash;
 - (BOOL) isEqual:(id)a;
 - (void) open;
 - (void) close;
 - (void) setDelegate:(id)a;
 - (id) propertyForKey:(id)a;
 - (BOOL) setProperty:(id)aforKey:(id)b;
 - (void) scheduleInRunLoop:(id)aforMode:(id)b;
 - (void) removeFromRunLoop:(id)aforMode:(id)b;
 - (unsigned long long) streamStatus;
 - (id) streamError;
 - (BOOL) _setCFClientFlags:(unsigned long long)acallback:(^?)bcontext:(^{?=q^v^?^?^?})c;
 - (void) _scheduleInCFRunLoop:(^{__CFRunLoop=})aforMode:(^{__CFString=})b;
 - (void) _unscheduleFromCFRunLoop:(^{__CFRunLoop=})aforMode:(^{__CFString=})b;
 - (id) initWithURL:(id)aappend:(BOOL)b;
 - (long long) write:(r*)amaxLength:(unsigned long long)b;
 - (BOOL) hasSpaceAvailable;
 - (id) delegate;


@end
