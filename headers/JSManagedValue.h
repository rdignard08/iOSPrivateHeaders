
@interface JSManagedValue : NSObject {

    m_impl m_globalObject;
    m_ptr m_lock;
    {WeakValueRef="m_tag"i"u"(WeakValueUnion="m_primitive"{JSValue="u"(EncodedValueDescriptor="asInt64"q"ptr"^{JSCell}"asBits"{?="payload"i"tag"i})}"m_object"{Weak<JSC::JSObject>="m_impl"^{WeakImpl}}"m_string"{Weak<JSC::JSString>="m_impl"^{WeakImpl}})} m_weakValue;
    NSMapTable m_owners;
}
@property (atomic, assign, readonly) JSValue* value;
 + (id) managedValueWithValue:(id)a;
 + (id) managedValueWithValue:(id)aandOwner:(id)b;

 - (id) .cxx_construct;
 - (void) .cxx_destruct;
 - (void) dealloc;
 - (id) init;
 - (id) value;
 - (id) initWithValue:(id)a;
 - (void) disconnectValue;
 - (void) didAddOwner:(id)a;
 - (void) didRemoveOwner:(id)a;


@end
