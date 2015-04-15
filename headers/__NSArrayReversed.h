
@interface __NSArrayReversed : NSArray {

    id _array;
    unsigned long long _cnt;
}

 - (void) dealloc;
 - (unsigned long long) count;
 - (id) objectAtIndex:(unsigned long long)a;
 - (void) getObjects:(^@)arange:({_NSRange=QQ})b;
 - (id) initWithArray:(id)a;


@end
