
@interface NSKeyValueNotifyingMutableCollectionGetter : NSKeyValueProxyGetter {

    NSKeyValueProxyGetter* _mutableCollectionGetter;
}

 - (id) initWithContainerClassID:(id)akey:(id)bmutableCollectionGetter:(id)cproxyClass:(Class)d;
 - (id) mutableCollectionGetter;
 - (void) dealloc;


@end
