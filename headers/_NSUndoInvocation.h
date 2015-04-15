
@interface _NSUndoInvocation : _NSUndoObject {

    NSInvocation* _invocation;
}

 - (id) initWithTarget:(id)a invocation:(id)b ;
 - (id) description;
 - (void) dealloc;
 - (void) invoke;


@end
