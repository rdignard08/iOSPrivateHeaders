
@protocol NSCoding;
@interface CAEmitterBehavior : NSObject <NSCoding> {

    unsigned int _type;
    NSString* _name;
    ^v _attr;
    ^v _cache;
    unsigned int _flags;
}
@property (atomic, assign, readonly) NSString* type;
@property (atomic, copy, readwrite) NSString* name;
@property (atomic, assign, readwrite, getter=isEnabled) NSNumber* enabled;
 + (BOOL) automaticallyNotifiesObserversForKey:(id)a;
 + (void) CAMLParserStartElement:(id)a;
 + (id) behaviorWithType:(id)a;
 + (id) behaviorTypes;

 - (void) setValue:(id)a forKeyPath:(id)b ;
 - (id) copyWithZone:(^{_NSZone=})a ;
 - (id) mutableCopyWithZone:(^{_NSZone=})a ;
 - (void) dealloc;
 - (void) setValue:(id)a forKey:(id)b ;
 - (id) name;
 - (void) didChangeValueForKey:(id)a ;
 - (void) encodeWithCoder:(id)a ;
 - (id) initWithCoder:(id)a ;
 - (id) type;
 - (id) valueForKey:(id)a ;
 - (id) valueForKeyPath:(id)a ;
 - (void) setName:(id)a ;
 - (void) CAMLParser:(id)a setValue:(id)b forKey:(id)c ;
 - (void) encodeWithCAMLWriter:(id)a ;
 - (id) CAMLTypeForKey:(id)a ;
 - (^{Object=^^?{Atomic={?=i}}}) CA_copyRenderValue;
 - (id) initWithType:(id)a ;
 - (BOOL) isEnabled;
 - (void) setEnabled:(BOOL)a ;


@end
