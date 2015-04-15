
@interface NSSharedKeyDictionary : NSMutableDictionary {

    @"NSSharedKeySet" _keyMap;
    Q _count;
    ^@ _values;
    ^? _ifkIMP;
    @"NSMutableDictionary" _sideDic;
    Q _mutations;
}
 + (id) sharedKeyDictionaryWithKeySet:(id)a;

 - (Class) classForCoder;
 - (id) copyWithZone:(^{_NSZone=})a;
 - (id) mutableCopyWithZone:(^{_NSZone=})a;
 - (void) dealloc;
 - (void) finalize;
 - (Q) count;
 - (id) objectForKey:(id)a;
 - (void) removeObjectForKey:(id)a;
 - (Q) countByEnumeratingWithState:(^{?=Q^@^Q[5Q]})aobjects:(^@)bcount:(Q)c;
 - (id) keyEnumerator;
 - (void) setObject:(id)aforKey:(id)b;
 - (void) getObjects:(^@)aandKeys:(^@)bcount:(Q)c;
 - (void) enumerateKeysAndObjectsWithOptions:(Q)ausingBlock:(@?)b;
 - (id) initWithKeySet:(id)a;
 - (id) keySet;
 - (void) encodeWithCoder:(id)a;
 - (id) initWithCoder:(id)a;


@end
