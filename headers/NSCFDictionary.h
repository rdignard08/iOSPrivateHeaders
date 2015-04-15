
@interface NSCFDictionary : NSMutableDictionary {

}
 + (BOOL) automaticallyNotifiesObserversForKey:(id)a;

 - (Class) classForCoder;
 - (id) copyWithZone:(^{_NSZone=})a;
 - (id) mutableCopyWithZone:(^{_NSZone=})a;
 - (id) retain;
 - (Vv) release;
 - (unsigned long long) retainCount;
 - (void) finalize;
 - (BOOL) _tryRetain;
 - (BOOL) _isDeallocating;
 - (unsigned long long) count;
 - (void) removeAllObjects;
 - (id) objectForKey:(id)a;
 - (void) getObjects:(^@)aandKeys:(^@)b;
 - (void) removeObjectForKey:(id)a;
 - (unsigned long long) hash;
 - (BOOL) isEqual:(id)a;
 - (unsigned long long) countByEnumeratingWithState:(^{?=Q^@^Q[5Q]})aobjects:(^@)bcount:(unsigned long long)c;
 - (id) keyEnumerator;
 - (void) setObject:(id)aforKey:(id)b;
 - (void) setObservationInfo:(^v)a;


@end
