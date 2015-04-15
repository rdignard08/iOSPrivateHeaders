
@interface NSKeyValueFastMutableOrderedSet : NSKeyValueMutableOrderedSet {

    NSKeyValueMutatingOrderedSetMethodSet* _mutatingMethods;
}

 - (id) _proxyInitWithContainer:(id)a getter:(id)b ;
 - (void) _proxyNonGCFinalize;
 - (void) insertObjects:(id)a atIndexes:(id)b ;
 - (void) replaceObjectsAtIndexes:(id)a withObjects:(id)b ;
 - (void) insertObject:(id)a atIndex:(unsigned long long)b ;
 - (void) removeObjectAtIndex:(unsigned long long)a ;
 - (void) replaceObjectAtIndex:(unsigned long long)a withObject:(id)b ;
 - (void) removeObjectsAtIndexes:(id)a ;


@end
