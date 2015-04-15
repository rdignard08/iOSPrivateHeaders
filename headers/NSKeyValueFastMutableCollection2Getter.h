
@interface NSKeyValueFastMutableCollection2Getter : NSKeyValueProxyGetter {

    NSKeyValueGetter* _baseGetter;
    NSKeyValueMutatingCollectionMethodSet* _mutatingMethods;
}

 - (id) mutatingMethods;
 - (id) initWithContainerClassID:(id)a key:(id)b baseGetter:(id)c mutatingMethods:(id)d proxyClass:(Class)e ;
 - (id) baseGetter;
 - (void) dealloc;


@end
