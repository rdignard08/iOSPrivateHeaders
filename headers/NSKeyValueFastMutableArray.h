
@interface NSKeyValueFastMutableArray : NSKeyValueMutableArray {

    @"NSKeyValueMutatingArrayMethodSet" _mutatingMethods;
}

 - (void) removeLastObject;
 - (id) _proxyInitWithContainer:(id)agetter:(id)b;
 - (void) _proxyNonGCFinalize;
 - (void) insertObjects:(id)aatIndexes:(id)b;
 - (void) replaceObjectsAtIndexes:(id)awithObjects:(id)b;
 - (void) addObject:(id)a;
 - (void) insertObject:(id)aatIndex:(Q)b;
 - (void) removeObjectAtIndex:(Q)a;
 - (void) replaceObjectAtIndex:(Q)awithObject:(id)b;
 - (void) removeObjectsAtIndexes:(id)a;


@end