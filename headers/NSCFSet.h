
@interface NSCFSet : NSMutableSet {

}
 + (BOOL) automaticallyNotifiesObserversForKey:(id)a;

 - (Class) classForCoder;
 - (void) unionSet:(id)a;
 - (void) minusSet:(id)a;
 - (void) setSet:(id)a;
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
