
@interface BSMIGServer : NSObject {

    @"NSString" _portName;
    I _port;
    ^{_opaque_pthread_t=q^{__darwin_pthread_handler_rec}[8176c]} _thread;
    ^{mig_subsystem=^?iiIQ[1{routine_descriptor=^?^?II^{?}I}]} _subsystem;
    ^{__CFRunLoopObserver=} _entryObserver;
    ^{__CFRunLoopObserver=} _exitObserver;
}
@property (nonatomic, assign, readwrite) NSNumber* threadPriority;
@property (nonatomic, assign, readonly) NSString* threadName;

 - (i) threadPriority;
 - (void) setThreadPriority:(i)a;
 - (void) dealloc;
 - (I) port;
 - (id) init;
 - (^v) _start;
 - (void) setThreadName:(id)a;
 - (I) _createPortNamed:(id)a;
 - (void) _installAutoreleasePoolsIfNecessaryForMode:(^{__CFString=})a;
 - (id) initWithPortName:(id)asubsystem:(^{mig_subsystem=^?iiIQ[1{routine_descriptor=^?^?II^{?}I}]})bseparateThread:(BOOL)c;
 - (id) threadName;


@end
