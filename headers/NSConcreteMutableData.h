
@interface NSConcreteMutableData : NSMutableData {

    b1 _reserved;
    b1 _needToZero;
    b1 _hasVM;
    b29 _retainCount;
    unsigned long long _length;
    unsigned long long _capacity;
    ^v _bytes;
}

 - (id) initWithLength:(unsigned long long)a;
 - (id) initWithBytes:(^v)alength:(unsigned long long)bcopy:(BOOL)cdeallocator:(@?)d;
 - (void) replaceBytesInRange:({_NSRange=QQ})awithBytes:(r^v)b;
 - (void) resetBytesInRange:({_NSRange=QQ})a;
 - (void) _freeBytes;
 - (void) dealloc;
 - (void) finalize;
 - (r^v) bytes;
 - (^v) mutableBytes;
 - (void) setLength:(unsigned long long)a;
 - (void) increaseLengthBy:(unsigned long long)a;
 - (void) appendBytes:(r^v)alength:(unsigned long long)b;
 - (id) initWithCapacity:(unsigned long long)a;
 - (unsigned long long) length;
 - (id) init;
 - (void) appendData:(id)a;


@end
