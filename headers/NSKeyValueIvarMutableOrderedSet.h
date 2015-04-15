
@interface NSKeyValueIvarMutableOrderedSet : NSKeyValueMutableOrderedSet {

    ^{objc_ivar=} _ivar;
}
 + (^{?=Q[4@]}) _proxyNonGCPoolPointer;

 - (id) _proxyInitWithContainer:(id)a getter:(id)b ;
 - (void) _proxyNonGCFinalize;
 - (void) insertObjects:(id)a atIndexes:(id)b ;
 - (void) replaceObjectsAtIndexes:(id)a withObjects:(id)b ;
 - (void) _raiseNilValueExceptionWithSelector:(SEL)a ;
 - (id) _nonNilMutableOrderedSetValueWithSelector:(SEL)a ;
 - (unsigned long long) count;
 - (id) objectAtIndex:(unsigned long long)a ;
 - (void) getObjects:(^@)a range:({_NSRange=QQ})b ;
 - (void) insertObject:(id)a atIndex:(unsigned long long)b ;
 - (void) removeObjectAtIndex:(unsigned long long)a ;
 - (void) replaceObjectAtIndex:(unsigned long long)a withObject:(id)b ;
 - (id) objectsAtIndexes:(id)a ;
 - (unsigned long long) indexOfObject:(id)a ;
 - (void) removeObjectsAtIndexes:(id)a ;


@end
