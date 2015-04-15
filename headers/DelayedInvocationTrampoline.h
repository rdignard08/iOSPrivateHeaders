
@interface DelayedInvocationTrampoline : InvocationTrampoline {

    double _delay;
}

 - (void) forwardInvocation:(id)a ;
 - (id) initWithTarget:(id)a delay:(double)b ;


@end
