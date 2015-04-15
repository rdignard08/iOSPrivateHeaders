
@interface InvocationTrampoline : NSObject {

    id _target;
}
@property (atomic, retain, readwrite) NSNumber* target;

 - (id) target;
 - (void) dealloc;
 - (void) forwardInvocation:(id)a ;
 - (BOOL) respondsToSelector:(SEL)a ;
 - (void) setTarget:(id)a ;
 - (id) methodSignatureForSelector:(SEL)a ;
 - (void) performInvocation:(id)a ;


@end
