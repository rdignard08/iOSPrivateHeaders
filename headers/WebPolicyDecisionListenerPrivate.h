
@interface WebPolicyDecisionListenerPrivate : NSObject {

    id target;
    SEL action;
}

 - (void) dealloc;
 - (id) initWithTarget:(id)a action:(SEL)b ;


@end
