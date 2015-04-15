
@protocol NSCopying, NSMutableCopying, NSSecureCoding, BSXPCCoding;
@interface BSAnimationSettings : NSObject <NSCopying, NSMutableCopying, NSSecureCoding, BSXPCCoding> {

    d _duration;
    d _delay;
    d _frameInterval;
    @"CAMediaTimingFunction" _timingFunction;
}
@property (nonatomic, assign, readonly) NSNumber* duration;
@property (nonatomic, assign, readonly) NSNumber* delay;
@property (nonatomic, assign, readonly) NSNumber* frameInterval;
@property (nonatomic, retain, readonly) CAMediaTimingFunction* timingFunction;
 + (BOOL) supportsSecureCoding;
 + (id) settingsWithDuration:(d)a;
 + (id) settingsWithDuration:(d)atimingFunction:(id)b;
 + (id) settingsWithDuration:(d)adelay:(d)b;
 + (id) settingsWithDuration:(d)adelay:(d)btimingFunction:(id)c;

 - (d) duration;
 - (id) copyWithZone:(^{_NSZone=})a;
 - (id) mutableCopyWithZone:(^{_NSZone=})a;
 - (id) description;
 - (void) dealloc;
 - (Q) hash;
 - (BOOL) isEqual:(id)a;
 - (id) init;
 - (void) encodeWithCoder:(id)a;
 - (id) initWithCoder:(id)a;
 - (void) encodeWithXPCDictionary:(id)a;
 - (id) initWithXPCDictionary:(id)a;
 - (id) _initWithDuration:(d)adelay:(d)bframeInterval:(d)ctimingFunction:(id)d;
 - (d) delay;
 - (d) frameInterval;
 - (id) timingFunction;
 - (BOOL) isSpringAnimation;
 - (void) _setDuration:(d)a;
 - (void) _setDelay:(d)a;
 - (void) _setTimingFunction:(id)a;
 - (void) _setFrameInterval:(d)a;


@end
