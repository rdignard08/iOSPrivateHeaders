
@interface NSAutoContentAccessingProxy : NSProxy {

    id _target;
}
 + (id) proxyWithTarget:(id)a;

 - (void) dealloc;
 - (void) finalize;
 - (void) forwardInvocation:(id)a;
 - (id) methodSignatureForSelector:(SEL)a;
 - (id) forwardingTargetForSelector:(SEL)a;


@end
