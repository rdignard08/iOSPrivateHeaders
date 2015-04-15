
@interface _NSDispatchData : NSData {

}
 + (BOOL) supportsSecureCoding;

 - (id) subdataWithRange:({_NSRange=QQ})a;
 - (Class) classForCoder;
 - (BOOL) _isDispatchData;
 - (void) enumerateByteRangesUsingBlock:(@?)a;
 - (BOOL) _allowsDirectEncoding;
 - (void) getBytes:(^v)a;
 - (id) copyWithZone:(^{_NSZone=})a;
 - (r^v) bytes;
 - (void) getBytes:(^v)arange:({_NSRange=QQ})b;
 - (Q) hash;
 - (void) getBytes:(^v)alength:(Q)b;
 - (Q) length;
 - (void) encodeWithCoder:(id)a;
 - (id) initWithCoder:(id)a;


@end
