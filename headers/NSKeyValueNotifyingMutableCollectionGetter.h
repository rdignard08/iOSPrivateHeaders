
@interface NSKeyValueNotifyingMutableCollectionGetter : NSKeyValueProxyGetter {

    NSKeyValueProxyGetter* _mutableCollectionGetter;
}

 - (id) initWithContainerClassID:(id)a key:(id)b mutableCollectionGetter:(id)c proxyClass:(Class)d ;
 - (id) mutableCollectionGetter;
 - (void) dealloc;


@end
