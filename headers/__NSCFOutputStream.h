
@interface __NSCFOutputStream : NSOutputStream {

}
 + (BOOL) automaticallyNotifiesObserversForKey:(id)a;
 + (id) allocWithZone:(^{_NSZone=})a;

 - (id) initToMemory;
 - (id) initToBuffer:(char*)a capacity:(unsigned long long)b ;
 - (id) initToFileAtPath:(id)a append:(BOOL)b ;
 - (id) retain;
 - (Vv) release;
 - (unsigned long long) retainCount;
 - (void) finalize;
 - (BOOL) _tryRetain;
 - (BOOL) _isDeallocating;
 - (unsigned long long) hash;
 - (BOOL) isEqual:(id)a ;
 - (void) open;
 - (void) close;
 - (void) setDelegate:(id)a ;
 - (id) propertyForKey:(id)a ;
 - (BOOL) setProperty:(id)a forKey:(id)b ;
 - (void) scheduleInRunLoop:(id)a forMode:(id)b ;
 - (void) removeFromRunLoop:(id)a forMode:(id)b ;
 - (unsigned long long) streamStatus;
 - (id) streamError;
 - (BOOL) _setCFClientFlags:(unsigned long long)a callback:(^?)b context:(^{?=q^v^?^?^?})c ;
 - (void) _scheduleInCFRunLoop:(^{__CFRunLoop=})a forMode:(^{__CFString=})b ;
 - (void) _unscheduleFromCFRunLoop:(^{__CFRunLoop=})a forMode:(^{__CFString=})b ;
 - (id) initWithURL:(id)a append:(BOOL)b ;
 - (long long) write:(r*)a maxLength:(unsigned long long)b ;
 - (BOOL) hasSpaceAvailable;
 - (id) delegate;


@end
