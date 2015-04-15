
@interface JSObjCClassInfo : NSObject {

    JSContext m_context;
    Class m_class;
    BOOL m_block;
    ^{OpaqueJSClass={atomic<int>=Ai}^{OpaqueJSClass}^{OpaqueJSClass}^?^?^?^?^?^?^?^?^?^?^?{String={RefPtr<WTF::StringImpl>=^{StringImpl}}}{OwnPtr<WTF::HashMap<WTF::RefPtr<WTF::StringImpl>, std::__1::unique_ptr<StaticValueEntry, std::__1::default_delete<StaticValueEntry> >, WTF::StringHash, WTF::HashTraits<WTF::RefPtr<WTF::StringImpl> >, WTF::HashTraits<std::__1::unique_ptr<StaticValueEntry, std::__1::default_delete<StaticValueEntry> > > > >=^{HashMap<WTF::RefPtr<WTF::StringImpl>, std::__1::unique_ptr<StaticValueEntry, std::__1::default_delete<StaticValueEntry> >, WTF::StringHash, WTF::HashTraits<WTF::RefPtr<WTF::StringImpl> >, WTF::HashTraits<std::__1::unique_ptr<StaticValueEntry, std::__1::default_delete<StaticValueEntry> > > >}}{OwnPtr<WTF::HashMap<WTF::RefPtr<WTF::StringImpl>, std::__1::unique_ptr<StaticFunctionEntry, std::__1::default_delete<StaticFunctionEntry> >, WTF::StringHash, WTF::HashTraits<WTF::RefPtr<WTF::StringImpl> >, WTF::HashTraits<std::__1::unique_ptr<StaticFunctionEntry, std::__1::default_delete<StaticFunctionEntry> > > > >=^{HashMap<WTF::RefPtr<WTF::StringImpl>, std::__1::unique_ptr<StaticFunctionEntry, std::__1::default_delete<StaticFunctionEntry> >, WTF::StringHash, WTF::HashTraits<WTF::RefPtr<WTF::StringImpl> >, WTF::HashTraits<std::__1::unique_ptr<StaticFunctionEntry, std::__1::default_delete<StaticFunctionEntry> > > >}}} m_classRef;
    m_impl m_prototype;
    m_impl m_constructor;
}

 - (id) .cxx_construct;
 - (void) .cxx_destruct;
 - (void) dealloc;
 - (^{JSObject=ICCCC{CopyWriteBarrier<JSC::Butterfly>=^{Butterfly}}}) prototype;
 - ({pair<JSC::JSObject *, JSC::JSObject *>=^{JSObject}^{JSObject}}) allocateConstructorAndPrototype;
 - (id) initWithContext:(id)aforClass:(Class)b;
 - (id) wrapperForObject:(id)a;
 - (id) constructor;


@end
