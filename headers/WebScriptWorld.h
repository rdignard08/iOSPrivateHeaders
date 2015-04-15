
@interface WebScriptWorld : NSObject {

    WebScriptWorldPrivate _private;
}
 + (id) findOrCreateWorld:(^{DOMWrapperWorld=I{HashMap<void *, JSC::Weak<JSC::JSObject>, WTF::PtrHash<void *>, WTF::HashTraits<void *>, WTF::HashTraits<JSC::Weak<JSC::JSObject> > >={HashTable<void *, WTF::KeyValuePair<void *, JSC::Weak<JSC::JSObject> >, WTF::KeyValuePairKeyExtractor<WTF::KeyValuePair<void *, JSC::Weak<JSC::JSObject> > >, WTF::PtrHash<void *>, WTF::HashMap<void *, JSC::Weak<JSC::JSObject>, WTF::PtrHash<void *>, WTF::HashTraits<void *>, WTF::HashTraits<JSC::Weak<JSC::JSObject> > >::KeyValuePairTraits, WTF::HashTraits<void *> >=^{KeyValuePair<void *, JSC::Weak<JSC::JSObject> >}iiii}}{HashMap<WebCore::CSSValue *, void *, WTF::PtrHash<WebCore::CSSValue *>, WTF::HashTraits<WebCore::CSSValue *>, WTF::HashTraits<void *> >={HashTable<WebCore::CSSValue *, WTF::KeyValuePair<WebCore::CSSValue *, void *>, WTF::KeyValuePairKeyExtractor<WTF::KeyValuePair<WebCore::CSSValue *, void *> >, WTF::PtrHash<WebCore::CSSValue *>, WTF::HashMap<WebCore::CSSValue *, void *, WTF::PtrHash<WebCore::CSSValue *>, WTF::HashTraits<WebCore::CSSValue *>, WTF::HashTraits<void *> >::KeyValuePairTraits, WTF::HashTraits<WebCore::CSSValue *> >=^{KeyValuePair<WebCore::CSSValue *, void *>}iiii}}^{VM}{HashSet<WebCore::ScriptController *, WTF::PtrHash<WebCore::ScriptController *>, WTF::HashTraits<WebCore::ScriptController *> >={HashTable<WebCore::ScriptController *, WebCore::ScriptController *, WTF::IdentityExtractor, WTF::PtrHash<WebCore::ScriptController *>, WTF::HashTraits<WebCore::ScriptController *>, WTF::HashTraits<WebCore::ScriptController *> >=^^{ScriptController}iiii}}B})a;
 + (id) scriptWorldForGlobalContext:(^{OpaqueJSContext=})a;
 + (id) standardWorld;
 + (id) scriptWorldForJavaScriptContext:(id)a;
 + (id) world;

 - (void) dealloc;
 - (id) init;
 - (id) initWithWorld:({PassRefPtr<WebCore::DOMWrapperWorld>=^{DOMWrapperWorld}})a;
 - (void) unregisterWorld;


@end
