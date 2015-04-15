
@interface _NSUndoLightInvocation : _NSUndoObject {

    SEL _selector;
    id _arg;
}

 - (id) initWithTarget:(id)aselector:(SEL)bobject:(id)c;
 - (id) _argument;
 - (id) description;
 - (void) dealloc;
 - (void) invoke;


@end
