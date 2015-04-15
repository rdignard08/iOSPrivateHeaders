
@interface NSMutableArray : NSArray {

}
 + (id) arrayWithCapacity:(unsigned long long)a;

 - (void) removeItemAtIndex:(unsigned long long)a ;
 - (void) moveItemFromIndex:(unsigned long long)a toIndex:(unsigned long long)b ;
 - (void) setObject:(id)a atIndex:(unsigned long long)b ;
 - (void) _ui_enqueue:(id)a ;
 - (id) _ui_peek;
 - (id) _ui_dequeue;
 - (void) removeViewsFromSuperview;
 - (void) _kb_reverse;
 - (void) _addObjectsFromArray:(id)a range:({_NSRange=QQ})b ;
 - (void) filterUsingPredicate:(id)a ;
 - (void) sortUsingDescriptors:(id)a ;
 - (Class) classForCoder;
 - (id) initWithContentsOfFile:(id)a ;
 - (void) removeObjectsFromIndices:(^Q)a numIndices:(unsigned long long)b ;
 - (id) initWithContentsOfURL:(id)a ;
 - (void) removeLastObject;
 - (void) setArray:(id)a ;
 - (void) insertObjects:(id)a atIndexes:(id)b ;
 - (void) replaceObjectsAtIndexes:(id)a withObjects:(id)b ;
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
 - (void) removeObjectIdenticalTo:(id)a inRange:({_NSRange=QQ})b ;
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
 - (void) sortUsingFunction:(^?)a context:(^v)b range:({_NSRange=QQ})c ;
 - (void) setObject:(id)a atIndexedSubscript:(unsigned long long)b ;
 - (void) removeObjectIdenticalTo:(id)a ;
 - (void) sortUsingFunction:(^?)a context:(^v)b ;
 - (void) sortUsingSelector:(SEL)a ;


@end
