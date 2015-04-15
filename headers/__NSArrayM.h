
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
 - (id) copyWithZone:(^{_NSZone=})a ;
 - (void) dealloc;
 - (void) finalize;
 - (unsigned long long) count;
 - (id) objectAtIndex:(unsigned long long)a ;
 - (void) getObjects:(^@)a range:({_NSRange=QQ})b ;
 - (void) addObject:(id)a ;
 - (void) setObject:(id)a atIndex:(unsigned long long)b ;
 - (void) insertObject:(id)a atIndex:(unsigned long long)b ;
 - (void) exchangeObjectAtIndex:(unsigned long long)a withObjectAtIndex:(unsigned long long)b ;
 - (void) removeObjectAtIndex:(unsigned long long)a ;
 - (void) removeAllObjects;
 - (unsigned long long) countByEnumeratingWithState:(^{?=Q^@^Q[5Q]})a objects:(^@)b count:(unsigned long long)c ;
 - (void) replaceObjectAtIndex:(unsigned long long)a withObject:(id)b ;
 - (void) enumerateObjectsWithOptions:(unsigned long long)a usingBlock:(@?)b ;
 - (unsigned long long) indexOfObjectIdenticalTo:(id)a ;
 - (BOOL) _hasObjects;
 - (BOOL) _hasStrongReferences;
 - (void) _mutate;


@end
