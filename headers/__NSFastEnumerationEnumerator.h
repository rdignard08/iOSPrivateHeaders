
@interface __NSFastEnumerationEnumerator : NSEnumerator {

    @"<NSFastEnumeration>" _obj;
    id _origObj;
    Q _count;
    Q _mut;
}
 + (id) allocWithZone:(^{_NSZone=})a;

 - (void) dealloc;
 - (id) initWithObject:(id)a;
 - (id) nextObject;


@end
