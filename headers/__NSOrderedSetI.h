
@interface __NSOrderedSetI : NSOrderedSet {

    b58 _used;
    b6 _szidx;
}
 + (BOOL) automaticallyNotifiesObserversForKey:(id)a;
 + (id) allocWithZone:(^{_NSZone=})a;
 + (id) __new:(r^@)a;

 - (id) copyWithZone:(^{_NSZone=})a;
 - (void) dealloc;
 - (void) finalize;
 - (Q) count;
 - (id) objectAtIndex:(Q)a;
 - (void) getObjects:(^@)arange:({_NSRange=QQ})b;
 - (Q) countByEnumeratingWithState:(^{?=Q^@^Q[5Q]})aobjects:(^@)bcount:(Q)c;
 - (void) enumerateObjectsWithOptions:(Q)ausingBlock:(@?)b;
 - (Q) indexOfObject:(id)a;


@end
