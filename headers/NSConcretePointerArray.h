
@interface NSConcretePointerArray : NSPointerArray {

    {NSSlice="items"^^v"wantsStrong"B"wantsWeak"B"wantsARC"B"shouldCopyIn"B"usesStrong"B"usesWeak"B"usesARC"B"usesSentinel"B"pointerPersonality"B"integerPersonality"B"simpleReadClear"B"callback"@"NSWeakCallback""sizeFunction"^?"hashFunction"^?"isEqualFunction"^?"describeFunction"^?"acquireFunction"^?"relinquishFunction"^?"allocateFunction"^?"freeFunction"^?"readAt"^?"clearAt"^?"storeAt"^?} slice;
    Q count;
    Q capacity;
    Q options;
    Q mutations;
    BOOL needsCompaction;
}

 - (Class) classForCoder;
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
 - (void) _initBlock;
 - (void) arrayGrow:(Q)a;
 - (void) _markNeedsCompaction;
 - (Q) indexOfPointer:(^v)a;
 - (void) removePointer:(^v)a;
 - (id) copyWithZone:(^{_NSZone=})a;
 - (void) dealloc;
 - (void) finalize;
 - (Q) count;
 - (Q) hash;
 - (BOOL) isEqual:(id)a;
 - (Q) countByEnumeratingWithState:(^{?=Q^@^Q[5Q]})aobjects:(^@)bcount:(Q)c;
 - (id) init;
 - (void) encodeWithCoder:(id)a;
 - (id) initWithCoder:(id)a;


@end
