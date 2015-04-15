
@interface NSMethodSignature : NSObject {

    ^v _private;
    [6^v] _reserved;
}
@property (atomic, assign, readonly) NSNumber* numberOfArguments;
@property (atomic, assign, readonly) NSNumber* frameLength;
@property (atomic, assign, readonly) NSNumber* methodReturnType;
@property (atomic, assign, readonly) NSNumber* methodReturnLength;
 + (id) signatureWithObjCTypes:(r*)a;

 - (BOOL) _cheapTypeString:(*)amaxLength:(q)b;
 - (Q) methodReturnLength;
 - (BOOL) isOneway;
 - (id) _typeString;
 - (id) _signatureForBlockAtArgumentIndex:(q)a;
 - (Class) _classForObjectAtArgumentIndex:(q)a;
 - (id) _protocolsForObjectAtArgumentIndex:(q)a;
 - (void) dealloc;
 - (void) finalize;
 - (Q) hash;
 - (BOOL) isEqual:(id)a;
 - (^{?=^{NSMethodFrameArgInfo}^{NSMethodFrameArgInfo}II}) _frameDescriptor;
 - (^{NSMethodFrameArgInfo=^{NSMethodFrameArgInfo}^{NSMethodFrameArgInfo}IIIICcb1b1b1b1b1b1b1b1b1b1b1b1b1b1b1b1C[0c]}) _argInfo:(q)a;
 - (Q) numberOfArguments;
 - (Q) frameLength;
 - (r*) methodReturnType;
 - (BOOL) _isHiddenStructRet;
 - (id) debugDescription;
 - (id) init;
 - (r*) getArgumentTypeAtIndex:(Q)a;


@end
