
@interface _UIActionWhenIdle : NSObject {

    NSInvocation* _invocation;
}
@property (nonatomic, retain, readwrite) NSInvocation* invocation;
 + (id) actionWhenIdleWithTarget:(id)aselector:(SEL)bobject:(id)c;

 - (id) initWithInvocation:(id)a ;
 - (id) initWithTarget:(id)a selector:(SEL)b object:(id)c ;
 - (void) dealloc;
 - (void) invalidate;
 - (BOOL) isValid;
 - (void) invoke;
 - (id) invocation;
 - (void) addObserverToRunLoop;
 - (void) setInvocation:(id)a ;


@end
