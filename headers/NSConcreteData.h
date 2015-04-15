
@interface NSConcreteData : NSData {

    b1 _isInline;
    b31 _retainCount;
    unsigned long long _length;
    unsigned long long _capacity;
    ^v _bytes;
    (?="_space"[12C]"_deallocator"@?) _u;
}

 - (id) initWithBytes:(^v)alength:(unsigned long long)bcopy:(BOOL)cdeallocator:(@?)d;
 - (BOOL) _isCompact;
 - (BOOL) _copyWillRetain;
 - (void) getBytes:(^v)a;
 - (id) copyWithZone:(^{_NSZone=})a;
 - (void) dealloc;
 - (void) finalize;
 - (r^v) bytes;
 - (void) getBytes:(^v)arange:({_NSRange=QQ})b;
 - (void) getBytes:(^v)alength:(unsigned long long)b;
 - (unsigned long long) length;
 - (id) init;
 - (id) initWithBytes:(^v)alength:(unsigned long long)bcopy:(BOOL)cfreeWhenDone:(BOOL)dbytesAreVM:(BOOL)e;


@end
