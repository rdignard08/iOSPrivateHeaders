
@interface NSMutableOrderedSet : NSOrderedSet {

}
 + (id) orderedSetWithCapacity:(unsigned long long)a;

 - (void) filterUsingPredicate:(id)a ;
 - (void) sortUsingDescriptors:(id)a ;
 - (Class) classForCoder;
 - (void) removeLastObject;
 - (void) unionSet:(id)a ;
 - (void) setArray:(id)a ;
 - (void) insertObjects:(id)a atIndexes:(id)b ;
 - (void) replaceObjectsAtIndexes:(id)a withObjects:(id)b ;
 - (void) intersectSet:(id)a ;
 - (void) minusSet:(id)a ;
 - (void) setSet:(id)a ;
 - (void) setOrderedSet:(id)a ;
 - (void) removeObjectsInArray:(id)a ;
 - (void) sortUsingComparator:(@?)a ;
 - (void) addObject:(id)a ;
 - (void) setObject:(id)a atIndex:(unsigned long long)b ;
 - (void) insertObject:(id)a atIndex:(unsigned long long)b ;
 - (void) exchangeObjectAtIndex:(unsigned long long)a withObjectAtIndex:(unsigned long long)b ;
 - (void) removeObjectAtIndex:(unsigned long long)a ;
 - (void) removeAllObjects;
 - (void) replaceObjectsInRange:({_NSRange=QQ})a withObjects:(r^@)b count:(unsigned long long)c ;
 - (void) replaceObject:(id)a ;
 - (void) setObject:(id)a ;
 - (void) removeObject:(id)a ;
 - (id) initWithObjects:(r^@)a count:(unsigned long long)b ;
 - (id) initWithCapacity:(unsigned long long)a ;
 - (void) replaceObjectAtIndex:(unsigned long long)a withObject:(id)b ;
 - (void) _mutate;
 - (void) insertObjects:(r^@)a count:(unsigned long long)b atIndex:(unsigned long long)c ;
 - (void) insertObjectsFromArray:(id)a range:({_NSRange=QQ})b atIndex:(unsigned long long)c ;
 - (void) insertObjectsFromOrderedSet:(id)a range:({_NSRange=QQ})b atIndex:(unsigned long long)c ;
 - (void) insertObjectsFromSet:(id)a atIndex:(unsigned long long)b ;
 - (void) removeObjectsAtIndexes:(id)a ;
 - (void) removeObjectsInRange:({_NSRange=QQ})a ;
 - (void) removeObjectsInRange:({_NSRange=QQ})a inArray:(id)b range:({_NSRange=QQ})c ;
 - (void) removeObjectsInRange:({_NSRange=QQ})a inOrderedSet:(id)b range:({_NSRange=QQ})c ;
 - (void) removeObjectsInRange:({_NSRange=QQ})a inSet:(id)b ;
 - (void) removeObjectsWithOptions:(unsigned long long)a passingTest:(@?)b ;
 - (void) sortRange:({_NSRange=QQ})a options:(unsigned long long)b usingComparator:(@?)c ;
 - (void) sortWithOptions:(unsigned long long)a usingComparator:(@?)b ;
 - (void) addObjects:(r^@)a count:(unsigned long long)b ;
 - (void) addObjectsFromArray:(id)a range:({_NSRange=QQ})b ;
 - (void) addObjectsFromArray:(id)a ;
 - (void) addObjectsFromOrderedSet:(id)a range:({_NSRange=QQ})b ;
 - (void) addObjectsFromOrderedSet:(id)a ;
 - (void) addObjectsFromSet:(id)a ;
 - (void) insertObjectsFromArray:(id)a atIndex:(unsigned long long)b ;
 - (void) insertObjectsFromOrderedSet:(id)a atIndex:(unsigned long long)b ;
 - (void) moveObjectsAtIndexes:(id)a toIndex:(unsigned long long)b ;
 - (void) removeFirstObject;
 - (void) removeObject:(id)a inRange:({_NSRange=QQ})b ;
 - (void) removeObjectsInRange:({_NSRange=QQ})a inArray:(id)b ;
 - (void) removeObjectsInArray:(id)a range:({_NSRange=QQ})b ;
 - (void) removeObjectsInRange:({_NSRange=QQ})a inOrderedSet:(id)b ;
 - (void) removeObjectsInOrderedSet:(id)a range:({_NSRange=QQ})b ;
 - (void) removeObjectsInOrderedSet:(id)a ;
 - (void) removeObjectsInSet:(id)a ;
 - (void) removeObjectsAtIndexes:(id)a options:(unsigned long long)b passingTest:(@?)c ;
 - (void) removeObjectsPassingTest:(@?)a ;
 - (void) replaceObject:(id)a inRange:({_NSRange=QQ})b ;
 - (void) replaceObjectsInRange:({_NSRange=QQ})a withObjectsFromArray:(id)b range:({_NSRange=QQ})c ;
 - (void) replaceObjectsInRange:({_NSRange=QQ})a withObjectsFromArray:(id)b ;
 - (void) replaceObjectsInRange:({_NSRange=QQ})a withObjectsFromOrderedSet:(id)b range:({_NSRange=QQ})c ;
 - (void) replaceObjectsInRange:({_NSRange=QQ})a withObjectsFromOrderedSet:(id)b ;
 - (void) replaceObjectsInRange:({_NSRange=QQ})a withObjectsFromSet:(id)b ;
 - (void) rollObjectsInRange:({_NSRange=QQ})a by:(long long)b ;
 - (void) intersectOrderedSet:(id)a ;
 - (void) minusOrderedSet:(id)a ;
 - (void) unionOrderedSet:(id)a ;
 - (void) setObject:(id)a atIndexedSubscript:(unsigned long long)b ;


@end
