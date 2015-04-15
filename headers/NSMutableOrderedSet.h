
@interface NSMutableOrderedSet : NSOrderedSet {

}
 + (id) orderedSetWithCapacity:(unsigned long long)a;

 - (void) filterUsingPredicate:(id)a;
 - (void) sortUsingDescriptors:(id)a;
 - (Class) classForCoder;
 - (void) removeLastObject;
 - (void) unionSet:(id)a;
 - (void) setArray:(id)a;
 - (void) insertObjects:(id)aatIndexes:(id)b;
 - (void) replaceObjectsAtIndexes:(id)awithObjects:(id)b;
 - (void) intersectSet:(id)a;
 - (void) minusSet:(id)a;
 - (void) setSet:(id)a;
 - (void) setOrderedSet:(id)a;
 - (void) removeObjectsInArray:(id)a;
 - (void) sortUsingComparator:(@?)a;
 - (void) addObject:(id)a;
 - (void) setObject:(id)aatIndex:(unsigned long long)b;
 - (void) insertObject:(id)aatIndex:(unsigned long long)b;
 - (void) exchangeObjectAtIndex:(unsigned long long)awithObjectAtIndex:(unsigned long long)b;
 - (void) removeObjectAtIndex:(unsigned long long)a;
 - (void) removeAllObjects;
 - (void) replaceObjectsInRange:({_NSRange=QQ})awithObjects:(r^@)bcount:(unsigned long long)c;
 - (void) replaceObject:(id)a;
 - (void) setObject:(id)a;
 - (void) removeObject:(id)a;
 - (id) initWithObjects:(r^@)acount:(unsigned long long)b;
 - (id) initWithCapacity:(unsigned long long)a;
 - (void) replaceObjectAtIndex:(unsigned long long)awithObject:(id)b;
 - (void) _mutate;
 - (void) insertObjects:(r^@)acount:(unsigned long long)batIndex:(unsigned long long)c;
 - (void) insertObjectsFromArray:(id)arange:({_NSRange=QQ})batIndex:(unsigned long long)c;
 - (void) insertObjectsFromOrderedSet:(id)arange:({_NSRange=QQ})batIndex:(unsigned long long)c;
 - (void) insertObjectsFromSet:(id)aatIndex:(unsigned long long)b;
 - (void) removeObjectsAtIndexes:(id)a;
 - (void) removeObjectsInRange:({_NSRange=QQ})a;
 - (void) removeObjectsInRange:({_NSRange=QQ})ainArray:(id)brange:({_NSRange=QQ})c;
 - (void) removeObjectsInRange:({_NSRange=QQ})ainOrderedSet:(id)brange:({_NSRange=QQ})c;
 - (void) removeObjectsInRange:({_NSRange=QQ})ainSet:(id)b;
 - (void) removeObjectsWithOptions:(unsigned long long)apassingTest:(@?)b;
 - (void) sortRange:({_NSRange=QQ})aoptions:(unsigned long long)busingComparator:(@?)c;
 - (void) sortWithOptions:(unsigned long long)ausingComparator:(@?)b;
 - (void) addObjects:(r^@)acount:(unsigned long long)b;
 - (void) addObjectsFromArray:(id)arange:({_NSRange=QQ})b;
 - (void) addObjectsFromArray:(id)a;
 - (void) addObjectsFromOrderedSet:(id)arange:({_NSRange=QQ})b;
 - (void) addObjectsFromOrderedSet:(id)a;
 - (void) addObjectsFromSet:(id)a;
 - (void) insertObjectsFromArray:(id)aatIndex:(unsigned long long)b;
 - (void) insertObjectsFromOrderedSet:(id)aatIndex:(unsigned long long)b;
 - (void) moveObjectsAtIndexes:(id)atoIndex:(unsigned long long)b;
 - (void) removeFirstObject;
 - (void) removeObject:(id)ainRange:({_NSRange=QQ})b;
 - (void) removeObjectsInRange:({_NSRange=QQ})ainArray:(id)b;
 - (void) removeObjectsInArray:(id)arange:({_NSRange=QQ})b;
 - (void) removeObjectsInRange:({_NSRange=QQ})ainOrderedSet:(id)b;
 - (void) removeObjectsInOrderedSet:(id)arange:({_NSRange=QQ})b;
 - (void) removeObjectsInOrderedSet:(id)a;
 - (void) removeObjectsInSet:(id)a;
 - (void) removeObjectsAtIndexes:(id)aoptions:(unsigned long long)bpassingTest:(@?)c;
 - (void) removeObjectsPassingTest:(@?)a;
 - (void) replaceObject:(id)ainRange:({_NSRange=QQ})b;
 - (void) replaceObjectsInRange:({_NSRange=QQ})awithObjectsFromArray:(id)brange:({_NSRange=QQ})c;
 - (void) replaceObjectsInRange:({_NSRange=QQ})awithObjectsFromArray:(id)b;
 - (void) replaceObjectsInRange:({_NSRange=QQ})awithObjectsFromOrderedSet:(id)brange:({_NSRange=QQ})c;
 - (void) replaceObjectsInRange:({_NSRange=QQ})awithObjectsFromOrderedSet:(id)b;
 - (void) replaceObjectsInRange:({_NSRange=QQ})awithObjectsFromSet:(id)b;
 - (void) rollObjectsInRange:({_NSRange=QQ})aby:(long long)b;
 - (void) intersectOrderedSet:(id)a;
 - (void) minusOrderedSet:(id)a;
 - (void) unionOrderedSet:(id)a;
 - (void) setObject:(id)aatIndexedSubscript:(unsigned long long)b;


@end
