
@interface NSKeyValueCollectionGetter : NSKeyValueProxyGetter {

    NSKeyValueNonmutatingCollectionMethodSet* _methods;
}

 - (id) initWithContainerClassID:(id)akey:(id)bmethods:(id)cproxyClass:(Class)d;
 - (id) methods;
 - (void) dealloc;


@end
