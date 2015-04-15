
@interface NSBlockInvocation : NSInvocation {

}

 - (SEL) selector;
 - (void) invoke;
 - (void) invokeSuper;
 - (void) invokeUsingIMP:(^?)a;
 - (void) setSelector:(SEL)a;


@end
