
@interface _UIQueueingServiceWebViewControllerProxy : NSObject {

    @"NSMutableArray" _queuedInvocations;
    id _serviceViewControllerProxy;
    @"<_UIQueueingServiceWebViewControllerProxyDelegate>" _delegate;
}
@property (nonatomic, retain, readwrite) NSNumber* serviceViewControllerProxy;
@property (nonatomic, assign, readwrite) NSNumber* delegate;

 - (void) dealloc;
 - (void) forwardInvocation:(id)a;
 - (void) setDelegate:(id)a;
 - (id) methodSignatureForSelector:(SEL)a;
 - (id) serviceViewControllerProxy;
 - (void) setServiceViewControllerProxy:(id)a;
 - (id) init;
 - (id) delegate;


@end
