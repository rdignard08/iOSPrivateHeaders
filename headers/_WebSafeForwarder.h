
@interface _WebSafeForwarder : NSObject {

    id target;
    id defaultTarget;
    @"_WebSafeAsyncForwarder" asyncForwarder;
    long long asyncForwarderPred;
}

 - (void) dealloc;
 - (void) forwardInvocation:(id)a;
 - (BOOL) respondsToSelector:(SEL)a;
 - (id) methodSignatureForSelector:(SEL)a;
 - (id) asyncForwarder;
 - (void) clearTarget;
 - (id) initWithTarget:(id)adefaultTarget:(id)b;


@end
