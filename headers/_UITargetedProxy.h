
@interface _UITargetedProxy : NSProxy {

    id _target;
}
 + (id) proxyWithTarget:(id)a;

 - (id) description;
 - (void) dealloc;
 - (void) forwardInvocation:(id)a;
 - (id) methodSignatureForSelector:(SEL)a;
 - (id) _target;
 - (void) _setTarget:(id)a;


@end
