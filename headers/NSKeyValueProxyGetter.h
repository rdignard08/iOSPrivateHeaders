
@interface NSKeyValueProxyGetter : NSKeyValueGetter {

    Class _proxyClass;
}

 - (id) initWithContainerClassID:(id)a key:(id)b proxyClass:(Class)c ;
 - (Class) proxyClass;


@end
