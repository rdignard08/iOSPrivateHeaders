
@interface NSMutableOrderedSet : NSOrderedSet {

}
 + (id) orderedSetWithCapacity:(Q)a;

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
 - (void) setObject:(id)aatIndex:(Q)b;
 - (void) insertObject:(id)aatIndex:(Q)b;
 - (void) exchangeObjectAtIndex:(Q)awithObjectAtIndex:(Q)b;
 - (void) removeObjectAtIndex:(Q)a;
 - (void) removeAllObjects;
 - (void) replaceObjectsInRange:({_NSRange=QQ})awithObjects:(r^@)bcount:(Q)c;
 - (void) replaceObject:(id)a;
 - (void) setObject:(id)a;
 - (void) removeObject:(id)a;
 - (id) initWithObjects:(r^@)acount:(Q)b;
 - (id) initWithCapacity:(Q)a;
 - (void) replaceObjectAtIndex:(Q)awithObject:(id)b;
 - (void) _mutate;
 - (void) insertObjects:(r^@)acount:(Q)batIndex:(Q)c;
 - (void) insertObjectsFromArray:(id)arange:({_NSRange=QQ})batIndex:(Q)c;
 - (void) insertObjectsFromOrderedSet:(id)arange:({_NSRange=QQ})batIndex:(Q)c;
 - (void) insertObjectsFromSet:(id)aatIndex:(Q)b;
 - (void) removeObjectsAtIndexes:(id)a;
 - (void) removeObjectsInRange:({_NSRange=QQ})a;
 - (void) removeObjectsInRange:({_NSRange=QQ})ainArray:(id)brange:({_NSRange=QQ})c;
 - (void) removeObjectsInRange:({_NSRange=QQ})ainOrderedSet:(id)brange:({_NSRange=QQ})c;
 - (void) removeObjectsInRange:({_NSRange=QQ})ainSet:(id)b;
 - (void) removeObjectsWithOptions:(Q)apassingTest:(@?)b;
 - (void) sortRange:({_NSRange=QQ})aoptions:(Q)busingComparator:(@?)c;
 - (void) sortWithOptions:(Q)ausingComparator:(@?)b;
 - (void) addObjects:(r^@)acount:(Q)b;
 - (void) addObjectsFromArray:(id)arange:({_NSRange=QQ})b;
 - (void) addObjectsFromArray:(id)a;
 - (void) addObjectsFromOrderedSet:(id)arange:({_NSRange=QQ})b;
 - (void) addObjectsFromOrderedSet:(id)a;
 - (void) addObjectsFromSet:(id)a;
 - (void) insertObjectsFromArray:(id)aatIndex:(Q)b;
 - (void) insertObjectsFromOrderedSet:(id)aatIndex:(Q)b;
 - (void) moveObjectsAtIndexes:(id)atoIndex:(Q)b;
 - (void) removeFirstObject;
 - (void) removeObject:(id)ainRange:({_NSRange=QQ})b;
 - (void) removeObjectsInRange:({_NSRange=QQ})ainArray:(id)b;
 - (void) removeObjectsInArray:(id)arange:({_NSRange=QQ})b;
 - (void) removeObjectsInRange:({_NSRange=QQ})ainOrderedSet:(id)b;
 - (void) removeObjectsInOrderedSet:(id)arange:({_NSRange=QQ})b;
 - (void) removeObjectsInOrderedSet:(id)a;
 - (void) removeObjectsInSet:(id)a;
 - (void) removeObjectsAtIndexes:(id)aoptions:(Q)bpassingTest:(@?)c;
 - (void) removeObjectsPassingTest:(@?)a;
 - (void) replaceObject:(id)ainRange:({_NSRange=QQ})b;
 - (void) replaceObjectsInRange:({_NSRange=QQ})awithObjectsFromArray:(id)brange:({_NSRange=QQ})c;
 - (void) replaceObjectsInRange:({_NSRange=QQ})awithObjectsFromArray:(id)b;
 - (void) replaceObjectsInRange:({_NSRange=QQ})awithObjectsFromOrderedSet:(id)brange:({_NSRange=QQ})c;
 - (void) replaceObjectsInRange:({_NSRange=QQ})awithObjectsFromOrderedSet:(id)b;
 - (void) replaceObjectsInRange:({_NSRange=QQ})awithObjectsFromSet:(id)b;
 - (void) rollObjectsInRange:({_NSRange=QQ})aby:(q)b;
 - (void) intersectOrderedSet:(id)a;
 - (void) minusOrderedSet:(id)a;
 - (void) unionOrderedSet:(id)a;
 - (void) setObject:(id)aatIndexedSubscript:(Q)b;


@end
