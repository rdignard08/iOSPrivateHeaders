
@interface DelayedInvocationTrampoline : InvocationTrampoline {

    double _delay;
}

 - (void) forwardInvocation:(id)a;
 - (id) initWithTarget:(id)adelay:(double)b;


@end
