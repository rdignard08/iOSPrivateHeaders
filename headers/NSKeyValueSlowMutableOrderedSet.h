
@interface NSKeyValueSlowMutableOrderedSet : NSKeyValueMutableOrderedSet {

    @"NSKeyValueGetter" _valueGetter;
    @"NSKeyValueSetter" _valueSetter;
    BOOL _treatNilValuesLikeEmptyOrderedSets;
    [3c] _padding;
}
 + (^{?=Q[4@]}) _proxyNonGCPoolPointer;

 - (id) _proxyInitWithContainer:(id)agetter:(id)b;
 - (void) _proxyNonGCFinalize;
 - (void) insertObjects:(id)aatIndexes:(id)b;
 - (void) replaceObjectsAtIndexes:(id)awithObjects:(id)b;
 - (void) _raiseNilValueExceptionWithSelector:(SEL)a;
 - (id) _nonNilOrderedSetValueWithSelector:(SEL)a;
 - (id) _createNonNilMutableOrderedSetValueWithSelector:(SEL)a;
 - (Q) count;
 - (id) objectAtIndex:(Q)a;
 - (void) getObjects:(^@)arange:({_NSRange=QQ})b;
 - (void) insertObject:(id)aatIndex:(Q)b;
 - (void) removeObjectAtIndex:(Q)a;
 - (void) replaceObjectAtIndex:(Q)awithObject:(id)b;
 - (id) objectsAtIndexes:(id)a;
 - (Q) indexOfObject:(id)a;
 - (void) removeObjectsAtIndexes:(id)a;


@end