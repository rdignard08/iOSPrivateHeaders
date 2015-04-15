
@interface __NSDictionaryM : NSMutableDictionary {

    b58 _used;
    b1 _kvo;
    Q _size;
    Q _mutations;
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
 - (Q) count;
 - (void) removeAllObjects;
 - (id) objectForKey:(id)a;
 - (void) __setObject:(id)aforKey:(id)b;
 - (void) removeObjectForKey:(id)a;
 - (Q) countByEnumeratingWithState:(^{?=Q^@^Q[5Q]})aobjects:(^@)bcount:(Q)c;
 - (void) _mutate;
 - (id) keyEnumerator;
 - (void) setObject:(id)aforKey:(id)b;
 - (void) getObjects:(^@)aandKeys:(^@)bcount:(Q)c;
 - (void) enumerateKeysAndObjectsWithOptions:(Q)ausingBlock:(@?)b;
 - (d) _clumpingFactor;
 - (d) _clumpingInterestingThreshold;
 - (void) setObservationInfo:(^v)a;


@end
