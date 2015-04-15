
@interface _NSKeyedCoderOldStyleArray : NSObject {

    ^v _addr;
    unsigned long long _count;
    unsigned long long _size;
    char _type;
    BOOL _decoded;
    [2c] _padding;
}

 - (id) initWithObjCType:(char)a count:(unsigned long long)b at:(r^v)c ;
 - (void) fillObjCType:(char)a count:(unsigned long long)b at:(^v)c ;
 - (void) dealloc;
 - (void) finalize;
 - (void) encodeWithCoder:(id)a ;
 - (id) initWithCoder:(id)a ;


@end
