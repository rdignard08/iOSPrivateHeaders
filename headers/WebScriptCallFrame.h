
@interface WebScriptCallFrame : NSObject {

    WebScriptCallFramePrivate* _private;
    id _userInfo;
}

 - (void) dealloc;
 - (id) userInfo;
 - (void) setUserInfo:(id)a ;
 - (id) functionName;
 - (id) _initWithGlobalObject:(id)a functionName:({String={RefPtr<WTF::StringImpl>=^{StringImpl}}})b exceptionValue:({JSValue=(EncodedValueDescriptor=q^{JSCell}{?=ii})})c ;
 - (id) _convertValueToObjcValue:({JSValue=(EncodedValueDescriptor=q^{JSCell}{?=ii})})a ;
 - (id) exception;


@end
