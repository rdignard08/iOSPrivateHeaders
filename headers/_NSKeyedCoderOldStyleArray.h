
@interface _NSKeyedCoderOldStyleArray : NSObject {

    ^v _addr;
    unsigned long long _count;
    unsigned long long _size;
    char _type;
    BOOL _decoded;
    [2c] _padding;
}

 - (id) initWithObjCType:(char)acount:(unsigned long long)bat:(r^v)c;
 - (void) fillObjCType:(char)acount:(unsigned long long)bat:(^v)c;
 - (void) dealloc;
 - (void) finalize;
 - (void) encodeWithCoder:(id)a;
 - (id) initWithCoder:(id)a;


@end
