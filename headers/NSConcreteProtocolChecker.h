
@interface NSConcreteProtocolChecker : NSProtocolChecker {

    @"NSObject" _target;
    @"Protocol" _protocol;
}

 - (id) target;
 - (id) initWithTarget:(id)aprotocol:(id)b;
 - (void) dealloc;
 - (id) protocol;


@end
