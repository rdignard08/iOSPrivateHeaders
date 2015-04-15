
@interface _UILazyMapTable : NSObject {

    @? _mappingBlock;
    @"NSMapTable" _keysToClientTables;
    @"NSMapTable" _keysToValues;
    @"NSMapTable" _valuesToKeys;
}

 - (id) description;
 - (void) dealloc;
 - (Q) count;
 - (id) objectForKey:(id)a;
 - (id) initWithMappingBlock:(@?)a;
 - (id) cachedObjectEnumerable;
 - (void) registerClient:(id)aofObjectForKey:(id)b;
 - (BOOL) hasCachedObjectForKey:(id)a;
 - (void) unregisterClient:(id)aofObjectForKey:(id)b;
 - (id) cachedObjects;
 - (id) keys;
 - (id) keyEnumerable;


@end
