
@interface NSCountedSet : NSMutableSet {

    id _table;
    ^v _reserved;
}
 + (BOOL) supportsSecureCoding;

 - (Class) classForCoder;
 - (id) initWithSet:(id)a;
 - (id) copyWithZone:(^{_NSZone=})a;
 - (id) mutableCopyWithZone:(^{_NSZone=})a;
 - (void) dealloc;
 - (Q) count;
 - (void) addObject:(id)a;
 - (Q) countForObject:(id)a;
 - (id) descriptionWithLocale:(id)a;
 - (id) member:(id)a;
 - (void) removeObject:(id)a;
 - (Q) countByEnumeratingWithState:(^{?=Q^@^Q[5Q]})aobjects:(^@)bcount:(Q)c;
 - (id) initWithObjects:(r^@)acount:(Q)b;
 - (id) initWithCapacity:(Q)a;
 - (id) initWithArray:(id)a;
 - (void) getObjects:(^@)acount:(Q)b;
 - (id) initWithSet:(id)acopyItems:(BOOL)b;
 - (id) objectEnumerator;
 - (id) init;
 - (void) encodeWithCoder:(id)a;
 - (id) initWithCoder:(id)a;


@end
