
@interface __NSSetM : NSMutableSet {

    b58 _used;
    Q _size;
    Q _mutations;
    ^@ _objs;
}
 + (BOOL) automaticallyNotifiesObserversForKey:(id)a;
 + (void) initialize;
 + (id) allocWithZone:(^{_NSZone=})a;
 + (id) __new:(r^@)a;

 - (id) copyWithZone:(^{_NSZone=})a;
 - (void) dealloc;
 - (void) finalize;
 - (Q) count;
 - (void) addObject:(id)a;
 - (void) removeAllObjects;
 - (id) member:(id)a;
 - (void) removeObject:(id)a;
 - (Q) countByEnumeratingWithState:(^{?=Q^@^Q[5Q]})aobjects:(^@)bcount:(Q)c;
 - (void) enumerateObjectsWithOptions:(Q)ausingBlock:(@?)b;
 - (void) _mutate;
 - (void) getObjects:(^@)acount:(Q)b;
 - (id) objectEnumerator;
 - (d) clumpingFactor;
 - (d) clumpingInterestingThreshold;


@end
