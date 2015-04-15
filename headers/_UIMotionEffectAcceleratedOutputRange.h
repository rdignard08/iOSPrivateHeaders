
@protocol NSCoding, NSCopying;
@interface _UIMotionEffectAcceleratedOutputRange : NSObject <NSCoding, NSCopying> {

    {UIOffset="horizontal"d"vertical"d} _referenceOffset;
    {CGPoint="x"d"y"d} _referenceAcceleration;
    {CGPoint="x"d"y"d} _acceleration;
}
@property (nonatomic, assign, readonly) NSNumber* acceleration;

 - (void) reset;
 - (id) copyWithZone:(^{_NSZone=})a;
 - (id) description;
 - (unsigned long long) hash;
 - (BOOL) isEqual:(id)a;
 - (void) setAcceleration:({CGPoint=dd})afixingOutputForViewerOffset:({UIOffset=dd})b;
 - ({UIOffset=dd}) acceleratedOutputForViewerOffset:({UIOffset=dd})aaccelerationBoostFactor:({CGPoint=dd})b;
 - (id) init;
 - (void) encodeWithCoder:(id)a;
 - (id) initWithCoder:(id)a;
 - ({CGPoint=dd}) acceleration;


@end
