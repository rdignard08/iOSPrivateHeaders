
@interface NSSharedKeyDictionary : NSMutableDictionary {

    NSSharedKeySet* _keyMap;
    unsigned long long _count;
    ^@ _values;
    ^? _ifkIMP;
    NSMutableDictionary* _sideDic;
    unsigned long long _mutations;
}
 + (id) sharedKeyDictionaryWithKeySet:(id)a;

 - (Class) classForCoder;
 - (id) copyWithZone:(^{_NSZone=})a ;
 - (id) mutableCopyWithZone:(^{_NSZone=})a ;
 - (void) dealloc;
 - (void) finalize;
 - (unsigned long long) count;
 - (id) objectForKey:(id)a ;
 - (void) removeObjectForKey:(id)a ;
 - (unsigned long long) countByEnumeratingWithState:(^{?=Q^@^Q[5Q]})a objects:(^@)b count:(unsigned long long)c ;
 - (id) keyEnumerator;
 - (void) setObject:(id)a forKey:(id)b ;
 - (void) getObjects:(^@)a andKeys:(^@)b count:(unsigned long long)c ;
 - (void) enumerateKeysAndObjectsWithOptions:(unsigned long long)a usingBlock:(@?)b ;
 - (id) initWithKeySet:(id)a ;
 - (id) keySet;
 - (void) encodeWithCoder:(id)a ;
 - (id) initWithCoder:(id)a ;


@end
