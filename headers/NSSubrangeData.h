
@interface NSSubrangeData : NSData {

    b3 _reserved;
    b29 _retainCount;
    {_NSRange="location"Q"length"Q} _range;
    NSData* _data;
}

 - (BOOL) _isCompact;
 - (id) initWithData:(id)a range:({_NSRange=QQ})b ;
 - (void) getBytes:(^v)a ;
 - (id) copyWithZone:(^{_NSZone=})a ;
 - (void) dealloc;
 - (r^v) bytes;
 - (void) getBytes:(^v)a range:({_NSRange=QQ})b ;
 - (void) getBytes:(^v)a length:(unsigned long long)b ;
 - (unsigned long long) length;
 - (id) init;


@end
