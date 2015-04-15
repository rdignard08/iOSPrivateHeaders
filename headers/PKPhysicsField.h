
@interface PKPhysicsField : NSObject {

    {shared_ptr<PKCField>="__ptr_"^{PKCField}"__cntrl_"^{__shared_weak_count}} _field;
    @"PKRegion" _region;
     _position;
    f _rotation;
     _scale;
    BOOL _override;
}
@property (nonatomic, assign, readwrite) NSNumber* strength;
@property (nonatomic, assign, readwrite) NSNumber* falloff;
@property (nonatomic, assign, readwrite, isEnabled) NSNumber* enabled;
@property (nonatomic, assign, readwrite, isOverride) NSNumber* override;
@property (nonatomic, retain, readwrite) NSNumber* region;
@property (nonatomic, assign, readwrite) NSNumber* direction;
@property (nonatomic, assign, readwrite) NSNumber* categoryBitMask;
@property (nonatomic, assign, readwrite) NSNumber* position;
@property (nonatomic, assign, readwrite) NSNumber* rotation;
@property (nonatomic, assign, readwrite) NSNumber* scale;
@property (nonatomic, assign, readwrite) NSNumber* minimumRadius;
@property (nonatomic, weak, readwrite) NSNumber* representedObject;

 - (1) scale;
 - (1) position;
 - (BOOL) isActive;
 - (void) setActive:(BOOL)a;
 - (id) .cxx_construct;
 - (void) .cxx_destruct;
 - (void) dealloc;
 - (void) setRotation:(f)a;
 - (void) setRegion:(id)a;
 - (id) region;
 - (f) strength;
 - (void) setStrength:(f)a;
 - (void) setRepresentedObject:(id)a;
 - (id) init;
 - (void) setDirection;
 - (1) direction;
 - (f) rotation;
 - (void) setScale;
 - (void) setPosition;
 - (I) categoryBitMask;
 - (void) setCategoryBitMask:(I)a;
 - (id) representedObject;
 - ({shared_ptr<PKCField>=^{PKCField}^{__shared_weak_count}}) _field;
 - (void) setMinimumRadius:(f)a;
 - (BOOL) isEnabled;
 - (void) setEnabled:(BOOL)a;
 - (void) set_field:({shared_ptr<PKCField>=^{PKCField}^{__shared_weak_count}})a;
 - (f) falloff;
 - (void) setFalloff:(f)a;
 - (BOOL) override;
 - (void) setIsOverride:(BOOL)a;
 - (f) minimumRadius;
 - (BOOL) isOverride;
 - (void) setOverride:(BOOL)a;


@end
