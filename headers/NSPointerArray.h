
@protocol NSFastEnumeration, NSCopying, NSCoding;
@interface NSPointerArray : NSObject <NSFastEnumeration, NSCopying, NSCoding> {

}
@property (atomic, copy, readonly) NSPointerFunctions* pointerFunctions;
@property (atomic, assign, readwrite) NSNumber* count;
 + (id) pointerArrayWithOptions:(unsigned long long)a;
 + (id) pointerArrayWithPointerFunctions:(id)a;
 + (id) pointerArrayWithStrongObjects;
 + (id) pointerArrayWithWeakObjects;
 + (id) strongObjectsPointerArray;
 + (id) weakObjectsPointerArray;
 + (id) allocWithZone:(^{_NSZone=})a;

 - (id) initWithOptions:(unsigned long long)a ;
 - (id) initWithPointerFunctions:(id)a ;
 - (id) pointerFunctions;
 - (^v) pointerAtIndex:(unsigned long long)a ;
 - (void) addPointer:(^v)a ;
 - (void) removePointerAtIndex:(unsigned long long)a ;
 - (void) insertPointer:(^v)a atIndex:(unsigned long long)b ;
 - (void) replacePointerAtIndex:(unsigned long long)a withPointer:(^v)b ;
 - (void) compact;
 - (void) setCount:(unsigned long long)a ;
 - (id) mutableArray;
 - (id) copyWithZone:(^{_NSZone=})a ;
 - (unsigned long long) count;
 - (unsigned long long) countByEnumeratingWithState:(^{?=Q^@^Q[5Q]})a objects:(^@)b count:(unsigned long long)c ;
 - (id) allObjects;
 - (id) init;
 - (void) encodeWithCoder:(id)a ;
 - (id) initWithCoder:(id)a ;


@end
