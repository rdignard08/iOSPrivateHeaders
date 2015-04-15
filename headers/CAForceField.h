
@protocol NSCopying, NSMutableCopying, NSCoding;
@interface CAForceField : NSObject <NSCopying, NSMutableCopying, NSCoding> {

    NSString _name;
    CALayer _layer;
    CAValueFunction _function;
    BOOL _enabled;
    ^v _priv;
}
@property (atomic, copy, readwrite) NSString* name;
@property (atomic, assign, readwrite, getter=isEnabled) NSNumber* enabled;
@property (atomic, retain, readwrite) CALayer* layer;
@property (atomic, retain, readwrite) CAValueFunction* function;
 + (id) defaultValueForKey:(id)a;
 + (void) CAMLParserStartElement:(id)a;
 + (id) forceField;

 - (void) setValue:(id)aforKeyPath:(id)b;
 - (id) copyWithZone:(^{_NSZone=})a;
 - (id) mutableCopyWithZone:(^{_NSZone=})a;
 - (void) dealloc;
 - (void) setValue:(id)aforKey:(id)b;
 - (id) name;
 - (id) init;
 - (void) encodeWithCoder:(id)a;
 - (id) initWithCoder:(id)a;
 - (id) valueForKey:(id)a;
 - (id) function;
 - (id) valueForKeyPath:(id)a;
 - (void) setName:(id)a;
 - (void) CAMLParser:(id)asetValue:(id)bforKey:(id)c;
 - (void) encodeWithCAMLWriter:(id)a;
 - (id) CAMLTypeForKey:(id)a;
 - (id) layer;
 - (^{Object=^^?{Atomic={?=i}}}) CA_copyRenderValue;
 - (void) setLayer:(id)a;
 - (void) setFunction:(id)a;
 - (BOOL) isEnabled;
 - (void) setEnabled:(BOOL)a;


@end
