
@interface __NSCFSet : NSMutableSet {

    [4C] _cfinfo;
    I _rc;
    [4I] _bits;
    ^v _callbacks;
    ^@ _values;
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
 - (void) addObject:(id)a;
 - (void) removeAllObjects;
 - (Q) hash;
 - (BOOL) isEqual:(id)a;
 - (id) member:(id)a;
 - (void) getObjects:(^@)a;
 - (void) removeObject:(id)a;
 - (Q) countByEnumeratingWithState:(^{?=Q^@^Q[5Q]})aobjects:(^@)bcount:(Q)c;
 - (id) objectEnumerator;
 - (Q) _trueCount;


@end
