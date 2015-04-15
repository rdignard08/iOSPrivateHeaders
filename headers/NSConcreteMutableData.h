
@interface NSConcreteMutableData : NSMutableData {

    b1 _reserved;
    b1 _needToZero;
    b1 _hasVM;
    b29 _retainCount;
    Q _length;
    Q _capacity;
    ^v _bytes;
}

 - (id) initWithLength:(Q)a;
 - (id) initWithBytes:(^v)alength:(Q)bcopy:(BOOL)cdeallocator:(@?)d;
 - (void) replaceBytesInRange:({_NSRange=QQ})awithBytes:(r^v)b;
 - (void) resetBytesInRange:({_NSRange=QQ})a;
 - (void) _freeBytes;
 - (void) dealloc;
 - (void) finalize;
 - (r^v) bytes;
 - (^v) mutableBytes;
 - (void) setLength:(Q)a;
 - (void) increaseLengthBy:(Q)a;
 - (void) appendBytes:(r^v)alength:(Q)b;
 - (id) initWithCapacity:(Q)a;
 - (Q) length;
 - (id) init;
 - (void) appendData:(id)a;


@end
