
@protocol NSCopying, NSCoding, NSFastEnumeration;
@interface NSHashTable : NSObject <NSCopying, NSCoding, NSFastEnumeration> {

}
@property (atomic, copy, readonly) NSPointerFunctions* pointerFunctions;
@property (atomic, assign, readonly) NSNumber* count;
@property (atomic, copy, readonly) NSArray* allObjects;
@property (nonatomic, assign, readonly) NSNumber* anyObject;
@property (atomic, copy, readonly) NSSet* setRepresentation;
 + (id) hashTableWithWeakObjects;
 + (id) hashTableWithOptions:(unsigned long long)a;
 + (id) alloc;
 + (id) allocWithZone:(^{_NSZone=})a;
 + (id) weakObjectsHashTable;

 - (id) pointerFunctions;
 - (id) initWithOptions:(unsigned long long)a capacity:(unsigned long long)b ;
 - (^v) getItem:(r^v)a ;
 - (void) removeItem:(r^v)a ;
 - (void) removeAllItems;
 - (unsigned long long) weakCount;
 - (void) insertKnownAbsentItem:(r^v)a ;
 - (void) getKeys:(r^^v)a count:(^Q)b ;
 - (id) initWithPointerFunctions:(id)a capacity:(unsigned long long)b ;
 - (id) anyObject;
 - (BOOL) intersectsHashTable:(id)a ;
 - (BOOL) isEqualToHashTable:(id)a ;
 - (BOOL) isSubsetOfHashTable:(id)a ;
 - (void) intersectHashTable:(id)a ;
 - (void) unionHashTable:(id)a ;
 - (void) minusHashTable:(id)a ;
 - (id) mutableSet;
 - (id) copyWithZone:(^{_NSZone=})a ;
 - (id) mutableCopyWithZone:(^{_NSZone=})a ;
 - (id) description;
 - (id) copy;
 - (unsigned long long) count;
 - (void) addObject:(id)a ;
 - (void) removeAllObjects;
 - (BOOL) containsObject:(id)a ;
 - (id) member:(id)a ;
 - (void) removeObject:(id)a ;
 - (unsigned long long) countByEnumeratingWithState:(^{?=Q^@^Q[5Q]})a objects:(^@)b count:(unsigned long long)c ;
 - (id) allObjects;
 - (id) objectEnumerator;
 - (id) setRepresentation;
 - (id) init;
 - (void) encodeWithCoder:(id)a ;
 - (id) initWithCoder:(id)a ;


@end
