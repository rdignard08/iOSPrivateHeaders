
@protocol NSKeyValueProxyCaching;
@interface NSKeyValueOrderedSet : NSOrderedSet <NSKeyValueProxyCaching> {

    NSObject* _container;
    NSString* _key;
    NSKeyValueNonmutatingOrderedSetMethodSet* _methods;
}
 + (^{?=Q[4@]}) _proxyNonGCPoolPointer;
 + (id) _proxyShare;

 - ({?=@@}) _proxyLocator;
 - (id) _proxyInitWithContainer:(id)a getter:(id)b ;
 - (void) _proxyNonGCFinalize;
 - (void) dealloc;
 - (unsigned long long) count;
 - (id) objectAtIndex:(unsigned long long)a ;
 - (void) getObjects:(^@)a range:({_NSRange=QQ})b ;
 - (id) objectsAtIndexes:(id)a ;
 - (unsigned long long) indexOfObject:(id)a ;


@end
