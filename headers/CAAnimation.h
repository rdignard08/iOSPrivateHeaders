
@protocol NSMutableCopying, CAPropertyInfo, NSCoding, NSCopying, CAMediaTiming, CAAction;
@interface CAAnimation : NSObject <NSMutableCopying, CAPropertyInfo, NSCoding, NSCopying, CAMediaTiming, CAAction> {

    ^v _attr;
    unsigned int _flags;
}
@property (atomic, weak, readwrite) CAStateControllerTransition* CAStateControllerTransition;
@property (atomic, assign, readwrite, getter=isEnabled) NSNumber* enabled;
@property (atomic, copy, readwrite) NSString* beginTimeMode;
@property (atomic, assign, readwrite) NSNumber* frameInterval;
@property (atomic, retain, readwrite) CAMediaTimingFunction* timingFunction;
@property (atomic, retain, readwrite) NSNumber* delegate;
@property (atomic, assign, readwrite, getter=isRemovedOnCompletion) NSNumber* removedOnCompletion;
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
 + (BOOL) CA_encodesPropertyConditionally:(unsigned int)atype:(int)b;
 + (^?) CA_setterForProperty:(r^{_CAPropertyInfo=I[2:]b16b16*^{__CFString}})a;
 + (^?) CA_getterForProperty:(r^{_CAPropertyInfo=I[2:]b16b16*^{__CFString}})a;

 - (id) valueForUndefinedKey:(id)a ;
 - (void) setValue:(id)a forUndefinedKey:(id)b ;
 - (void) setValue:(id)a forKeyPath:(id)b ;
 - (double) duration;
 - (id) copyWithZone:(^{_NSZone=})a ;
 - (id) mutableCopyWithZone:(^{_NSZone=})a ;
 - (void) dealloc;
 - (void) setValue:(id)a forKey:(id)b ;
 - (void) setDelegate:(id)a ;
 - (void) setFrameInterval:(double)a ;
 - (id) debugDescription;
 - (void) encodeWithCoder:(id)a ;
 - (id) initWithCoder:(id)a ;
 - (id) delegate;
 - (id) valueForKey:(id)a ;
 - (id) valueForKeyPath:(id)a ;
 - (double) frameInterval;
 - (id) timingFunction;
 - (void) CAMLParser:(id)a setValue:(id)b forKey:(id)c ;
 - (void) encodeWithCAMLWriter:(id)a ;
 - (id) CAMLTypeForKey:(id)a ;
 - (void) setRemovedOnCompletion:(BOOL)a ;
 - (void) setBeginTime:(double)a ;
 - (void) setDuration:(double)a ;
 - (double) beginTime;
 - (^{Object=^^?{Atomic={?=i}}}) CA_copyRenderValue;
 - (BOOL) isRemovedOnCompletion;
 - (double) timeOffset;
 - (float) repeatCount;
 - (double) repeatDuration;
 - (void) setRepeatDuration:(double)a ;
 - (BOOL) autoreverses;
 - (id) fillMode;
 - (void) setFillMode:(id)a ;
 - (void) runActionForKey:(id)a object:(id)b arguments:(id)c ;
 - (BOOL) _setCARenderAnimation:(^{Animation=^^?{Atomic={?=i}}f{Ref<CA::Render::Timing>=^{Timing}}{Ref<CA::Render::Vector>=^{Vector}}^vIIII})a layer:(id)b ;
 - (unsigned int) _propertyFlagsForLayer:(id)a ;
 - (BOOL) shouldArchiveValueForKey:(id)a ;
 - (BOOL) removedOnCompletion;
 - (void) setTimingFunction:(id)a ;
 - (void) setDefaultDuration:(double)a ;
 - (void) applyForTime:(double)a presentationObject:(id)b modelObject:(id)c ;
 - (id) beginTimeMode;
 - (void) setBeginTimeMode:(id)a ;
 - (void) setTimeOffset:(double)a ;
 - (void) setRepeatCount:(float)a ;
 - (void) setAutoreverses:(BOOL)a ;
 - (BOOL) isEnabled;
 - (void) setEnabled:(BOOL)a ;
 - (float) speed;
 - (void) setSpeed:(float)a ;


@end
