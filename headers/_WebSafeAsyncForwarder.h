
@interface _WebSafeAsyncForwarder : NSObject {

    @"_WebSafeForwarder" _forwarder;
}

 - (void) forwardInvocation:(id)a;
 - (BOOL) respondsToSelector:(SEL)a;
 - (id) methodSignatureForSelector:(SEL)a;
 - (id) initWithForwarder:(id)a;


@end
