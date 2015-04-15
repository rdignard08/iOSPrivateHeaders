
@interface __NSOrderedSetM : NSMutableOrderedSet {

    unsigned long long _used;
    ^{__CFBasicHash=} _set;
    NSMutableArray* _array;
}
 + (BOOL) automaticallyNotifiesObserversForKey:(id)a;
 + (id) allocWithZone:(^{_NSZone=})a;
 + (id) __new:(r^@)a;

 - (void) dealloc;
 - (void) finalize;
 - (unsigned long long) count;
 - (id) objectAtIndex:(unsigned long long)a ;
 - (void) getObjects:(^@)a range:({_NSRange=QQ})b ;
 - (void) setObject:(id)a atIndex:(unsigned long long)b ;
 - (void) insertObject:(id)a atIndex:(unsigned long long)b ;
 - (void) removeObjectAtIndex:(unsigned long long)a ;
 - (unsigned long long) countForObject:(id)a ;
 - (BOOL) containsObject:(id)a ;
 - (unsigned long long) countByEnumeratingWithState:(^{?=Q^@^Q[5Q]})a objects:(^@)b count:(unsigned long long)c ;
 - (void) replaceObjectAtIndex:(unsigned long long)a withObject:(id)b ;
 - (void) enumerateObjectsWithOptions:(unsigned long long)a usingBlock:(@?)b ;
 - (void) _mutate;
 - (unsigned long long) indexOfObject:(id)a ;


@end
