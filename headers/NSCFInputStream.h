
@interface NSCFInputStream : NSInputStream {

}
 + (BOOL) automaticallyNotifiesObserversForKey:(id)a;
 + (id) allocWithZone:(^{_NSZone=})a;

 - (id) initWithFileAtPath:(id)a ;
 - (id) retain;
 - (Vv) release;
 - (unsigned long long) retainCount;
 - (void) finalize;
 - (BOOL) retainWeakReference;
 - (BOOL) allowsWeakReference;
 - (unsigned long long) hash;
 - (BOOL) isEqual:(id)a ;
 - (id) initWithURL:(id)a ;
 - (void) open;
 - (void) close;
 - (void) setDelegate:(id)a ;
 - (id) propertyForKey:(id)a ;
 - (BOOL) setProperty:(id)a forKey:(id)b ;
 - (void) scheduleInRunLoop:(id)a forMode:(id)b ;
 - (void) removeFromRunLoop:(id)a forMode:(id)b ;
 - (unsigned long long) streamStatus;
 - (id) streamError;
 - (long long) read:(char*)a maxLength:(unsigned long long)b ;
 - (BOOL) getBuffer:(^*)a length:(^Q)b ;
 - (BOOL) hasBytesAvailable;
 - (BOOL) _setCFClientFlags:(unsigned long long)a callback:(^?)b context:(^{?=q^v^?^?^?})c ;
 - (void) _scheduleInCFRunLoop:(^{__CFRunLoop=})a forMode:(^{__CFString=})b ;
 - (void) _unscheduleFromCFRunLoop:(^{__CFRunLoop=})a forMode:(^{__CFString=})b ;
 - (id) delegate;
 - (id) initWithData:(id)a ;


@end
