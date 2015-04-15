
@interface _NSIndexSetEnumerator : NSEnumerator {

    @"NSIndexSet" _indexSet;
    Q _index;
}

 - (id) initWithIndexSet:(id)a;
 - (void) dealloc;
 - (id) nextObject;


@end
