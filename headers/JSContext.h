
@interface JSContext : NSObject {

    JSVirtualMachine* m_virtualMachine;
    ^{OpaqueJSContext=} m_context;
    JSWrapperMap* m_wrapperMap;
    m_slot* m_exception;
    @? exceptionHandler;
}
@property (atomic, retain, readonly) JSWrapperMap* wrapperMap;
@property (atomic, assign, readonly) JSValue* globalObject;
@property (atomic, retain, readwrite) JSValue* exception;
@property (atomic, copy, readwrite) NSNumber* exceptionHandler;
@property (atomic, assign, readonly) JSVirtualMachine* virtualMachine;
@property (atomic, copy, readwrite) NSString* name;
 + (id) currentContext;
 + (id) currentThis;
 + (id) currentCallee;
 + (id) currentArguments;
 + (id) contextWithJSGlobalContextRef:(^{OpaqueJSContext=})a;

 - (id) .cxx_construct;
 - (void) .cxx_destruct;
 - (void) dealloc;
 - (id) name;
 - (id) init;
 - (id) objectForKeyedSubscript:(id)a ;
 - (void) setObject:(id)a forKeyedSubscript:(id)b ;
 - (void) setName:(id)a ;
 - (id) initWithVirtualMachine:(id)a ;
 - (void) setException:(id)a ;
 - (void) setExceptionHandler:(@?)a ;
 - (@?) exceptionHandler;
 - (id) evaluateScript:(id)a withSourceURL:(id)b ;
 - (id) valueFromNotifyException:(^{OpaqueJSValue=})a ;
 - (^{OpaqueJSContext=}) JSGlobalContextRef;
 - (id) evaluateScript:(id)a ;
 - (id) exception;
 - (id) wrapperMap;
 - (id) globalObject;
 - (id) virtualMachine;
 - (BOOL) _remoteInspectionEnabled;
 - (void) _setRemoteInspectionEnabled:(BOOL)a ;
 - (BOOL) _includesNativeCallStackWhenReportingExceptions;
 - (void) _setIncludesNativeCallStackWhenReportingExceptions:(BOOL)a ;
 - (^{__CFRunLoop=}) _debuggerRunLoop;
 - (void) _setDebuggerRunLoop:(^{__CFRunLoop=})a ;
 - (void) notifyException:(^{OpaqueJSValue=})a ;
 - (id) initWithGlobalContextRef:(^{OpaqueJSContext=})a ;
 - (BOOL) boolFromNotifyException:(^{OpaqueJSValue=})a ;
 - (void) beginCallbackWithData:(^{CallbackData=^{CallbackData}@@^{OpaqueJSValue}^{OpaqueJSValue}Q^^{OpaqueJSValue}@})a calleeValue:(^{OpaqueJSValue=})b thisValue:(^{OpaqueJSValue=})c argumentCount:(unsigned long long)d arguments:(r^^{OpaqueJSValue})e ;
 - (void) endCallbackWithData:(^{CallbackData=^{CallbackData}@@^{OpaqueJSValue}^{OpaqueJSValue}Q^^{OpaqueJSValue}@})a ;
 - (id) wrapperForObjCObject:(id)a ;
 - (id) wrapperForJSObject:(^{OpaqueJSValue=})a ;


@end
