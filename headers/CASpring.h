
@protocol NSCopying, NSMutableCopying, NSCoding;
@interface CASpring : NSObject <NSCopying, NSMutableCopying, NSCoding> {

    NSString* _name;
    CALayer* _layerA;
    CALayer* _layerB;
    {CGPoint="x"d"y"d} _attachmentPointA;
    {CGPoint="x"d"y"d} _attachmentPointB;
    CAValueFunction* _function;
    double _stiffness;
    double _damping;
    double _restLength;
    BOOL _enabled;
    id _delegate;
    ^v _priv;
}
@property (atomic, copy, readwrite) NSString* name;
@property (atomic, assign, readwrite, getter=isEnabled) NSNumber* enabled;
@property (atomic, retain, readwrite) CALayer* layerA;
@property (atomic, retain, readwrite) CALayer* layerB;
@property (atomic, assign, readwrite) NSNumber* attachmentPointA;
@property (atomic, assign, readwrite) NSNumber* attachmentPointB;
@property (atomic, retain, readwrite) CAValueFunction* function;
@property (atomic, assign, readwrite) NSNumber* restLength;
@property (atomic, assign, readwrite) NSNumber* stiffness;
@property (atomic, assign, readwrite) NSNumber* damping;
@property (atomic, weak, readwrite) NSNumber* delegate;
 + (id) defaultValueForKey:(id)a;
 + (void) CAMLParserStartElement:(id)a;
 + (id) spring;

 - (void) setValue:(id)aforKeyPath:(id)b;
 - (id) copyWithZone:(^{_NSZone=})a;
 - (id) mutableCopyWithZone:(^{_NSZone=})a;
 - (id) .cxx_construct;
 - (void) dealloc;
 - (void) setValue:(id)aforKey:(id)b;
 - (id) name;
 - (void) setDelegate:(id)a;
 - (void) setLayerA:(id)a;
 - (void) setAttachmentPointA:({CGPoint=dd})a;
 - (void) setLayerB:(id)a;
 - (void) setAttachmentPointB:({CGPoint=dd})a;
 - (id) init;
 - (void) encodeWithCoder:(id)a;
 - (id) initWithCoder:(id)a;
 - (id) delegate;
 - (id) valueForKey:(id)a;
 - (id) function;
 - (id) valueForKeyPath:(id)a;
 - (void) setName:(id)a;
 - (void) setStiffness:(double)a;
 - (double) stiffness;
 - (void) CAMLParser:(id)asetValue:(id)bforKey:(id)c;
 - (void) encodeWithCAMLWriter:(id)a;
 - (id) CAMLTypeForKey:(id)a;
 - (^{Object=^^?{Atomic={?=i}}}) CA_copyRenderValue;
 - (void) setFunction:(id)a;
 - (id) layerA;
 - (id) layerB;
 - ({CGPoint=dd}) attachmentPointA;
 - ({CGPoint=dd}) attachmentPointB;
 - (double) restLength;
 - (void) setRestLength:(double)a;
 - (double) damping;
 - (void) setDamping:(double)a;
 - (BOOL) isEnabled;
 - (void) setEnabled:(BOOL)a;


@end
