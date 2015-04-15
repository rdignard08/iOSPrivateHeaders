
@interface NSKeyValueSlowMutableCollectionGetter : NSKeyValueProxyGetter {

    NSKeyValueGetter* _baseGetter;
    NSKeyValueSetter* _baseSetter;
}

 - (id) baseGetter;
 - (id) initWithContainerClassID:(id)a key:(id)b baseGetter:(id)c baseSetter:(id)d containerIsa:(Class)e proxyClass:(Class)f ;
 - (id) baseSetter;
 - (BOOL) treatNilValuesLikeEmptyCollections;
 - (void) dealloc;


@end
