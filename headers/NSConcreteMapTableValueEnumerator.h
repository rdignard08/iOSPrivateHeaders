
@interface NSConcreteMapTableValueEnumerator : NSEnumerator {

    @"NSConcreteMapTable" mapTable;
    unsigned long long counter;
}
 + (id) enumeratorWithMapTable:(id)a;

 - (void) dealloc;
 - (id) nextObject;


@end
