
@interface NSKeyValueFastMutableCollection1Getter : NSKeyValueProxyGetter {

    NSKeyValueNonmutatingCollectionMethodSet* _nonmutatingMethods;
    NSKeyValueMutatingCollectionMethodSet* _mutatingMethods;
}

 - (id) initWithContainerClassID:(id)a key:(id)b nonmutatingMethods:(id)c mutatingMethods:(id)d proxyClass:(Class)e ;
 - (id) nonmutatingMethods;
 - (id) mutatingMethods;
 - (void) dealloc;


@end
