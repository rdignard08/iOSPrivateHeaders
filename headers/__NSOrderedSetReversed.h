
@interface __NSOrderedSetReversed : NSOrderedSet {

    id _orderedSet;
    unsigned long long _cnt;
}

 - (void) dealloc;
 - (unsigned long long) count;
 - (id) objectAtIndex:(unsigned long long)a;
 - (unsigned long long) indexOfObject:(id)a;
 - (id) initWithOrderedSet:(id)a;


@end
