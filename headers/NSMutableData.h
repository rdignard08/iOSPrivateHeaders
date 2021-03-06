
@interface NSMutableData : NSData {

}
 + (id) dataWithLength:(unsigned long long)a;
 + (id) dataWithCapacity:(unsigned long long)a;
 + (id) allocWithZone:(^{_NSZone=})a;

 - (id) initWithLength:(unsigned long long)a ;
 - (Class) classForCoder;
 - (BOOL) _isCompact;
 - (void) replaceBytesInRange:({_NSRange=QQ})a withBytes:(r^v)b ;
 - (void) resetBytesInRange:({_NSRange=QQ})a ;
 - (^v) mutableBytes;
 - (void) setLength:(unsigned long long)a ;
 - (void) increaseLengthBy:(unsigned long long)a ;
 - (void) appendBytes:(r^v)a length:(unsigned long long)b ;
 - (void) replaceBytesInRange:({_NSRange=QQ})a withBytes:(r^v)b length:(unsigned long long)c ;
 - (id) initWithCapacity:(unsigned long long)a ;
 - (void) setData:(id)a ;
 - (void) appendData:(id)a ;


@end
