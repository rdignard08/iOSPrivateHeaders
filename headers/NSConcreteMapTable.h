
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
 - (unsigned long long) rehashAround:(unsigned long long)a;
 - (void) rehash;
 - (id) initWithKeyOptions:(unsigned long long)avalueOptions:(unsigned long long)bcapacity:(unsigned long long)c;
 - (id) keyPointerFunctions;
 - (id) valuePointerFunctions;
 - (void) setItem:(r^v)aforAbsentKey:(r^v)b;
 - (void) setItem:(r^v)aforKnownAbsentKey:(r^v)b;
 - (^v) existingItemForSetItem:(r^v)aforAbsentKey:(r^v)b;
 - (void) replaceItem:(r^v)aforExistingKey:(r^v)b;
 - (BOOL) mapMember:(r^v)aoriginalKey:(r^^v)bvalue:(r^^v)c;
 - (unsigned long long) getKeys:(r^^v)avalues:(r^^v)b;
 - (unsigned long long) realCount;
 - (void) _setBackingStore;
 - (void) assign:(unsigned long long)akey:(r^v)bvalue:(r^v)cisNew:(BOOL)d;
 - (void) grow;
 - (void) checkCount:(r*)a;
 - (void) zeroPairedEntries;
 - (BOOL) containsKeys:(r^^v)avalues:(r^^v)bcount:(unsigned long long)c;
 - (id) dump;
 - (id) description;
 - (void) dealloc;
 - (id) copy;
 - (void) finalize;
 - (unsigned long long) count;
 - (id) objectForKey:(id)a;
 - (void) removeObjectForKey:(id)a;
 - (unsigned long long) hash;
 - (BOOL) isEqual:(id)a;
 - (unsigned long long) countByEnumeratingWithState:(^{?=Q^@^Q[5Q]})aobjects:(^@)bcount:(unsigned long long)c;
 - (id) objectEnumerator;
 - (id) keyEnumerator;
 - (void) setObject:(id)aforKey:(id)b;
 - (id) allKeys;
 - (id) allValues;
 - (id) initWithKeyPointerFunctions:(id)avaluePointerFunctions:(id)bcapacity:(unsigned long long)c;
 - (id) init;
 - (void) encodeWithCoder:(id)a;
 - (id) initWithCoder:(id)a;


@end
