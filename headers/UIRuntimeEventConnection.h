
@interface UIRuntimeEventConnection : UIRuntimeConnection {

    Q eventMask;
}

 - (id) target;
 - (id) description;
 - (SEL) action;
 - (void) connectForSimulator;
 - (Q) eventMask;
 - (void) setEventMask:(Q)a;
 - (void) encodeWithCoder:(id)a;
 - (id) initWithCoder:(id)a;
 - (void) connect;


@end
