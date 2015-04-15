
@interface __NSSetI : NSSet {

    b58 _used;
    b6 _szidx;
}
 + (BOOL) automaticallyNotifiesObserversForKey:(id)a;
 + (id) allocWithZone:(^{_NSZone=})a;
 + (id) __new:(r^@)a;

 - (id) copyWithZone:(^{_NSZone=})a ;
 - (void) dealloc;
 - (void) finalize;
 - (unsigned long long) count;
 - (id) member:(id)a ;
 - (unsigned long long) countByEnumeratingWithState:(^{?=Q^@^Q[5Q]})a objects:(^@)b count:(unsigned long long)c ;
 - (void) enumerateObjectsWithOptions:(unsigned long long)a usingBlock:(@?)b ;
 - (void) getObjects:(^@)a count:(unsigned long long)b ;
 - (id) objectEnumerator;
 - (double) clumpingFactor;
 - (double) clumpingInterestingThreshold;


@end
