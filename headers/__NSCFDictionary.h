
@interface __NSCFDictionary : NSMutableDictionary {

    [4C] _cfinfo;
    unsigned int _rc;
    [4I] _bits;
    ^v _callbacks;
    ^@ _values;
    ^@ _keys;
}
 + (BOOL) automaticallyNotifiesObserversForKey:(id)a;

 - (Class) classForCoder;
 - (id) copyWithZone:(^{_NSZone=})a ;
 - (id) mutableCopyWithZone:(^{_NSZone=})a ;
 - (id) retain;
 - (Vv) release;
 - (unsigned long long) retainCount;
 - (void) finalize;
 - (BOOL) _tryRetain;
 - (BOOL) _isDeallocating;
 - (unsigned long long) count;
 - (void) removeAllObjects;
 - (id) objectForKey:(id)a ;
 - (void) removeObjectForKey:(id)a ;
 - (unsigned long long) hash;
 - (BOOL) isEqual:(id)a ;
 - (unsigned long long) countByEnumeratingWithState:(^{?=Q^@^Q[5Q]})a objects:(^@)b count:(unsigned long long)c ;
 - (id) keyEnumerator;
 - (void) setObject:(id)a forKey:(id)b ;
 - (void) setObservationInfo:(^v)a ;


@end
