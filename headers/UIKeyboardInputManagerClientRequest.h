
@interface UIKeyboardInputManagerClientRequest : NSObject {

    NSInvocation* _invocation;
    unsigned long long _errorCount;
}
@property (nonatomic, assign, readonly) NSInvocation* invocation;
@property (nonatomic, assign, readwrite) NSNumber* errorCount;
 + (id) untargetedInvocationWithInvocation:(id)awithCompletion:(BOOL)b;

 - (id) initWithInvocation:(id)a ;
 - (void) dealloc;
 - (id) invocation;
 - (unsigned long long) errorCount;
 - (void) setErrorCount:(unsigned long long)a ;


@end
