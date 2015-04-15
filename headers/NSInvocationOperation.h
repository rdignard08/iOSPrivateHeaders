
@interface NSInvocationOperation : NSOperation {

    id _inv;
    id _exception;
    ^v _reserved2;
}

 - (void) main;
 - (id) initWithInvocation:(id)a ;
 - (id) initWithTarget:(id)a selector:(SEL)b object:(id)c ;
 - (void) dealloc;
 - (id) invocation;
 - (id) init;
 - (id) result;


@end
