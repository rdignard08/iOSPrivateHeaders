
@interface __NSCFArray : NSMutableArray {

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
 - (void) removeObjectAtIndex:(Q)a;
 - (Q) hash;
 - (BOOL) isEqual:(id)a;
 - (Q) countByEnumeratingWithState:(^{?=Q^@^Q[5Q]})aobjects:(^@)bcount:(Q)c;
 - (void) replaceObjectAtIndex:(Q)awithObject:(id)b;


@end
