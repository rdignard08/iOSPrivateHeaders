
@interface NSCFArray : NSMutableArray {

}
 + (BOOL) automaticallyNotifiesObserversForKey:(id)a;

 - (Class) classForCoder;
 - (void) removeLastObject;
 - (id) copyWithZone:(^{_NSZone=})a;
 - (id) mutableCopyWithZone:(^{_NSZone=})a;
 - (id) retain;
 - (Vv) release;
 - (Q) retainCount;
 - (void) finalize;
 - (BOOL) _tryRetain;
 - (BOOL) _isDeallocating;
 - (Q) count;
 - (id) objectAtIndex:(Q)a;
 - (void) getObjects:(^@)arange:({_NSRange=QQ})b;
 - (void) addObject:(id)a;
 - (void) insertObject:(id)aatIndex:(Q)b;
 - (void) exchangeObjectAtIndex:(Q)awithObjectAtIndex:(Q)b;
 - (void) removeObjectAtIndex:(Q)a;
 - (void) removeAllObjects;
 - (void) replaceObjectsInRange:({_NSRange=QQ})awithObjects:(^@)bcount:(Q)c;
 - (Q) hash;
 - (BOOL) isEqual:(id)a;
 - (Q) countByEnumeratingWithState:(^{?=Q^@^Q[5Q]})aobjects:(^@)bcount:(Q)c;
 - (void) replaceObjectAtIndex:(Q)awithObject:(id)b;
 - (BOOL) containsObject:(id)ainRange:({_NSRange=QQ})b;
 - (void) removeObjectsInRange:({_NSRange=QQ})a;
 - (void) sortUsingFunction:(^?)acontext:(^v)b;


@end
