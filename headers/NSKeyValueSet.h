
@protocol NSKeyValueProxyCaching;
@interface NSKeyValueSet : NSSet <NSKeyValueProxyCaching> {

    NSObject* _container;
    NSString* _key;
    NSKeyValueNonmutatingSetMethodSet* _methods;
}
 + (^{?=Q[4@]}) _proxyNonGCPoolPointer;
 + (id) _proxyShare;

 - ({?=@@}) _proxyLocator;
 - (id) _proxyInitWithContainer:(id)a getter:(id)b ;
 - (void) _proxyNonGCFinalize;
 - (void) dealloc;
 - (unsigned long long) count;
 - (id) member:(id)a ;
 - (id) objectEnumerator;


@end
