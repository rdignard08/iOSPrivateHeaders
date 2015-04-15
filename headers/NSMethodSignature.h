
@interface NSMethodSignature : NSObject {

    ^v _private;
    [6^v] _reserved;
}
@property (atomic, assign, readonly) NSNumber* numberOfArguments;
@property (atomic, assign, readonly) NSNumber* frameLength;
@property (atomic, assign, readonly) NSNumber* methodReturnType;
@property (atomic, assign, readonly) NSNumber* methodReturnLength;
 + (id) signatureWithObjCTypes:(r*)a;

 - (BOOL) _cheapTypeString:(char*)a maxLength:(long long)b ;
 - (unsigned long long) methodReturnLength;
 - (BOOL) isOneway;
 - (id) _typeString;
 - (id) _signatureForBlockAtArgumentIndex:(long long)a ;
 - (Class) _classForObjectAtArgumentIndex:(long long)a ;
 - (id) _protocolsForObjectAtArgumentIndex:(long long)a ;
 - (void) dealloc;
 - (void) finalize;
 - (unsigned long long) hash;
 - (BOOL) isEqual:(id)a ;
 - (^{?=^{NSMethodFrameArgInfo}^{NSMethodFrameArgInfo}II}) _frameDescriptor;
 - (^{NSMethodFrameArgInfo=^{NSMethodFrameArgInfo}^{NSMethodFrameArgInfo}IIIICcb1b1b1b1b1b1b1b1b1b1b1b1b1b1b1b1C[0c]}) _argInfo:(long long)a ;
 - (unsigned long long) numberOfArguments;
 - (unsigned long long) frameLength;
 - (r*) methodReturnType;
 - (BOOL) _isHiddenStructRet;
 - (id) debugDescription;
 - (id) init;
 - (r*) getArgumentTypeAtIndex:(unsigned long long)a ;


@end
