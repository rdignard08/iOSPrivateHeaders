
@interface NSConcretePointerArray : NSPointerArray {

    {NSSlice="items"^^v"wantsStrong"B"wantsWeak"B"wantsARC"B"shouldCopyIn"B"usesStrong"B"usesWeak"B"usesARC"B"usesSentinel"B"pointerPersonality"B"integerPersonality"B"simpleReadClear"B"callback"@"NSWeakCallback""sizeFunction"^?"hashFunction"^?"isEqualFunction"^?"describeFunction"^?"acquireFunction"^?"relinquishFunction"^?"allocateFunction"^?"freeFunction"^?"readAt"^?"clearAt"^?"storeAt"^?} slice;
    unsigned long long count;
    unsigned long long capacity;
    unsigned long long options;
    unsigned long long mutations;
    BOOL needsCompaction;
}

 - (Class) classForCoder;
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
 - (void) _initBlock;
 - (void) arrayGrow:(unsigned long long)a ;
 - (void) _markNeedsCompaction;
 - (unsigned long long) indexOfPointer:(^v)a ;
 - (void) removePointer:(^v)a ;
 - (id) copyWithZone:(^{_NSZone=})a ;
 - (void) dealloc;
 - (void) finalize;
 - (unsigned long long) count;
 - (unsigned long long) hash;
 - (BOOL) isEqual:(id)a ;
 - (unsigned long long) countByEnumeratingWithState:(^{?=Q^@^Q[5Q]})a objects:(^@)b count:(unsigned long long)c ;
 - (id) init;
 - (void) encodeWithCoder:(id)a ;
 - (id) initWithCoder:(id)a ;


@end
