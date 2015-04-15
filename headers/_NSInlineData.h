
@interface _NSInlineData : NSData {

    unsigned short _length;
}

 - (id) initWithBytes:(r^v)a length:(unsigned long long)b ;
 - (BOOL) _isCompact;
 - (id) copyWithZone:(^{_NSZone=})a ;
 - (r^v) bytes;
 - (unsigned long long) length;


@end
