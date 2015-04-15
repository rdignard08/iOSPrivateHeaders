
@interface __NSOrderedSetReversed : NSOrderedSet {

    id _orderedSet;
    Q _cnt;
}

 - (void) dealloc;
 - (Q) count;
 - (id) objectAtIndex:(Q)a;
 - (Q) indexOfObject:(id)a;
 - (id) initWithOrderedSet:(id)a;


@end
