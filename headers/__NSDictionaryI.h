
@interface __NSDictionaryI : NSDictionary {

    b58 _used;
    b6 _szidx;
}
 + (BOOL) automaticallyNotifiesObserversForKey:(id)a;
 + (id) allocWithZone:(^{_NSZone=})a;
 + (id) __new:(r^@)a;

 - (id) copyWithZone:(^{_NSZone=})a ;
 - (id) mutableCopyWithZone:(^{_NSZone=})a ;
 - (void) dealloc;
 - (void) finalize;
 - (unsigned long long) count;
 - (id) objectForKey:(id)a ;
 - (unsigned long long) countByEnumeratingWithState:(^{?=Q^@^Q[5Q]})a objects:(^@)b count:(unsigned long long)c ;
 - (id) keyEnumerator;
 - (void) getObjects:(^@)a andKeys:(^@)b count:(unsigned long long)c ;
 - (void) enumerateKeysAndObjectsWithOptions:(unsigned long long)a usingBlock:(@?)b ;
 - (double) _clumpingFactor;
 - (double) _clumpingInterestingThreshold;


@end
