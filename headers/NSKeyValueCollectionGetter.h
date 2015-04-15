
@interface NSKeyValueCollectionGetter : NSKeyValueProxyGetter {

    NSKeyValueNonmutatingCollectionMethodSet* _methods;
}

 - (id) initWithContainerClassID:(id)a key:(id)b methods:(id)c proxyClass:(Class)d ;
 - (id) methods;
 - (void) dealloc;


@end
