
@interface __NSArrayReversed : NSArray {

    id _array;
    Q _cnt;
}

 - (void) dealloc;
 - (Q) count;
 - (id) objectAtIndex:(Q)a;
 - (void) getObjects:(^@)arange:({_NSRange=QQ})b;
 - (id) initWithArray:(id)a;


@end
