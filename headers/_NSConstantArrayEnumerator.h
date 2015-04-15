
@interface _NSConstantArrayEnumerator : NSEnumerator {

    ^@ objects;
    Q capacity;
    Q index;
}

 - (id) nextObject;
 - (id) allObjects;
 - (id) initWithArray:(^@)acapacity:(Q)b;


@end
