
@interface NSCFArray : NSMutableArray {

}
 + (BOOL) automaticallyNotifiesObserversForKey:(id)a;

 - (Class) classForCoder;
 - (void) removeLastObject;
 - (id) copyWithZone:(^{_NSZone=})a ;
 - (id) mutableCopyWithZone:(^{_NSZone=})a ;
 - (id) retain;
 - (Vv) release;
 - (unsigned long long) retainCount;
 - (void) finalize;
 - (BOOL) _tryRetain;
 - (BOOL) _isDeallocating;
 - (unsigned long long) count;
 - (id) objectAtIndex:(unsigned long long)a ;
 - (void) getObjects:(^@)a range:({_NSRange=QQ})b ;
 - (void) addObject:(id)a ;
 - (void) insertObject:(id)a atIndex:(unsigned long long)b ;
 - (void) exchangeObjectAtIndex:(unsigned long long)a withObjectAtIndex:(unsigned long long)b ;
 - (void) removeObjectAtIndex:(unsigned long long)a ;
 - (void) removeAllObjects;
 - (void) replaceObjectsInRange:({_NSRange=QQ})a withObjects:(^@)b count:(unsigned long long)c ;
 - (unsigned long long) hash;
 - (BOOL) isEqual:(id)a ;
 - (unsigned long long) countByEnumeratingWithState:(^{?=Q^@^Q[5Q]})a objects:(^@)b count:(unsigned long long)c ;
 - (void) replaceObjectAtIndex:(unsigned long long)a withObject:(id)b ;
 - (BOOL) containsObject:(id)a inRange:({_NSRange=QQ})b ;
 - (void) removeObjectsInRange:({_NSRange=QQ})a ;
 - (void) sortUsingFunction:(^?)a context:(^v)b ;


@end
