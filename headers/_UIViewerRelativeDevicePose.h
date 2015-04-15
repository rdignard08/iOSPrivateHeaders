
@protocol NSCopying, NSCoding;
@interface _UIViewerRelativeDevicePose : NSObject <NSCopying, NSCoding> {

    @"_UIMotionEffectAcceleratedOutputRange" _acceleratedOutputRange;
    d _planarRotationAngle;
    {UIOffset="horizontal"d"vertical"d} _viewerOffset;
}
@property (nonatomic, assign, readwrite) NSNumber* viewerOffset;
@property (nonatomic, assign, readwrite) NSNumber* planarRotationAngle;

 - (id) copyWithZone:(^{_NSZone=})a;
 - (id) description;
 - (void) dealloc;
 - (Q) hash;
 - (BOOL) isEqual:(id)a;
 - ({UIOffset=dd}) viewerOffset;
 - (void) _reset;
 - (void) setViewerOffset:({UIOffset=dd})a;
 - (id) _acceleratedOutputRange;
 - (void) _setAcceleration:({CGPoint=dd})afixingOutputForViewerOffset:({UIOffset=dd})b;
 - ({UIOffset=dd}) _acceleratedOutputForViewerOffset:({UIOffset=dd})aaccelerationBoostFactor:({CGPoint=dd})b;
 - (d) planarRotationAngle;
 - (void) setPlanarRotationAngle:(d)a;
 - (void) encodeWithCoder:(id)a;
 - (id) initWithCoder:(id)a;


@end
