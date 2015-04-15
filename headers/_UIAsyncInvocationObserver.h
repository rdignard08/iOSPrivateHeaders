
@interface _UIAsyncInvocationObserver : NSObject {

    NSObject<OS_dispatch_queue>* _postCompletionQueue;
}
 + (void) whenInvocationsCompleteForObservers:(id)ado:(@?)b;

 - (void) dealloc;
 - (void) whenCompleteDo:(@?)a ;
 - (void) _didCompleteInvocation;
 - (id) init;


@end
