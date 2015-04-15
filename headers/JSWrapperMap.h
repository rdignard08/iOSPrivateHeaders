
@interface JSWrapperMap : NSObject {

    JSContext m_context;
    NSMutableDictionary m_classMap;
    {WeakGCMap<id, JSC::JSObject, WTF::PtrHash<id>, WTF::HashTraits<id> >="m_map"{HashMap<id, JSC::Weak<JSC::JSObject>, WTF::PtrHash<id>, WTF::HashTraits<id>, WTF::HashTraits<JSC::Weak<JSC::JSObject> > >="m_impl"{HashTable<id, WTF::KeyValuePair<id, JSC::Weak<JSC::JSObject> >, WTF::KeyValuePairKeyExtractor<WTF::KeyValuePair<id, JSC::Weak<JSC::JSObject> > >, WTF::PtrHash<id>, WTF::HashMap<id, JSC::Weak<JSC::JSObject>, WTF::PtrHash<id>, WTF::HashTraits<id>, WTF::HashTraits<JSC::Weak<JSC::JSObject> > >::KeyValuePairTraits, WTF::HashTraits<id> >="m_table"^{KeyValuePair<id, JSC::Weak<JSC::JSObject> >}"m_tableSize"i"m_tableSizeMask"i"m_keyCount"i"m_deletedCount"i}}"m_gcThreshold"i} m_cachedJSWrappers;
    NSMapTable m_cachedObjCWrappers;
}

 - (id) .cxx_construct;
 - (void) .cxx_destruct;
 - (void) dealloc;
 - (id) initWithContext:(id)a;
 - (id) jsWrapperForObject:(id)a;
 - (id) objcWrapperForJSValueRef:(^{OpaqueJSValue=})a;
 - (id) classInfoForClass:(Class)a;


@end
