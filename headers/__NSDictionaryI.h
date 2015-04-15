
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
 - (Q) count;
 - (id) objectForKey:(id)a;
 - (Q) countByEnumeratingWithState:(^{?=Q^@^Q[5Q]})aobjects:(^@)bcount:(Q)c;
 - (id) keyEnumerator;
 - (void) getObjects:(^@)aandKeys:(^@)bcount:(Q)c;
 - (void) enumerateKeysAndObjectsWithOptions:(Q)ausingBlock:(@?)b;
 - (d) _clumpingFactor;
 - (d) _clumpingInterestingThreshold;


@end
