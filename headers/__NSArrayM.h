
@interface __NSArrayM : NSMutableArray {

    unsigned long long _used;
    unsigned long long _offset;
    b60 _size;
    b1 _doHardRetain;
    b1 _doWeakAccess;
    b1 _hasObjects;
    b1 _hasStrongReferences;
    unsigned long long _mutations;
    ^@ _list;
}
 + (BOOL) automaticallyNotifiesObserversForKey:(id)a;
 + (id) allocWithZone:(^{_NSZone=})a;
 + (id) __new:(r^@)a;

 - (void) removeLastObject;
 - (id) copyWithZone:(^{_NSZone=})a;
 - (void) dealloc;
 - (void) finalize;
 - (unsigned long long) count;
 - (id) objectAtIndex:(unsigned long long)a;
 - (void) getObjects:(^@)arange:({_NSRange=QQ})b;
 - (void) addObject:(id)a;
 - (void) setObject:(id)aatIndex:(unsigned long long)b;
 - (void) insertObject:(id)aatIndex:(unsigned long long)b;
 - (void) exchangeObjectAtIndex:(unsigned long long)awithObjectAtIndex:(unsigned long long)b;
 - (void) removeObjectAtIndex:(unsigned long long)a;
 - (void) removeAllObjects;
 - (unsigned long long) countByEnumeratingWithState:(^{?=Q^@^Q[5Q]})aobjects:(^@)bcount:(unsigned long long)c;
 - (void) replaceObjectAtIndex:(unsigned long long)awithObject:(id)b;
 - (void) enumerateObjectsWithOptions:(unsigned long long)ausingBlock:(@?)b;
 - (unsigned long long) indexOfObjectIdenticalTo:(id)a;
 - (BOOL) _hasObjects;
 - (BOOL) _hasStrongReferences;
 - (void) _mutate;


@end
