
@protocol OS_dispatch_data;
@interface OS_dispatch_data : _NSDispatchData <OS_dispatch_data> {

}
 + (id) allocWithZone:(^{_NSZone=})a;

 - (void) dealloc;
 - (void) finalize;
 - (void) _setContext:(^v)a ;
 - (^v) _getContext;
 - (void) _setFinalizer:(^?)a ;
 - (void) _setTargetQueue:(id)a ;
 - (id) debugDescription;
 - (id) init;
 - (id) initWithBytes:(^v)a length:(unsigned long long)b copy:(BOOL)c freeWhenDone:(BOOL)d bytesAreVM:(BOOL)e ;
 - (BOOL) _bytesAreVM;


@end
