
@interface NSSearchPathEnumerator : NSEnumerator {

    q state;
    Q directory;
    Q domainMask;
}

 - (id) initWithDirectory:(Q)adomains:(Q)b;
 - (id) nextObject;


@end
