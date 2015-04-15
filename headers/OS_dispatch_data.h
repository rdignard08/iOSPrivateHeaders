
@protocol OS_dispatch_data;
@interface OS_dispatch_data : _NSDispatchData <OS_dispatch_data> {

}
 + (id) allocWithZone:(^{_NSZone=})a;

 - (void) dealloc;
 - (void) finalize;
 - (void) _setContext:(^v)a;
 - (^v) _getContext;
 - (void) _setFinalizer:(^?)a;
 - (void) _setTargetQueue:(id)a;
 - (id) debugDescription;
 - (id) init;
 - (id) initWithBytes:(^v)alength:(unsigned long long)bcopy:(BOOL)cfreeWhenDone:(BOOL)dbytesAreVM:(BOOL)e;
 - (BOOL) _bytesAreVM;


@end
