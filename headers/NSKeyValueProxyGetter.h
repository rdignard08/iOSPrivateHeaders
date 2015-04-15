
@interface NSKeyValueProxyGetter : NSKeyValueGetter {

    Class _proxyClass;
}

 - (id) initWithContainerClassID:(id)akey:(id)bproxyClass:(Class)c;
 - (Class) proxyClass;


@end
