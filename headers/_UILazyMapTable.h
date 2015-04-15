
@interface _UILazyMapTable : NSObject {

    @? _mappingBlock;
    NSMapTable* _keysToClientTables;
    NSMapTable* _keysToValues;
    NSMapTable* _valuesToKeys;
}

 - (id) description;
 - (void) dealloc;
 - (unsigned long long) count;
 - (id) objectForKey:(id)a ;
 - (id) initWithMappingBlock:(@?)a ;
 - (id) cachedObjectEnumerable;
 - (void) registerClient:(id)a ofObjectForKey:(id)b ;
 - (BOOL) hasCachedObjectForKey:(id)a ;
 - (void) unregisterClient:(id)a ofObjectForKey:(id)b ;
 - (id) cachedObjects;
 - (id) keys;
 - (id) keyEnumerable;


@end
