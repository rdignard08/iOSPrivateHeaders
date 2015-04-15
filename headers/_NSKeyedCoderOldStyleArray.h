
@interface _NSKeyedCoderOldStyleArray : NSObject {

    ^v _addr;
    Q _count;
    Q _size;
    c _type;
    BOOL _decoded;
    [2c] _padding;
}

 - (id) initWithObjCType:(c)acount:(Q)bat:(r^v)c;
 - (void) fillObjCType:(c)acount:(Q)bat:(^v)c;
 - (void) dealloc;
 - (void) finalize;
 - (void) encodeWithCoder:(id)a;
 - (id) initWithCoder:(id)a;


@end
