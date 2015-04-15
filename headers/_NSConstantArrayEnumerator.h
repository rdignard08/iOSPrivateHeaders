
@interface _NSConstantArrayEnumerator : NSEnumerator {

    ^@ objects;
    unsigned long long capacity;
    unsigned long long index;
}

 - (id) nextObject;
 - (id) allObjects;
 - (id) initWithArray:(^@)a capacity:(unsigned long long)b ;


@end
