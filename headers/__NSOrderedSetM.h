
@interface __NSOrderedSetM : NSMutableOrderedSet {

    unsigned long long _used;
    ^{__CFBasicHash=} _set;
    NSMutableArray _array;
}
 + (BOOL) automaticallyNotifiesObserversForKey:(id)a;
 + (id) allocWithZone:(^{_NSZone=})a;
 + (id) __new:(r^@)a;

 - (void) dealloc;
 - (void) finalize;
 - (unsigned long long) count;
 - (id) objectAtIndex:(unsigned long long)a;
 - (void) getObjects:(^@)arange:({_NSRange=QQ})b;
 - (void) setObject:(id)aatIndex:(unsigned long long)b;
 - (void) insertObject:(id)aatIndex:(unsigned long long)b;
 - (void) removeObjectAtIndex:(unsigned long long)a;
 - (unsigned long long) countForObject:(id)a;
 - (BOOL) containsObject:(id)a;
 - (unsigned long long) countByEnumeratingWithState:(^{?=Q^@^Q[5Q]})aobjects:(^@)bcount:(unsigned long long)c;
 - (void) replaceObjectAtIndex:(unsigned long long)awithObject:(id)b;
 - (void) enumerateObjectsWithOptions:(unsigned long long)ausingBlock:(@?)b;
 - (void) _mutate;
 - (unsigned long long) indexOfObject:(id)a;


@end
