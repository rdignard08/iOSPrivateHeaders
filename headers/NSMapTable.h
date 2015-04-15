
@protocol NSCopying, NSCoding, NSFastEnumeration;
@interface NSMapTable : NSObject <NSCopying, NSCoding, NSFastEnumeration> {

}
@property (atomic, copy, readonly) NSPointerFunctions* keyPointerFunctions;
@property (atomic, copy, readonly) NSPointerFunctions* valuePointerFunctions;
@property (atomic, assign, readonly) NSNumber* count;
 + (id) strongToWeakObjectsMapTable;
 + (id) mapTableWithWeakToStrongObjects;
 + (id) mapTableWithKeyOptions:(Q)avalueOptions:(Q)b;
 + (id) strongToStrongObjectsMapTable;
 + (id) weakToStrongObjectsMapTable;
 + (id) alloc;
 + (id) allocWithZone:(^{_NSZone=})a;
 + (id) mapTableWithStrongToStrongObjects;
 + (id) mapTableWithWeakToWeakObjects;
 + (id) weakToWeakObjectsMapTable;
 + (id) mapTableWithStrongToWeakObjects;

 - (id) bs_takeObjectForKey:(id)a;
 - (void) removeAllItems;
 - (id) enumerator;
 - (id) initWithKeyOptions:(Q)avalueOptions:(Q)bcapacity:(Q)c;
 - (id) keyPointerFunctions;
 - (id) valuePointerFunctions;
 - (void) setItem:(r^v)aforKey:(r^v)b;
 - (void) setItem:(r^v)aforAbsentKey:(r^v)b;
 - (void) setItem:(r^v)aforKnownAbsentKey:(r^v)b;
 - (^v) existingItemForSetItem:(r^v)aforAbsentKey:(r^v)b;
 - (void) replaceItem:(r^v)aforExistingKey:(r^v)b;
 - (BOOL) mapMember:(r^v)aoriginalKey:(r^^v)bvalue:(r^^v)c;
 - (Q) getKeys:(r^^v)avalues:(r^^v)b;
 - (id) mutableDictionary;
 - (id) dictionaryRepresentation;
 - (id) copyWithZone:(^{_NSZone=})a;
 - (id) mutableCopyWithZone:(^{_NSZone=})a;
 - (id) description;
 - (id) copy;
 - (Q) count;
 - (void) removeAllObjects;
 - (id) objectForKey:(id)a;
 - (void) removeObjectForKey:(id)a;
 - (Q) countByEnumeratingWithState:(^{?=Q^@^Q[5Q]})aobjects:(^@)bcount:(Q)c;
 - (id) objectEnumerator;
 - (id) keyEnumerator;
 - (void) setObject:(id)aforKey:(id)b;
 - (id) allKeys;
 - (id) allValues;
 - (id) initWithKeyPointerFunctions:(id)avaluePointerFunctions:(id)bcapacity:(Q)c;
 - (id) init;
 - (void) encodeWithCoder:(id)a;
 - (id) initWithCoder:(id)a;


@end
