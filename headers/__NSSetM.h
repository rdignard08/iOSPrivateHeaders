
@interface __NSSetM : NSMutableSet {

    b58 _used;
    unsigned long long _size;
    unsigned long long _mutations;
    ^@ _objs;
}
 + (BOOL) automaticallyNotifiesObserversForKey:(id)a;
 + (void) initialize;
 + (id) allocWithZone:(^{_NSZone=})a;
 + (id) __new:(r^@)a;

 - (id) copyWithZone:(^{_NSZone=})a;
 - (void) dealloc;
 - (void) finalize;
 - (unsigned long long) count;
 - (void) addObject:(id)a;
 - (void) removeAllObjects;
 - (id) member:(id)a;
 - (void) removeObject:(id)a;
 - (unsigned long long) countByEnumeratingWithState:(^{?=Q^@^Q[5Q]})aobjects:(^@)bcount:(unsigned long long)c;
 - (void) enumerateObjectsWithOptions:(unsigned long long)ausingBlock:(@?)b;
 - (void) _mutate;
 - (void) getObjects:(^@)acount:(unsigned long long)b;
 - (id) objectEnumerator;
 - (double) clumpingFactor;
 - (double) clumpingInterestingThreshold;


@end
