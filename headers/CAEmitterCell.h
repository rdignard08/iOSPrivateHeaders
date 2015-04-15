
@protocol NSCopying, CAPropertyInfo, NSCoding, CAMediaTiming;
@interface CAEmitterCell : NSObject <NSCopying, CAPropertyInfo, NSCoding, CAMediaTiming> {

    [2^v] _attr;
    ^v _state;
    I _flags;
}
@property (atomic, copy, readwrite) NSString* particleType;
@property (atomic, assign, readwrite) NSNumber* orientationLatitude;
@property (atomic, assign, readwrite) NSNumber* orientationLongitude;
@property (atomic, assign, readwrite) NSNumber* orientationRange;
@property (atomic, assign, readwrite) NSNumber* rotation;
@property (atomic, assign, readwrite) NSNumber* rotationRange;
@property (atomic, assign, readwrite) NSNumber* mass;
@property (atomic, assign, readwrite) NSNumber* massRange;
@property (atomic, assign, readwrite) NSNumber* contentsScale;
@property (atomic, copy, readwrite) NSString* contentsFrameMode;
@property (atomic, assign, readwrite) NSNumber* contentsFrameCount;
@property (atomic, assign, readwrite) NSNumber* contentsFramesPerRow;
@property (atomic, assign, readwrite) NSNumber* contentsFramesPerSecond;
@property (atomic, copy, readwrite) NSArray* emitterBehaviors;
@property (atomic, copy, readwrite) NSString* name;
@property (atomic, assign, readwrite, isEnabled) NSNumber* enabled;
@property (atomic, assign, readwrite) NSNumber* birthRate;
@property (atomic, assign, readwrite) NSNumber* lifetime;
@property (atomic, assign, readwrite) NSNumber* lifetimeRange;
@property (atomic, assign, readwrite) NSNumber* emissionLatitude;
@property (atomic, assign, readwrite) NSNumber* emissionLongitude;
@property (atomic, assign, readwrite) NSNumber* emissionRange;
@property (atomic, assign, readwrite) NSNumber* velocity;
@property (atomic, assign, readwrite) NSNumber* velocityRange;
@property (atomic, assign, readwrite) NSNumber* xAcceleration;
@property (atomic, assign, readwrite) NSNumber* yAcceleration;
@property (atomic, assign, readwrite) NSNumber* zAcceleration;
@property (atomic, assign, readwrite) NSNumber* scale;
@property (atomic, assign, readwrite) NSNumber* scaleRange;
@property (atomic, assign, readwrite) NSNumber* scaleSpeed;
@property (atomic, assign, readwrite) NSNumber* spin;
@property (atomic, assign, readwrite) NSNumber* spinRange;
@property (atomic, assign, readwrite) NSNumber* color;
@property (atomic, assign, readwrite) NSNumber* redRange;
@property (atomic, assign, readwrite) NSNumber* greenRange;
@property (atomic, assign, readwrite) NSNumber* blueRange;
@property (atomic, assign, readwrite) NSNumber* alphaRange;
@property (atomic, assign, readwrite) NSNumber* redSpeed;
@property (atomic, assign, readwrite) NSNumber* greenSpeed;
@property (atomic, assign, readwrite) NSNumber* blueSpeed;
@property (atomic, assign, readwrite) NSNumber* alphaSpeed;
@property (atomic, retain, readwrite) NSNumber* contents;
@property (atomic, assign, readwrite) NSNumber* contentsRect;
@property (atomic, copy, readwrite) NSString* minificationFilter;
@property (atomic, copy, readwrite) NSString* magnificationFilter;
@property (atomic, assign, readwrite) NSNumber* minificationFilterBias;
@property (atomic, copy, readwrite) NSArray* emitterCells;
@property (atomic, copy, readwrite) NSDictionary* style;
@property (atomic, assign, readwrite) NSNumber* beginTime;
@property (atomic, assign, readwrite) NSNumber* duration;
@property (atomic, assign, readwrite) NSNumber* speed;
@property (atomic, assign, readwrite) NSNumber* timeOffset;
@property (atomic, assign, readwrite) NSNumber* repeatCount;
@property (atomic, assign, readwrite) NSNumber* repeatDuration;
@property (atomic, assign, readwrite) NSNumber* autoreverses;
@property (atomic, copy, readwrite) NSString* fillMode;
 + (BOOL) automaticallyNotifiesObserversForKey:(id)a;
 + (id) properties;
 + (id) defaultValueForKey:(id)a;
 + (BOOL) CA_automaticallyNotifiesObservers:(Class)a;
 + (void) CAMLParserStartElement:(id)a;
 + (id) emitterCell;

 - (id) valueForUndefinedKey:(id)a;
 - (void) setValue:(id)aforUndefinedKey:(id)b;
 - (void) setValue:(id)aforKeyPath:(id)b;
 - (d) scale;
 - (d) duration;
 - (id) copyWithZone:(^{_NSZone=})a;
 - (void) dealloc;
 - (void) setValue:(id)aforKey:(id)b;
 - (id) name;
 - (void) didChangeValueForKey:(id)a;
 - (void) setRotation:(d)a;
 - (id) debugDescription;
 - (void) encodeWithCoder:(id)a;
 - (id) initWithCoder:(id)a;
 - (id) valueForKey:(id)a;
 - (id) valueForKeyPath:(id)a;
 - (void) setName:(id)a;
 - (void) setContentsScale:(d)a;
 - (id) style;
 - (void) setMass:(f)a;
 - (void) setColor:(^{CGColor=})a;
 - (void) CAMLParser:(id)asetValue:(id)bforKey:(id)c;
 - (void) encodeWithCAMLWriter:(id)a;
 - (id) CAMLTypeForKey:(id)a;
 - (void) setBeginTime:(d)a;
 - (void) setDuration:(d)a;
 - (d) beginTime;
 - (^{Object=^^?{Atomic={?=i}}}) CA_copyRenderValue;
 - (void) CA_prepareRenderValue;
 - (d) timeOffset;
 - (f) repeatCount;
 - (d) repeatDuration;
 - (void) setRepeatDuration:(d)a;
 - (BOOL) autoreverses;
 - (id) fillMode;
 - (void) setFillMode:(id)a;
 - (BOOL) shouldArchiveValueForKey:(id)a;
 - (id) contents;
 - (id) particleType;
 - (f) birthRate;
 - (f) lifetime;
 - (f) lifetimeRange;
 - (d) emissionLatitude;
 - (d) emissionLongitude;
 - (d) emissionRange;
 - (d) velocityRange;
 - (d) xAcceleration;
 - (d) yAcceleration;
 - (d) zAcceleration;
 - (f) massRange;
 - (d) scaleRange;
 - (d) scaleSpeed;
 - (d) orientationLatitude;
 - (d) orientationLongitude;
 - (d) orientationRange;
 - (d) rotation;
 - (d) rotationRange;
 - (d) spin;
 - (d) spinRange;
 - (^{CGColor=}) color;
 - (f) redRange;
 - (f) greenRange;
 - (f) blueRange;
 - (f) alphaRange;
 - (f) redSpeed;
 - (f) greenSpeed;
 - (f) blueSpeed;
 - (f) alphaSpeed;
 - (f) minificationFilterBias;
 - (d) contentsScale;
 - (I) contentsFrameCount;
 - (I) contentsFramesPerRow;
 - (f) contentsFramesPerSecond;
 - (id) contentsFrameMode;
 - ({CGRect={CGPoint=dd}{CGSize=dd}}) contentsRect;
 - (id) magnificationFilter;
 - (id) minificationFilter;
 - (id) emitterCells;
 - (id) emitterBehaviors;
 - (void) setBirthRate:(f)a;
 - (void) setLifetime:(f)a;
 - (void) setLifetimeRange:(f)a;
 - (void) setEmissionLatitude:(d)a;
 - (void) setEmissionLongitude:(d)a;
 - (void) setEmissionRange:(d)a;
 - (void) setVelocityRange:(d)a;
 - (void) setXAcceleration:(d)a;
 - (void) setYAcceleration:(d)a;
 - (void) setZAcceleration:(d)a;
 - (void) setScale:(d)a;
 - (void) setScaleRange:(d)a;
 - (void) setScaleSpeed:(d)a;
 - (void) setOrientationLatitude:(d)a;
 - (void) setOrientationLongitude:(d)a;
 - (void) setOrientationRange:(d)a;
 - (void) setRotationRange:(d)a;
 - (void) setSpin:(d)a;
 - (void) setSpinRange:(d)a;
 - (void) setRedRange:(f)a;
 - (void) setRedSpeed:(f)a;
 - (void) setGreenRange:(f)a;
 - (void) setGreenSpeed:(f)a;
 - (void) setBlueRange:(f)a;
 - (void) setBlueSpeed:(f)a;
 - (void) setAlphaRange:(f)a;
 - (void) setAlphaSpeed:(f)a;
 - (void) setContents:(id)a;
 - (void) setMinificationFilterBias:(f)a;
 - (void) setEmitterCells:(id)a;
 - (void) setParticleType:(id)a;
 - (void) setMassRange:(f)a;
 - (void) setEmitterBehaviors:(id)a;
 - (void) setContentsFrameMode:(id)a;
 - (void) setContentsFrameCount:(I)a;
 - (void) setContentsFramesPerRow:(I)a;
 - (void) setContentsFramesPerSecond:(f)a;
 - (void) setStyle:(id)a;
 - (void) setTimeOffset:(d)a;
 - (void) setRepeatCount:(f)a;
 - (void) setAutoreverses:(BOOL)a;
 - (void) setContentsRect:({CGRect={CGPoint=dd}{CGSize=dd}})a;
 - (void) setMinificationFilter:(id)a;
 - (void) setMagnificationFilter:(id)a;
 - (d) velocity;
 - (void) setVelocity:(d)a;
 - (f) mass;
 - (BOOL) isEnabled;
 - (void) setEnabled:(BOOL)a;
 - (f) speed;
 - (void) setSpeed:(f)a;


@end