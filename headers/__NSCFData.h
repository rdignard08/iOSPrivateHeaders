
@interface __NSCFData : NSMutableData {

    [4C] _cfinfo;
    unsigned int _rc;
    long long _length;
    long long _capacity;
    ^{__CFAllocator=} _bytesDeallocator;
    char* _bytes;
}
 + (BOOL) automaticallyNotifiesObserversForKey:(id)a;

 - (id) copyWithZone:(^{_NSZone=})a ;
 - (id) retain;
 - (Vv) release;
 - (unsigned long long) retainCount;
 - (void) finalize;
 - (BOOL) _tryRetain;
 - (BOOL) _isDeallocating;
 - (r^v) bytes;
 - (^v) mutableBytes;
 - (void) setLength:(unsigned long long)a ;
 - (unsigned long long) hash;
 - (BOOL) isEqual:(id)a ;
 - (unsigned long long) length;


@end
