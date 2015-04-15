
@interface NSKeyValueSlowMutableOrderedSet : NSKeyValueMutableOrderedSet {

    NSKeyValueGetter* _valueGetter;
    NSKeyValueSetter* _valueSetter;
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
 - (unsigned long long) count;
 - (id) objectAtIndex:(unsigned long long)a;
 - (void) getObjects:(^@)arange:({_NSRange=QQ})b;
 - (void) insertObject:(id)aatIndex:(unsigned long long)b;
 - (void) removeObjectAtIndex:(unsigned long long)a;
 - (void) replaceObjectAtIndex:(unsigned long long)awithObject:(id)b;
 - (id) objectsAtIndexes:(id)a;
 - (unsigned long long) indexOfObject:(id)a;
 - (void) removeObjectsAtIndexes:(id)a;


@end
