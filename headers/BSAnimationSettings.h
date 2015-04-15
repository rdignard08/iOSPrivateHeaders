
@protocol NSCopying, NSMutableCopying, NSSecureCoding, BSXPCCoding;
@interface BSAnimationSettings : NSObject <NSCopying, NSMutableCopying, NSSecureCoding, BSXPCCoding> {

    double _duration;
    double _delay;
    double _frameInterval;
    CAMediaTimingFunction* _timingFunction;
}
@property (nonatomic, assign, readonly) NSNumber* duration;
@property (nonatomic, assign, readonly) NSNumber* delay;
@property (nonatomic, assign, readonly) NSNumber* frameInterval;
@property (nonatomic, retain, readonly) CAMediaTimingFunction* timingFunction;
 + (BOOL) supportsSecureCoding;
 + (id) settingsWithDuration:(double)a;
 + (id) settingsWithDuration:(double)atimingFunction:(id)b;
 + (id) settingsWithDuration:(double)adelay:(double)b;
 + (id) settingsWithDuration:(double)adelay:(double)btimingFunction:(id)c;

 - (double) duration;
 - (id) copyWithZone:(^{_NSZone=})a ;
 - (id) mutableCopyWithZone:(^{_NSZone=})a ;
 - (id) description;
 - (void) dealloc;
 - (unsigned long long) hash;
 - (BOOL) isEqual:(id)a ;
 - (id) init;
 - (void) encodeWithCoder:(id)a ;
 - (id) initWithCoder:(id)a ;
 - (void) encodeWithXPCDictionary:(id)a ;
 - (id) initWithXPCDictionary:(id)a ;
 - (id) _initWithDuration:(double)a delay:(double)b frameInterval:(double)c timingFunction:(id)d ;
 - (double) delay;
 - (double) frameInterval;
 - (id) timingFunction;
 - (BOOL) isSpringAnimation;
 - (void) _setDuration:(double)a ;
 - (void) _setDelay:(double)a ;
 - (void) _setTimingFunction:(id)a ;
 - (void) _setFrameInterval:(double)a ;


@end
