
@interface __NSCFDictionary : NSMutableDictionary {

    [4C] _cfinfo;
    I _rc;
    [4I] _bits;
    ^v _callbacks;
    ^@ _values;
    ^@ _keys;
}
 + (BOOL) automaticallyNotifiesObserversForKey:(id)a;

 - (Class) classForCoder;
 - (id) copyWithZone:(^{_NSZone=})a;
 - (id) mutableCopyWithZone:(^{_NSZone=})a;
 - (id) retain;
 - (Vv) release;
 - (Q) retainCount;
 - (void) finalize;
 - (BOOL) _tryRetain;
 - (BOOL) _isDeallocating;
 - (Q) count;
 - (void) removeAllObjects;
 - (id) objectForKey:(id)a;
 - (void) removeObjectForKey:(id)a;
 - (Q) hash;
 - (BOOL) isEqual:(id)a;
 - (Q) countByEnumeratingWithState:(^{?=Q^@^Q[5Q]})aobjects:(^@)bcount:(Q)c;
 - (id) keyEnumerator;
 - (void) setObject:(id)aforKey:(id)b;
 - (void) setObservationInfo:(^v)a;


@end
