
@interface __NSFastEnumerationEnumerator : NSEnumerator {

    <NSFastEnumeration>* _obj;
    id _origObj;
    unsigned long long _count;
    unsigned long long _mut;
}
 + (id) allocWithZone:(^{_NSZone=})a;

 - (void) dealloc;
 - (id) initWithObject:(id)a;
 - (id) nextObject;


@end
