
@interface NSKeyValueSlowMutableSet : NSKeyValueMutableSet {

    @"NSKeyValueGetter" _valueGetter;
    @"NSKeyValueSetter" _valueSetter;
    BOOL _treatNilValuesLikeEmptySets;
    [3c] _padding;
}
 + (^{?=Q[4@]}) _proxyNonGCPoolPointer;

 - (id) _proxyInitWithContainer:(id)agetter:(id)b;
 - (void) _proxyNonGCFinalize;
 - (void) unionSet:(id)a;
 - (void) _raiseNilValueExceptionWithSelector:(SEL)a;
 - (void) intersectSet:(id)a;
 - (void) minusSet:(id)a;
 - (void) setSet:(id)a;
 - (id) _setValueWithSelector:(SEL)a;
 - (id) _createMutableSetValueWithSelector:(SEL)a;
 - (Q) count;
 - (void) addObject:(id)a;
 - (void) removeAllObjects;
 - (id) member:(id)a;
 - (void) removeObject:(id)a;
 - (id) objectEnumerator;
 - (void) addObjectsFromArray:(id)a;


@end