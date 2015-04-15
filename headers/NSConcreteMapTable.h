
@interface NSConcreteMapTable : NSMapTable {

    {NSSlice="items"^^v"wantsStrong"B"wantsWeak"B"wantsARC"B"shouldCopyIn"B"usesStrong"B"usesWeak"B"usesARC"B"usesSentinel"B"pointerPersonality"B"integerPersonality"B"simpleReadClear"B"callback"@"NSWeakCallback""sizeFunction"^?"hashFunction"^?"isEqualFunction"^?"describeFunction"^?"acquireFunction"^?"relinquishFunction"^?"allocateFunction"^?"freeFunction"^?"readAt"^?"clearAt"^?"storeAt"^?} keys;
    {NSSlice="items"^^v"wantsStrong"B"wantsWeak"B"wantsARC"B"shouldCopyIn"B"usesStrong"B"usesWeak"B"usesARC"B"usesSentinel"B"pointerPersonality"B"integerPersonality"B"simpleReadClear"B"callback"@"NSWeakCallback""sizeFunction"^?"hashFunction"^?"isEqualFunction"^?"describeFunction"^?"acquireFunction"^?"relinquishFunction"^?"allocateFunction"^?"freeFunction"^?"readAt"^?"clearAt"^?"storeAt"^?} values;
    Q count;
    Q capacity;
    Q keyOptions;
    Q valueOptions;
    Q mutations;
    i growLock;
    BOOL shouldRehash;
}

 - (Class) classForCoder;
 - (void) _initBlock;
 - (void) removeAllItems;
 - (void) raiseCountUnderflowException;
 - (Q) rehashAround:(Q)a;
 - (void) rehash;
 - (id) initWithKeyOptions:(Q)avalueOptions:(Q)bcapacity:(Q)c;
 - (id) keyPointerFunctions;
 - (id) valuePointerFunctions;
 - (void) setItem:(r^v)aforAbsentKey:(r^v)b;
 - (void) setItem:(r^v)aforKnownAbsentKey:(r^v)b;
 - (^v) existingItemForSetItem:(r^v)aforAbsentKey:(r^v)b;
 - (void) replaceItem:(r^v)aforExistingKey:(r^v)b;
 - (BOOL) mapMember:(r^v)aoriginalKey:(r^^v)bvalue:(r^^v)c;
 - (Q) getKeys:(r^^v)avalues:(r^^v)b;
 - (Q) realCount;
 - (void) _setBackingStore;
 - (void) assign:(Q)akey:(r^v)bvalue:(r^v)cisNew:(BOOL)d;
 - (void) grow;
 - (void) checkCount:(r*)a;
 - (void) zeroPairedEntries;
 - (BOOL) containsKeys:(r^^v)avalues:(r^^v)bcount:(Q)c;
 - (id) dump;
 - (id) description;
 - (void) dealloc;
 - (id) copy;
 - (void) finalize;
 - (Q) count;
 - (id) objectForKey:(id)a;
 - (void) removeObjectForKey:(id)a;
 - (Q) hash;
 - (BOOL) isEqual:(id)a;
 - (Q) countByEnumeratingWithState:(^{?=Q^@^Q[5Q]})aobjects:(^@)bcount:(Q)c;
 - (id) objectEnumerator;
 - (id) keyEnumerator;
 - (void) setObject:(id)aforKey:(id)b;
 - (id) allKeys;
 - (id) allValues;
 - (id) initWithKeyPointerFunctions:(id)avaluePointerFunctions:(id)bcapacity:(Q)c;
 - (id) init;
 - (void) encodeWithCoder:(id)a;
 - (id) initWithCoder:(id)a;


@end
