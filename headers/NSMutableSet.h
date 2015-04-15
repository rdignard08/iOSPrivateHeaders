
@interface NSMutableSet : NSSet {

}
 + (id) setWithCapacity:(unsigned long long)a;

 - (void) filterUsingPredicate:(id)a ;
 - (Class) classForCoder;
 - (void) unionSet:(id)a ;
 - (void) setArray:(id)a ;
 - (void) intersectSet:(id)a ;
 - (void) minusSet:(id)a ;
 - (void) setSet:(id)a ;
 - (void) setOrderedSet:(id)a ;
 - (void) removeObjectsInArray:(id)a ;
 - (void) addObject:(id)a ;
 - (void) removeAllObjects;
 - (void) replaceObject:(id)a ;
 - (void) setObject:(id)a ;
 - (void) removeObject:(id)a ;
 - (id) initWithObjects:(r^@)a count:(unsigned long long)b ;
 - (id) initWithCapacity:(unsigned long long)a ;
 - (void) _mutate;
 - (void) removeObjectsWithOptions:(unsigned long long)a passingTest:(@?)b ;
 - (void) addObjects:(r^@)a count:(unsigned long long)b ;
 - (void) addObjectsFromArray:(id)a range:({_NSRange=QQ})b ;
 - (void) addObjectsFromArray:(id)a ;
 - (void) addObjectsFromOrderedSet:(id)a range:({_NSRange=QQ})b ;
 - (void) addObjectsFromOrderedSet:(id)a ;
 - (void) addObjectsFromSet:(id)a ;
 - (void) removeObjectsInArray:(id)a range:({_NSRange=QQ})b ;
 - (void) removeObjectsInOrderedSet:(id)a range:({_NSRange=QQ})b ;
 - (void) removeObjectsInOrderedSet:(id)a ;
 - (void) removeObjectsInSet:(id)a ;
 - (void) removeObjectsPassingTest:(@?)a ;
 - (void) intersectOrderedSet:(id)a ;
 - (void) minusOrderedSet:(id)a ;
 - (void) unionOrderedSet:(id)a ;


@end
