
@interface WebPolicyDecisionListenerPrivate : NSObject {

    id target;
    SEL action;
}

 - (void) dealloc;
 - (id) initWithTarget:(id)aaction:(SEL)b;


@end
