
@interface NSCFSet : NSMutableSet {

}
 + (BOOL) automaticallyNotifiesObserversForKey:(id)a;

 - (Class) classForCoder;
 - (void) unionSet:(id)a ;
 - (void) minusSet:(id)a ;
 - (void) setSet:(id)a ;
 - (id) copyWithZone:(^{_NSZone=})a ;
 - (id) mutableCopyWithZone:(^{_NSZone=})a ;
 - (id) retain;
 - (Vv) release;
 - (unsigned long long) retainCount;
 - (void) finalize;
 - (BOOL) _tryRetain;
 - (BOOL) _isDeallocating;
 - (unsigned long long) count;
 - (void) addObject:(id)a ;
 - (void) removeAllObjects;
 - (unsigned long long) hash;
 - (BOOL) isEqual:(id)a ;
 - (id) member:(id)a ;
 - (void) getObjects:(^@)a ;
 - (void) removeObject:(id)a ;
 - (unsigned long long) countByEnumeratingWithState:(^{?=Q^@^Q[5Q]})a objects:(^@)b count:(unsigned long long)c ;
 - (id) objectEnumerator;
 - (unsigned long long) _trueCount;


@end
