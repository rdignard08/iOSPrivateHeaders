
@interface NSConcreteMapTableValueEnumerator : NSEnumerator {

    @"NSConcreteMapTable" mapTable;
    Q counter;
}
 + (id) enumeratorWithMapTable:(id)a;

 - (void) dealloc;
 - (id) nextObject;


@end
