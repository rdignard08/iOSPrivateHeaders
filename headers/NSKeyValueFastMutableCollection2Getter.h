
@interface NSKeyValueFastMutableCollection2Getter : NSKeyValueProxyGetter {

    NSKeyValueGetter _baseGetter;
    NSKeyValueMutatingCollectionMethodSet _mutatingMethods;
}

 - (id) mutatingMethods;
 - (id) initWithContainerClassID:(id)akey:(id)bbaseGetter:(id)cmutatingMethods:(id)dproxyClass:(Class)e;
 - (id) baseGetter;
 - (void) dealloc;


@end
