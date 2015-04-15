
@protocol NSMutableCopying, CAPropertyInfo, NSCoding, NSCopying, CAMediaTiming, CAAction;
@interface CAAnimation : NSObject <NSMutableCopying, CAPropertyInfo, NSCoding, NSCopying, CAMediaTiming, CAAction> {

    ^v _attr;
    I _flags;
}
@property (atomic, weak, readwrite) CAStateControllerTransition* CAStateControllerTransition;
@property (atomic, assign, readwrite, isEnabled) NSNumber* enabled;
@property (atomic, copy, readwrite) NSString* beginTimeMode;
@property (atomic, assign, readwrite) NSNumber* frameInterval;
@property (atomic, retain, readwrite) CAMediaTimingFunction* timingFunction;
@property (atomic, retain, readwrite) NSNumber* delegate;
@property (atomic, assign, readwrite, isRemovedOnCompletion) NSNumber* removedOnCompletion;
@property (atomic, assign, readwrite) NSNumber* beginTime;
@property (atomic, assign, readwrite) NSNumber* duration;
@property (atomic, assign, readwrite) NSNumber* speed;
@property (atomic, assign, readwrite) NSNumber* timeOffset;
@property (atomic, assign, readwrite) NSNumber* repeatCount;
@property (atomic, assign, readwrite) NSNumber* repeatDuration;
@property (atomic, assign, readwrite) NSNumber* autoreverses;
@property (atomic, copy, readwrite) NSString* fillMode;
 + (BOOL) automaticallyNotifiesObserversForKey:(id)a;
 + (BOOL) resolveInstanceMethod:(SEL)a;
 + (id) properties;
 + (id) animation;
 + (id) defaultValueForKey:(id)a;
 + (BOOL) CA_automaticallyNotifiesObservers:(Class)a;
 + (void) CAMLParserStartElement:(id)a;
 + (BOOL) CA_encodesPropertyConditionally:(I)atype:(i)b;
 + (^?) CA_setterForProperty:(r^{_CAPropertyInfo=I[2:]b16b16*^{__CFString}})a;
 + (^?) CA_getterForProperty:(r^{_CAPropertyInfo=I[2:]b16b16*^{__CFString}})a;

 - (id) valueForUndefinedKey:(id)a;
 - (void) setValue:(id)aforUndefinedKey:(id)b;
 - (void) setValue:(id)aforKeyPath:(id)b;
 - (d) duration;
 - (id) copyWithZone:(^{_NSZone=})a;
 - (id) mutableCopyWithZone:(^{_NSZone=})a;
 - (void) dealloc;
 - (void) setValue:(id)aforKey:(id)b;
 - (void) setDelegate:(id)a;
 - (void) setFrameInterval:(d)a;
 - (id) debugDescription;
 - (void) encodeWithCoder:(id)a;
 - (id) initWithCoder:(id)a;
 - (id) delegate;
 - (id) valueForKey:(id)a;
 - (id) valueForKeyPath:(id)a;
 - (d) frameInterval;
 - (id) timingFunction;
 - (void) CAMLParser:(id)asetValue:(id)bforKey:(id)c;
 - (void) encodeWithCAMLWriter:(id)a;
 - (id) CAMLTypeForKey:(id)a;
 - (void) setRemovedOnCompletion:(BOOL)a;
 - (void) setBeginTime:(d)a;
 - (void) setDuration:(d)a;
 - (d) beginTime;
 - (^{Object=^^?{Atomic={?=i}}}) CA_copyRenderValue;
 - (BOOL) isRemovedOnCompletion;
 - (d) timeOffset;
 - (f) repeatCount;
 - (d) repeatDuration;
 - (void) setRepeatDuration:(d)a;
 - (BOOL) autoreverses;
 - (id) fillMode;
 - (void) setFillMode:(id)a;
 - (void) runActionForKey:(id)aobject:(id)barguments:(id)c;
 - (BOOL) _setCARenderAnimation:(^{Animation=^^?{Atomic={?=i}}f{Ref<CA::Render::Timing>=^{Timing}}{Ref<CA::Render::Vector>=^{Vector}}^vIIII})alayer:(id)b;
 - (I) _propertyFlagsForLayer:(id)a;
 - (BOOL) shouldArchiveValueForKey:(id)a;
 - (BOOL) removedOnCompletion;
 - (void) setTimingFunction:(id)a;
 - (void) setDefaultDuration:(d)a;
 - (void) applyForTime:(d)apresentationObject:(id)bmodelObject:(id)c;
 - (id) beginTimeMode;
 - (void) setBeginTimeMode:(id)a;
 - (void) setTimeOffset:(d)a;
 - (void) setRepeatCount:(f)a;
 - (void) setAutoreverses:(BOOL)a;
 - (BOOL) isEnabled;
 - (void) setEnabled:(BOOL)a;
 - (f) speed;
 - (void) setSpeed:(f)a;


@end
