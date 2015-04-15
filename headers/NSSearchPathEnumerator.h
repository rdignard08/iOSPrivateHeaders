
@interface NSSearchPathEnumerator : NSEnumerator {

    long long state;
    unsigned long long directory;
    unsigned long long domainMask;
}

 - (id) initWithDirectory:(unsigned long long)a domains:(unsigned long long)b ;
 - (id) nextObject;


@end
