
@interface __NSDictionaryM : NSMutableDictionary {

    b58 _used;
    b1 _kvo;
    unsigned long long _size;
    unsigned long long _mutations;
    ^@ _objs;
    ^@ _keys;
}
 + (BOOL) automaticallyNotifiesObserversForKey:(id)a;
 + (void) initialize;
 + (id) allocWithZone:(^{_NSZone=})a;
 + (id) __new:(r^@)a;

 - (id) copyWithZone:(^{_NSZone=})a;
 - (id) mutableCopyWithZone:(^{_NSZone=})a;
 - (void) dealloc;
 - (void) finalize;
 - (unsigned long long) count;
 - (void) removeAllObjects;
 - (id) objectForKey:(id)a;
 - (void) __setObject:(id)aforKey:(id)b;
 - (void) removeObjectForKey:(id)a;
 - (unsigned long long) countByEnumeratingWithState:(^{?=Q^@^Q[5Q]})aobjects:(^@)bcount:(unsigned long long)c;
 - (void) _mutate;
 - (id) keyEnumerator;
 - (void) setObject:(id)aforKey:(id)b;
 - (void) getObjects:(^@)aandKeys:(^@)bcount:(unsigned long long)c;
 - (void) enumerateKeysAndObjectsWithOptions:(unsigned long long)ausingBlock:(@?)b;
 - (double) _clumpingFactor;
 - (double) _clumpingInterestingThreshold;
 - (void) setObservationInfo:(^v)a;


@end
