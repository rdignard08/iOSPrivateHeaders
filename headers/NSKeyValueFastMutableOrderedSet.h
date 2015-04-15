
@interface NSKeyValueFastMutableOrderedSet : NSKeyValueMutableOrderedSet {

    @"NSKeyValueMutatingOrderedSetMethodSet" _mutatingMethods;
}

 - (id) _proxyInitWithContainer:(id)agetter:(id)b;
 - (void) _proxyNonGCFinalize;
 - (void) insertObjects:(id)aatIndexes:(id)b;
 - (void) replaceObjectsAtIndexes:(id)awithObjects:(id)b;
 - (void) insertObject:(id)aatIndex:(Q)b;
 - (void) removeObjectAtIndex:(Q)a;
 - (void) replaceObjectAtIndex:(Q)awithObject:(id)b;
 - (void) removeObjectsAtIndexes:(id)a;


@end
