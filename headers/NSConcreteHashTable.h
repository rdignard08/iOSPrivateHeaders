
@interface NSConcreteHashTable : NSHashTable {

    {NSSlice="items"^^v"wantsStrong"B"wantsWeak"B"wantsARC"B"shouldCopyIn"B"usesStrong"B"usesWeak"B"usesARC"B"usesSentinel"B"pointerPersonality"B"integerPersonality"B"simpleReadClear"B"callback"@"NSWeakCallback""sizeFunction"^?"hashFunction"^?"isEqualFunction"^?"describeFunction"^?"acquireFunction"^?"relinquishFunction"^?"allocateFunction"^?"freeFunction"^?"readAt"^?"clearAt"^?"storeAt"^?} slice;
    unsigned long long count;
    unsigned long long capacity;
    unsigned long long options;
    unsigned long long mutations;
}

 - (Class) classForCoder;
 - (id) pointerFunctions;
 - (void) _initBlock;
 - (id) initWithOptions:(unsigned long long)a capacity:(unsigned long long)b ;
 - (^v) getItem:(r^v)a ;
 - (void) removeItem:(r^v)a ;
 - (void) removeAllItems;
 - (void) insertKnownAbsentItem:(r^v)a ;
 - (void) getKeys:(r^^v)a count:(^Q)b ;
 - (id) initWithPointerFunctions:(id)a capacity:(unsigned long long)b ;
 - (void) insertItem:(r^v)a ;
 - (void) raiseCountUnderflowException;
 - (unsigned long long) rehashAround:(unsigned long long)a ;
 - (void) assign:(unsigned long long)a key:(r^v)b ;
 - (void) hashGrow;
 - (void) rehash;
 - (id) description;
 - (void) dealloc;
 - (id) copy;
 - (void) finalize;
 - (unsigned long long) count;
 - (void) addObject:(id)a ;
 - (unsigned long long) hash;
 - (BOOL) isEqual:(id)a ;
 - (unsigned long long) countByEnumeratingWithState:(^{?=Q^@^Q[5Q]})a objects:(^@)b count:(unsigned long long)c ;
 - (id) allObjects;
 - (id) objectEnumerator;
 - (id) init;
 - (void) encodeWithCoder:(id)a ;
 - (id) initWithCoder:(id)a ;


@end
