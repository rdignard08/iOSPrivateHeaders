
@interface _NSIndexSetEnumerator : NSEnumerator {

    NSIndexSet* _indexSet;
    unsigned long long _index;
}

 - (id) initWithIndexSet:(id)a ;
 - (void) dealloc;
 - (id) nextObject;


@end
