
@interface UITableViewVisibleCells : NSMutableArray {

    @"NSMutableArray" _array;
}

 - (void) removeLastObject;
 - (void) dealloc;
 - (unsigned long long) count;
 - (id) objectAtIndex:(unsigned long long)a;
 - (void) addObject:(id)a;
 - (void) insertObject:(id)aatIndex:(unsigned long long)b;
 - (void) removeObjectAtIndex:(unsigned long long)a;
 - (void) replaceObjectAtIndex:(unsigned long long)awithObject:(id)b;
 - (id) _array;


@end
