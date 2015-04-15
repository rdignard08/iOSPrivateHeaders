
@interface NSCFData : NSMutableData {

    [4C] _cfinfo;
    I _rc;
    q _length;
    q _capacity;
    ^{__CFAllocator=} _bytesDeallocator;
    * _bytes;
}
 + (BOOL) automaticallyNotifiesObserversForKey:(id)a;

 - (BOOL) _compact;
 - (id) copyWithZone:(^{_NSZone=})a;
 - (id) retain;
 - (Vv) release;
 - (Q) retainCount;
 - (void) finalize;
 - (BOOL) retainWeakReference;
 - (BOOL) allowsWeakReference;
 - (r^v) bytes;
 - (^v) mutableBytes;
 - (void) setLength:(Q)a;
 - (Q) hash;
 - (BOOL) isEqual:(id)a;
 - (Q) length;


@end
