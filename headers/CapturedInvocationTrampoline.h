
@interface CapturedInvocationTrampoline : InvocationTrampoline {

    ^@ _outInvocation;
}

 - (void) forwardInvocation:(id)a;
 - (id) initWithTarget:(id)aoutInvocation:(^@)b;


@end
