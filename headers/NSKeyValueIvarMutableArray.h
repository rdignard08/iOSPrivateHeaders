
@interface NSKeyValueIvarMutableArray : NSKeyValueMutableArray {

    ^{objc_ivar=} _ivar;
}
 + (^{?=Q[4@]}) _proxyNonGCPoolPointer;

 - (void) removeLastObject;
 - (id) _proxyInitWithContainer:(id)agetter:(id)b;
 - (void) _proxyNonGCFinalize;
 - (void) insertObjects:(id)aatIndexes:(id)b;
 - (void) replaceObjectsAtIndexes:(id)awithObjects:(id)b;
 - (void) _raiseNilValueExceptionWithSelector:(SEL)a;
 - (id) _nonNilMutableArrayValueWithSelector:(SEL)a;
 - (unsigned long long) count;
 - (id) objectAtIndex:(unsigned long long)a;
 - (void) getObjects:(^@)arange:({_NSRange=QQ})b;
 - (void) addObject:(id)a;
 - (void) insertObject:(id)aatIndex:(unsigned long long)b;
 - (void) removeObjectAtIndex:(unsigned long long)a;
 - (void) replaceObjectAtIndex:(unsigned long long)awithObject:(id)b;
 - (id) objectsAtIndexes:(id)a;
 - (void) removeObjectsAtIndexes:(id)a;


@end
