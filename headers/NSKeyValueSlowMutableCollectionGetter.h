
@interface NSKeyValueSlowMutableCollectionGetter : NSKeyValueProxyGetter {

    NSKeyValueGetter _baseGetter;
    NSKeyValueSetter _baseSetter;
}

 - (id) baseGetter;
 - (id) initWithContainerClassID:(id)akey:(id)bbaseGetter:(id)cbaseSetter:(id)dcontainerIsa:(Class)eproxyClass:(Class)f;
 - (id) baseSetter;
 - (BOOL) treatNilValuesLikeEmptyCollections;
 - (void) dealloc;


@end
