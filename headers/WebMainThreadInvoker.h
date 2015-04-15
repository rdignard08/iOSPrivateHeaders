
@interface WebMainThreadInvoker : NSProxy {

    id target;
    id exception;
}

 - (id) initWithTarget:(id)a;
 - (void) forwardInvocation:(id)a;
 - (id) methodSignatureForSelector:(SEL)a;
 - (void) handleException:(id)a;


@end
