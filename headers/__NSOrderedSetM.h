
@interface __NSOrderedSetM : NSMutableOrderedSet {

    Q _used;
    ^{__CFBasicHash=} _set;
    @"NSMutableArray" _array;
}
 + (BOOL) automaticallyNotifiesObserversForKey:(id)a;
 + (id) allocWithZone:(^{_NSZone=})a;
 + (id) __new:(r^@)a;

 - (void) dealloc;
 - (void) finalize;
 - (Q) count;
 - (id) objectAtIndex:(Q)a;
 - (void) getObjects:(^@)arange:({_NSRange=QQ})b;
 - (void) setObject:(id)aatIndex:(Q)b;
 - (void) insertObject:(id)aatIndex:(Q)b;
 - (void) removeObjectAtIndex:(Q)a;
 - (Q) countForObject:(id)a;
 - (BOOL) containsObject:(id)a;
 - (Q) countByEnumeratingWithState:(^{?=Q^@^Q[5Q]})aobjects:(^@)bcount:(Q)c;
 - (void) replaceObjectAtIndex:(Q)awithObject:(id)b;
 - (void) enumerateObjectsWithOptions:(Q)ausingBlock:(@?)b;
 - (void) _mutate;
 - (Q) indexOfObject:(id)a;


@end
