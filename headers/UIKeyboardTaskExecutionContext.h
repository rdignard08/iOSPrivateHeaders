
@interface UIKeyboardTaskExecutionContext : NSObject {

    UIKeyboardTaskExecutionContext* _parentExecutionContext;
    @? _continuation;
    id _info;
    UIKeyboardTaskQueue* _executionQueue;
}
@property (nonatomic, retain, readwrite) NSNumber* info;
@property (nonatomic, assign, readonly) UIKeyboardTaskQueue* executionQueue;

 - (void) dealloc;
 - (void) returnExecutionToParent;
 - (id) childWithContinuation:(@?)a ;
 - (void) transferExecutionToMainThreadWithTask:(@?)a ;
 - (void) returnExecutionToParentWithInfo:(id)a ;
 - (id) executionQueue;
 - (id) initWithParentContext:(id)a continuation:(@?)b ;
 - (void) setInfo:(id)a ;
 - (id) initWithExecutionQueue:(id)a ;
 - (id) init;
 - (id) info;


@end
