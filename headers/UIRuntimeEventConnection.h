
@interface UIRuntimeEventConnection : UIRuntimeConnection {

    unsigned long long eventMask;
}

 - (id) target;
 - (id) description;
 - (SEL) action;
 - (void) connectForSimulator;
 - (unsigned long long) eventMask;
 - (void) setEventMask:(unsigned long long)a ;
 - (void) encodeWithCoder:(id)a ;
 - (id) initWithCoder:(id)a ;
 - (void) connect;


@end
