
@interface WebScriptCallFrame : NSObject {

    @"WebScriptCallFramePrivate" _private;
    id _userInfo;
}

 - (void) dealloc;
 - (id) userInfo;
 - (void) setUserInfo:(id)a;
 - (id) functionName;
 - (id) _initWithGlobalObject:(id)afunctionName:({String={RefPtr<WTF::StringImpl>=^{StringImpl}}})bexceptionValue:({JSValue=(EncodedValueDescriptor=q^{JSCell}{?=ii})})c;
 - (id) _convertValueToObjcValue:({JSValue=(EncodedValueDescriptor=q^{JSCell}{?=ii})})a;
 - (id) exception;


@end
