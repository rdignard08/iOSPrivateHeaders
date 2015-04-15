
@interface __NSOrderedSetI : NSOrderedSet {

    b58 _used;
    b6 _szidx;
}
 + (BOOL) automaticallyNotifiesObserversForKey:(id)a;
 + (id) allocWithZone:(^{_NSZone=})a;
 + (id) __new:(r^@)a;

 - (id) copyWithZone:(^{_NSZone=})a ;
 - (void) dealloc;
 - (void) finalize;
 - (unsigned long long) count;
 - (id) objectAtIndex:(unsigned long long)a ;
 - (void) getObjects:(^@)a range:({_NSRange=QQ})b ;
 - (unsigned long long) countByEnumeratingWithState:(^{?=Q^@^Q[5Q]})a objects:(^@)b count:(unsigned long long)c ;
 - (void) enumerateObjectsWithOptions:(unsigned long long)a usingBlock:(@?)b ;
 - (unsigned long long) indexOfObject:(id)a ;


@end
