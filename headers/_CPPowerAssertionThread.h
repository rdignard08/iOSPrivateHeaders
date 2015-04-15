
@interface _CPPowerAssertionThread : NSThread {

    NSTimer _timer;
    NSDate _earliest;
}

 - (void) main;
 - (void) didTimeOut:(id)a;
 - (void) addAssertion:(id)a;


@end
