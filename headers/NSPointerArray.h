
@protocol NSFastEnumeration, NSCopying, NSCoding;
@interface NSPointerArray : NSObject <NSFastEnumeration, NSCopying, NSCoding> {

}
@property (atomic, copy, readonly) NSPointerFunctions* pointerFunctions;
@property (atomic, assign, readwrite) NSNumber* count;
 + (id) pointerArrayWithOptions:(Q)a;
 + (id) pointerArrayWithPointerFunctions:(id)a;
 + (id) pointerArrayWithStrongObjects;
 + (id) pointerArrayWithWeakObjects;
 + (id) strongObjectsPointerArray;
 + (id) weakObjectsPointerArray;
 + (id) allocWithZone:(^{_NSZone=})a;

 - (id) initWithOptions:(Q)a;
 - (id) initWithPointerFunctions:(id)a;
 - (id) pointerFunctions;
 - (^v) pointerAtIndex:(Q)a;
 - (void) addPointer:(^v)a;
 - (void) removePointerAtIndex:(Q)a;
 - (void) insertPointer:(^v)aatIndex:(Q)b;
 - (void) replacePointerAtIndex:(Q)awithPointer:(^v)b;
 - (void) compact;
 - (void) setCount:(Q)a;
 - (id) mutableArray;
 - (id) copyWithZone:(^{_NSZone=})a;
 - (Q) count;
 - (Q) countByEnumeratingWithState:(^{?=Q^@^Q[5Q]})aobjects:(^@)bcount:(Q)c;
 - (id) allObjects;
 - (id) init;
 - (void) encodeWithCoder:(id)a;
 - (id) initWithCoder:(id)a;


@end
