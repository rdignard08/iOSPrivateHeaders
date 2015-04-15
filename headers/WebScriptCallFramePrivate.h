
@interface WebScriptCallFramePrivate : NSObject {

    WebScriptObject* globalObject;
    {String="m_impl"{RefPtr<WTF::StringImpl>="m_ptr"^{StringImpl}}} functionName;
    {JSValue="u"(EncodedValueDescriptor="asInt64"q"ptr"^{JSCell}"asBits"{?="payload"i"tag"i})} exceptionValue;
}

 - (id) .cxx_construct;
 - (void) .cxx_destruct;
 - (void) dealloc;


@end
