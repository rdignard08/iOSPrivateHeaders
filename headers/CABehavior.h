
@protocol NSCoding, NSCopying;
@interface CABehavior : NSObject <NSCoding, NSCopying> {

    ^v _attr;
    unsigned int _refcount;
    unsigned int _uid;
    ^v _priv;
}
@property (atomic, assign, readwrite, getter=isEnabled) NSNumber* enabled;
@property (atomic, copy, readwrite) NSString* name;
@property (atomic, weak, readwrite) NSNumber* delegate;
@property (atomic, copy, readwrite) NSDictionary* style;
 + (BOOL) automaticallyNotifiesObserversForKey:(id)a;
 + (BOOL) resolveInstanceMethod:(SEL)a;
 + (id) behavior;
 + (id) defaultValueForKey:(id)a;
 + (BOOL) CA_automaticallyNotifiesObservers:(Class)a;
 + (void) CAMLParserStartElement:(id)a;
 + (^?) CA_setterForProperty:(r^{_CAPropertyInfo=I[2:]b16b16*^{__CFString}})a;
 + (^?) CA_getterForProperty:(r^{_CAPropertyInfo=I[2:]b16b16*^{__CFString}})a;

 - (id) valueForUndefinedKey:(id)a;
 - (void) setValue:(id)aforUndefinedKey:(id)b;
 - (void) setValue:(id)aforKeyPath:(id)b;
 - (id) copyWithZone:(^{_NSZone=})a;
 - (id) retain;
 - (Vv) release;
 - (unsigned long long) retainCount;
 - (void) dealloc;
 - (BOOL) retainWeakReference;
 - (BOOL) allowsWeakReference;
 - (void) setValue:(id)aforKey:(id)b;
 - (id) name;
 - (void) setDelegate:(id)a;
 - (id) debugDescription;
 - (id) init;
 - (void) encodeWithCoder:(id)a;
 - (id) initWithCoder:(id)a;
 - (id) delegate;
 - (id) valueForKey:(id)a;
 - (id) valueForKeyPath:(id)a;
 - (void) setName:(id)a;
 - (id) style;
 - (void) CAMLParser:(id)asetValue:(id)bforKey:(id)c;
 - (void) encodeWithCAMLWriter:(id)a;
 - (id) CAMLTypeForKey:(id)a;
 - (BOOL) shouldArchiveValueForKey:(id)a;
 - (void) _setCARenderBehavior:(^{Behavior=^^?{Atomic={?=i}}I{Ref<CA::Render::String>=^{String}}IIb8b8{Ref<const CA::Render::Behavior>=^{Behavior}}})a;
 - (void) setStyle:(id)a;
 - (BOOL) isEnabled;
 - (void) setEnabled:(BOOL)a;


@end
