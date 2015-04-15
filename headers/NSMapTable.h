
@protocol NSCopying, NSCoding, NSFastEnumeration;
@interface NSMapTable : NSObject <NSCopying, NSCoding, NSFastEnumeration> {

}
@property (atomic, copy, readonly) NSPointerFunctions* keyPointerFunctions;
@property (atomic, copy, readonly) NSPointerFunctions* valuePointerFunctions;
@property (atomic, assign, readonly) NSNumber* count;
 + (id) strongToWeakObjectsMapTable;
 + (id) mapTableWithWeakToStrongObjects;
 + (id) mapTableWithKeyOptions:(unsigned long long)avalueOptions:(unsigned long long)b;
 + (id) strongToStrongObjectsMapTable;
 + (id) weakToStrongObjectsMapTable;
 + (id) alloc;
 + (id) allocWithZone:(^{_NSZone=})a;
 + (id) mapTableWithStrongToStrongObjects;
 + (id) mapTableWithWeakToWeakObjects;
 + (id) weakToWeakObjectsMapTable;
 + (id) mapTableWithStrongToWeakObjects;

 - (id) bs_takeObjectForKey:(id)a ;
 - (void) removeAllItems;
 - (id) enumerator;
 - (id) initWithKeyOptions:(unsigned long long)a valueOptions:(unsigned long long)b capacity:(unsigned long long)c ;
 - (id) keyPointerFunctions;
 - (id) valuePointerFunctions;
 - (void) setItem:(r^v)a forKey:(r^v)b ;
 - (void) setItem:(r^v)a forAbsentKey:(r^v)b ;
 - (void) setItem:(r^v)a forKnownAbsentKey:(r^v)b ;
 - (^v) existingItemForSetItem:(r^v)a forAbsentKey:(r^v)b ;
 - (void) replaceItem:(r^v)a forExistingKey:(r^v)b ;
 - (BOOL) mapMember:(r^v)a originalKey:(r^^v)b value:(r^^v)c ;
 - (unsigned long long) getKeys:(r^^v)a values:(r^^v)b ;
 - (id) mutableDictionary;
 - (id) dictionaryRepresentation;
 - (id) copyWithZone:(^{_NSZone=})a ;
 - (id) mutableCopyWithZone:(^{_NSZone=})a ;
 - (id) description;
 - (id) copy;
 - (unsigned long long) count;
 - (void) removeAllObjects;
 - (id) objectForKey:(id)a ;
 - (void) removeObjectForKey:(id)a ;
 - (unsigned long long) countByEnumeratingWithState:(^{?=Q^@^Q[5Q]})a objects:(^@)b count:(unsigned long long)c ;
 - (id) objectEnumerator;
 - (id) keyEnumerator;
 - (void) setObject:(id)a forKey:(id)b ;
 - (id) allKeys;
 - (id) allValues;
 - (id) initWithKeyPointerFunctions:(id)a valuePointerFunctions:(id)b capacity:(unsigned long long)c ;
 - (id) init;
 - (void) encodeWithCoder:(id)a ;
 - (id) initWithCoder:(id)a ;


@end
