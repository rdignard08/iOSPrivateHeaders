
@protocol NSCopying, NSMutableCopying, NSCoding;
@interface CAFilter : NSObject <NSCopying, NSMutableCopying, NSCoding> {

    unsigned int _type;
    NSString _name;
    unsigned int _flags;
    ^v _attr;
    ^v _cache;
}
@property (atomic, assign, readonly) NSString* type;
@property (atomic, copy, readwrite) NSString* name;
@property (atomic, assign, readwrite, getter=isEnabled) NSNumber* enabled;
@property (atomic, assign, readwrite) NSNumber* cachesInputImage;
 + (BOOL) automaticallyNotifiesObserversForKey:(id)a;
 + (id) filterWithName:(id)a;
 + (void) CAMLParserStartElement:(id)a;
 + (id) filterWithType:(id)a;
 + (id) filterTypes;

 - (id) copyWithZone:(^{_NSZone=})a;
 - (id) mutableCopyWithZone:(^{_NSZone=})a;
 - (void) dealloc;
 - (void) setValue:(id)aforKey:(id)b;
 - (id) name;
 - (id) initWithName:(id)a;
 - (BOOL) enabled;
 - (void) encodeWithCoder:(id)a;
 - (id) initWithCoder:(id)a;
 - (id) type;
 - (id) valueForKey:(id)a;
 - (void) setName:(id)a;
 - (void) setDefaults;
 - (void) CAMLParser:(id)asetValue:(id)bforKey:(id)c;
 - (void) encodeWithCAMLWriter:(id)a;
 - (id) CAMLTypeForKey:(id)a;
 - (^{Object=^^?{Atomic={?=i}}}) CA_copyRenderValue;
 - (id) initWithType:(id)a;
 - (void) setCachesInputImage:(BOOL)a;
 - (BOOL) cachesInputImage;
 - (BOOL) isEnabled;
 - (void) setEnabled:(BOOL)a;


@end
