
@interface NSKeyValueFastMutableCollection1Getter : NSKeyValueProxyGetter {

    NSKeyValueNonmutatingCollectionMethodSet _nonmutatingMethods;
    NSKeyValueMutatingCollectionMethodSet _mutatingMethods;
}

 - (id) initWithContainerClassID:(id)akey:(id)bnonmutatingMethods:(id)cmutatingMethods:(id)dproxyClass:(Class)e;
 - (id) nonmutatingMethods;
 - (id) mutatingMethods;
 - (void) dealloc;


@end
