
@interface NSSearchPathEnumerator : NSEnumerator {

    long long state;
    unsigned long long directory;
    unsigned long long domainMask;
}

 - (id) initWithDirectory:(unsigned long long)adomains:(unsigned long long)b;
 - (id) nextObject;


@end
