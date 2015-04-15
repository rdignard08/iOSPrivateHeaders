
@interface _NSUndoLightInvocation : _NSUndoObject {

    SEL _selector;
    id _arg;
}

 - (id) initWithTarget:(id)a selector:(SEL)b object:(id)c ;
 - (id) _argument;
 - (id) description;
 - (void) dealloc;
 - (void) invoke;


@end
