
@interface UIKeyboardInputManagerClientRequest : NSObject {

    @"NSInvocation" _invocation;
    Q _errorCount;
}
@property (nonatomic, assign, readonly) NSInvocation* invocation;
@property (nonatomic, assign, readwrite) NSNumber* errorCount;
 + (id) untargetedInvocationWithInvocation:(id)awithCompletion:(BOOL)b;

 - (id) initWithInvocation:(id)a;
 - (void) dealloc;
 - (id) invocation;
 - (Q) errorCount;
 - (void) setErrorCount:(Q)a;


@end
