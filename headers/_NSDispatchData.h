
@interface _NSDispatchData : NSData {

}
 + (BOOL) supportsSecureCoding;

 - (id) subdataWithRange:({_NSRange=QQ})a ;
 - (Class) classForCoder;
 - (BOOL) _isDispatchData;
 - (void) enumerateByteRangesUsingBlock:(@?)a ;
 - (BOOL) _allowsDirectEncoding;
 - (void) getBytes:(^v)a ;
 - (id) copyWithZone:(^{_NSZone=})a ;
 - (r^v) bytes;
 - (void) getBytes:(^v)a range:({_NSRange=QQ})b ;
 - (unsigned long long) hash;
 - (void) getBytes:(^v)a length:(unsigned long long)b ;
 - (unsigned long long) length;
 - (void) encodeWithCoder:(id)a ;
 - (id) initWithCoder:(id)a ;


@end
