
@interface NSInvocation : NSObject {

    ^v _frame;
    ^v _retdata;
    id _signature;
    id _container;
    C _retainedArgs;
    [15C] _reserved;
}
@property (atomic, retain, readonly) NSMethodSignature* methodSignature;
@property (atomic, assign, readonly) NSNumber* argumentsRetained;
@property (atomic, assign, readwrite) NSNumber* target;
@property (atomic, assign, readwrite) NSNumber* selector;
 + (id) _invocationWithMethodSignature:(id)aframe:(^v)b;
 + (id) invocationWithMethodSignature:(id)a;

 - (void) _webkit_invokeAndHandleException:(id)a;
 - (BOOL) _hasBlockArgument;
 - (id) userInfo;
 - (void) setUserInfo:(id)a;
 - (id) debugDescription;
 - (id) target;
 - (void) _addAttachedObject:(id)a;
 - (id) copyWithZone:(^{_NSZone=})a;
 - (SEL) selector;
 - (void) dealloc;
 - (void) setTarget:(id)a;
 - (void) retainArguments;
 - (void) getArgument:(^v)aatIndex:(q)b;
 - (void) setArgument:(^v)aatIndex:(q)b;
 - (void) invoke;
 - (BOOL) argumentsRetained;
 - (void) invokeSuper;
 - (void) invokeUsingIMP:(^?)a;
 - (void) setReturnValue:(^v)a;
 - (id) init;
 - (id) methodSignature;
 - (void) setSelector:(SEL)a;
 - (void) invokeWithTarget:(id)a;
 - (void) getReturnValue:(^v)a;


@end
