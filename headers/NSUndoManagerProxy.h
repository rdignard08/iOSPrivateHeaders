
@interface NSUndoManagerProxy : NSProxy {

    NSUndoManager* _manager;
    Class _targetClass;
}

 - (id) initWithManager:(id)a targetClass:(Class)b ;
 - (void) superRelease;
 - (id) retain;
 - (Vv) release;
 - (void) forwardInvocation:(id)a ;
 - (BOOL) _tryRetain;
 - (BOOL) isKindOfClass:(Class)a ;
 - (id) methodSignatureForSelector:(SEL)a ;


@end
