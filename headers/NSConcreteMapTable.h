
@interface NSConcreteMapTable : NSMapTable {

    {NSSlice="items"^^v"wantsStrong"B"wantsWeak"B"wantsARC"B"shouldCopyIn"B"usesStrong"B"usesWeak"B"usesARC"B"usesSentinel"B"pointerPersonality"B"integerPersonality"B"simpleReadClear"B"callback"@"NSWeakCallback""sizeFunction"^?"hashFunction"^?"isEqualFunction"^?"describeFunction"^?"acquireFunction"^?"relinquishFunction"^?"allocateFunction"^?"freeFunction"^?"readAt"^?"clearAt"^?"storeAt"^?} keys;
    {NSSlice="items"^^v"wantsStrong"B"wantsWeak"B"wantsARC"B"shouldCopyIn"B"usesStrong"B"usesWeak"B"usesARC"B"usesSentinel"B"pointerPersonality"B"integerPersonality"B"simpleReadClear"B"callback"@"NSWeakCallback""sizeFunction"^?"hashFunction"^?"isEqualFunction"^?"describeFunction"^?"acquireFunction"^?"relinquishFunction"^?"allocateFunction"^?"freeFunction"^?"readAt"^?"clearAt"^?"storeAt"^?} values;
    unsigned long long count;
    unsigned long long capacity;
    unsigned long long keyOptions;
    unsigned long long valueOptions;
    unsigned long long mutations;
    int growLock;
    BOOL shouldRehash;
}

 - (Class) classForCoder;
 - (void) _initBlock;
 - (void) removeAllItems;
 - (void) raiseCountUnderflowException;
 - (unsigned long long) rehashAround:(unsigned long long)a ;
 - (void) rehash;
 - (id) initWithKeyOptions:(unsigned long long)a valueOptions:(unsigned long long)b capacity:(unsigned long long)c ;
 - (id) keyPointerFunctions;
 - (id) valuePointerFunctions;
 - (void) setItem:(r^v)a forAbsentKey:(r^v)b ;
 - (void) setItem:(r^v)a forKnownAbsentKey:(r^v)b ;
 - (^v) existingItemForSetItem:(r^v)a forAbsentKey:(r^v)b ;
 - (void) replaceItem:(r^v)a forExistingKey:(r^v)b ;
 - (BOOL) mapMember:(r^v)a originalKey:(r^^v)b value:(r^^v)c ;
 - (unsigned long long) getKeys:(r^^v)a values:(r^^v)b ;
 - (unsigned long long) realCount;
 - (void) _setBackingStore;
 - (void) assign:(unsigned long long)a key:(r^v)b value:(r^v)c isNew:(BOOL)d ;
 - (void) grow;
 - (void) checkCount:(r*)a ;
 - (void) zeroPairedEntries;
 - (BOOL) containsKeys:(r^^v)a values:(r^^v)b count:(unsigned long long)c ;
 - (id) dump;
 - (id) description;
 - (void) dealloc;
 - (id) copy;
 - (void) finalize;
 - (unsigned long long) count;
 - (id) objectForKey:(id)a ;
 - (void) removeObjectForKey:(id)a ;
 - (unsigned long long) hash;
 - (BOOL) isEqual:(id)a ;
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
