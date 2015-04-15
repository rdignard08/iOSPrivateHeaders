
@interface _NSUndoInvocation : _NSUndoObject {

    NSInvocation* _invocation;
}

 - (id) initWithTarget:(id)ainvocation:(id)b;
 - (id) description;
 - (void) dealloc;
 - (void) invoke;


@end
