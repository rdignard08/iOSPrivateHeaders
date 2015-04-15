
@interface NSConcreteHashTable : NSHashTable {

    {NSSlice="items"^^v"wantsStrong"B"wantsWeak"B"wantsARC"B"shouldCopyIn"B"usesStrong"B"usesWeak"B"usesARC"B"usesSentinel"B"pointerPersonality"B"integerPersonality"B"simpleReadClear"B"callback"@"NSWeakCallback""sizeFunction"^?"hashFunction"^?"isEqualFunction"^?"describeFunction"^?"acquireFunction"^?"relinquishFunction"^?"allocateFunction"^?"freeFunction"^?"readAt"^?"clearAt"^?"storeAt"^?} slice;
    Q count;
    Q capacity;
    Q options;
    Q mutations;
}

 - (Class) classForCoder;
 - (id) pointerFunctions;
 - (void) _initBlock;
 - (id) initWithOptions:(Q)acapacity:(Q)b;
 - (^v) getItem:(r^v)a;
 - (void) removeItem:(r^v)a;
 - (void) removeAllItems;
 - (void) insertKnownAbsentItem:(r^v)a;
 - (void) getKeys:(r^^v)acount:(^Q)b;
 - (id) initWithPointerFunctions:(id)acapacity:(Q)b;
 - (void) insertItem:(r^v)a;
 - (void) raiseCountUnderflowException;
 - (Q) rehashAround:(Q)a;
 - (void) assign:(Q)akey:(r^v)b;
 - (void) hashGrow;
 - (void) rehash;
 - (id) description;
 - (void) dealloc;
 - (id) copy;
 - (void) finalize;
 - (Q) count;
 - (void) addObject:(id)a;
 - (Q) hash;
 - (BOOL) isEqual:(id)a;
 - (Q) countByEnumeratingWithState:(^{?=Q^@^Q[5Q]})aobjects:(^@)bcount:(Q)c;
 - (id) allObjects;
 - (id) objectEnumerator;
 - (id) init;
 - (void) encodeWithCoder:(id)a;
 - (id) initWithCoder:(id)a;


@end
