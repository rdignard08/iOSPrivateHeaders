
@interface _UIAsyncInvocation : NSObject {

    _UIAsyncInvocationObserver* _observer;
    @? _invocationBlock;
    BOOL _invocationBlockHasBeenCalled;
}
 + (id) invocationWithBlock:(@?)a;
 + (id) emptyInvocation;

 - (void) dealloc;
 - (id) invoke;


@end
