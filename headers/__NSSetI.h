
@interface __NSSetI : NSSet {

    b58 _used;
    b6 _szidx;
}
 + (BOOL) automaticallyNotifiesObserversForKey:(id)a;
 + (id) allocWithZone:(^{_NSZone=})a;
 + (id) __new:(r^@)a;

 - (id) copyWithZone:(^{_NSZone=})a;
 - (void) dealloc;
 - (void) finalize;
 - (Q) count;
 - (id) member:(id)a;
 - (Q) countByEnumeratingWithState:(^{?=Q^@^Q[5Q]})aobjects:(^@)bcount:(Q)c;
 - (void) enumerateObjectsWithOptions:(Q)ausingBlock:(@?)b;
 - (void) getObjects:(^@)acount:(Q)b;
 - (id) objectEnumerator;
 - (d) clumpingFactor;
 - (d) clumpingInterestingThreshold;


@end
