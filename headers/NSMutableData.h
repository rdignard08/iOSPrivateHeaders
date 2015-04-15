
@interface NSMutableData : NSData {

}
 + (id) dataWithLength:(Q)a;
 + (id) dataWithCapacity:(Q)a;
 + (id) allocWithZone:(^{_NSZone=})a;

 - (id) initWithLength:(Q)a;
 - (Class) classForCoder;
 - (BOOL) _isCompact;
 - (void) replaceBytesInRange:({_NSRange=QQ})awithBytes:(r^v)b;
 - (void) resetBytesInRange:({_NSRange=QQ})a;
 - (^v) mutableBytes;
 - (void) setLength:(Q)a;
 - (void) increaseLengthBy:(Q)a;
 - (void) appendBytes:(r^v)alength:(Q)b;
 - (void) replaceBytesInRange:({_NSRange=QQ})awithBytes:(r^v)blength:(Q)c;
 - (id) initWithCapacity:(Q)a;
 - (void) setData:(id)a;
 - (void) appendData:(id)a;


@end
