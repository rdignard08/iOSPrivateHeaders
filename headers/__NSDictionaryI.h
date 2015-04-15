
@interface __NSDictionaryI : NSDictionary {

    b58 _used;
    b6 _szidx;
}
 + (BOOL) automaticallyNotifiesObserversForKey:(id)a;
 + (id) allocWithZone:(^{_NSZone=})a;
 + (id) __new:(r^@)a;

 - (id) copyWithZone:(^{_NSZone=})a;
 - (id) mutableCopyWithZone:(^{_NSZone=})a;
 - (void) dealloc;
 - (void) finalize;
 - (unsigned long long) count;
 - (id) objectForKey:(id)a;
 - (unsigned long long) countByEnumeratingWithState:(^{?=Q^@^Q[5Q]})aobjects:(^@)bcount:(unsigned long long)c;
 - (id) keyEnumerator;
 - (void) getObjects:(^@)aandKeys:(^@)bcount:(unsigned long long)c;
 - (void) enumerateKeysAndObjectsWithOptions:(unsigned long long)ausingBlock:(@?)b;
 - (double) _clumpingFactor;
 - (double) _clumpingInterestingThreshold;


@end
