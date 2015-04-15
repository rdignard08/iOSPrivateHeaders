
@protocol NSCopying, NSCoding, NSFastEnumeration;
@interface NSHashTable : NSObject <NSCopying, NSCoding, NSFastEnumeration> {

}
@property (atomic, copy, readonly) NSPointerFunctions* pointerFunctions;
@property (atomic, assign, readonly) NSNumber* count;
@property (atomic, copy, readonly) NSArray* allObjects;
@property (nonatomic, assign, readonly) NSNumber* anyObject;
@property (atomic, copy, readonly) NSSet* setRepresentation;
 + (id) hashTableWithWeakObjects;
 + (id) hashTableWithOptions:(Q)a;
 + (id) alloc;
 + (id) allocWithZone:(^{_NSZone=})a;
 + (id) weakObjectsHashTable;

 - (id) pointerFunctions;
 - (id) initWithOptions:(Q)acapacity:(Q)b;
 - (^v) getItem:(r^v)a;
 - (void) removeItem:(r^v)a;
 - (void) removeAllItems;
 - (Q) weakCount;
 - (void) insertKnownAbsentItem:(r^v)a;
 - (void) getKeys:(r^^v)acount:(^Q)b;
 - (id) initWithPointerFunctions:(id)acapacity:(Q)b;
 - (id) anyObject;
 - (BOOL) intersectsHashTable:(id)a;
 - (BOOL) isEqualToHashTable:(id)a;
 - (BOOL) isSubsetOfHashTable:(id)a;
 - (void) intersectHashTable:(id)a;
 - (void) unionHashTable:(id)a;
 - (void) minusHashTable:(id)a;
 - (id) mutableSet;
 - (id) copyWithZone:(^{_NSZone=})a;
 - (id) mutableCopyWithZone:(^{_NSZone=})a;
 - (id) description;
 - (id) copy;
 - (Q) count;
 - (void) addObject:(id)a;
 - (void) removeAllObjects;
 - (BOOL) containsObject:(id)a;
 - (id) member:(id)a;
 - (void) removeObject:(id)a;
 - (Q) countByEnumeratingWithState:(^{?=Q^@^Q[5Q]})aobjects:(^@)bcount:(Q)c;
 - (id) allObjects;
 - (id) objectEnumerator;
 - (id) setRepresentation;
 - (id) init;
 - (void) encodeWithCoder:(id)a;
 - (id) initWithCoder:(id)a;


@end
