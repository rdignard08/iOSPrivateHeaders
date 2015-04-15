
@interface NSConcreteProtocolChecker : NSProtocolChecker {

    NSObject* _target;
    Protocol* _protocol;
}

 - (id) target;
 - (id) initWithTarget:(id)a protocol:(id)b ;
 - (void) dealloc;
 - (id) protocol;


@end
