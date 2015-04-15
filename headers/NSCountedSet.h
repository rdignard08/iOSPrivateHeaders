
@interface NSCountedSet : NSMutableSet {

    id _table;
    ^v _reserved;
}
 + (BOOL) supportsSecureCoding;

 - (Class) classForCoder;
 - (id) initWithSet:(id)a ;
 - (id) copyWithZone:(^{_NSZone=})a ;
 - (id) mutableCopyWithZone:(^{_NSZone=})a ;
 - (void) dealloc;
 - (unsigned long long) count;
 - (void) addObject:(id)a ;
 - (unsigned long long) countForObject:(id)a ;
 - (id) descriptionWithLocale:(id)a ;
 - (id) member:(id)a ;
 - (void) removeObject:(id)a ;
 - (unsigned long long) countByEnumeratingWithState:(^{?=Q^@^Q[5Q]})a objects:(^@)b count:(unsigned long long)c ;
 - (id) initWithObjects:(r^@)a count:(unsigned long long)b ;
 - (id) initWithCapacity:(unsigned long long)a ;
 - (id) initWithArray:(id)a ;
 - (void) getObjects:(^@)a count:(unsigned long long)b ;
 - (id) initWithSet:(id)a copyItems:(BOOL)b ;
 - (id) objectEnumerator;
 - (id) init;
 - (void) encodeWithCoder:(id)a ;
 - (id) initWithCoder:(id)a ;


@end
