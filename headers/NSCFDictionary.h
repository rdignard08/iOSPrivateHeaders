
@interface NSCFDictionary : NSMutableDictionary {

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
 - (void) getObjects:(^@)aandKeys:(^@)b;
 - (void) removeObjectForKey:(id)a;
 - (Q) hash;
 - (BOOL) isEqual:(id)a;
 - (Q) countByEnumeratingWithState:(^{?=Q^@^Q[5Q]})aobjects:(^@)bcount:(Q)c;
 - (id) keyEnumerator;
 - (void) setObject:(id)aforKey:(id)b;
 - (void) setObservationInfo:(^v)a;


@end
