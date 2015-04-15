
@interface __NSArrayM : NSMutableArray {

    Q _used;
    Q _offset;
    b60 _size;
    b1 _doHardRetain;
    b1 _doWeakAccess;
    b1 _hasObjects;
    b1 _hasStrongReferences;
    Q _mutations;
    ^@ _list;
}
 + (BOOL) automaticallyNotifiesObserversForKey:(id)a;
 + (id) allocWithZone:(^{_NSZone=})a;
 + (id) __new:(r^@)a;

 - (void) removeLastObject;
 - (id) copyWithZone:(^{_NSZone=})a;
 - (void) dealloc;
 - (void) finalize;
 - (Q) count;
 - (id) objectAtIndex:(Q)a;
 - (void) getObjects:(^@)arange:({_NSRange=QQ})b;
 - (void) addObject:(id)a;
 - (void) setObject:(id)aatIndex:(Q)b;
 - (void) insertObject:(id)aatIndex:(Q)b;
 - (void) exchangeObjectAtIndex:(Q)awithObjectAtIndex:(Q)b;
 - (void) removeObjectAtIndex:(Q)a;
 - (void) removeAllObjects;
 - (Q) countByEnumeratingWithState:(^{?=Q^@^Q[5Q]})aobjects:(^@)bcount:(Q)c;
 - (void) replaceObjectAtIndex:(Q)awithObject:(id)b;
 - (void) enumerateObjectsWithOptions:(Q)ausingBlock:(@?)b;
 - (Q) indexOfObjectIdenticalTo:(id)a;
 - (BOOL) _hasObjects;
 - (BOOL) _hasStrongReferences;
 - (void) _mutate;


@end
