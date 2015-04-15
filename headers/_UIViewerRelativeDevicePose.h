
@protocol NSCopying, NSCoding;
@interface _UIViewerRelativeDevicePose : NSObject <NSCopying, NSCoding> {

    _UIMotionEffectAcceleratedOutputRange* _acceleratedOutputRange;
    double _planarRotationAngle;
    {UIOffset="horizontal"d"vertical"d} _viewerOffset;
}
@property (nonatomic, assign, readwrite) NSNumber* viewerOffset;
@property (nonatomic, assign, readwrite) NSNumber* planarRotationAngle;

 - (id) copyWithZone:(^{_NSZone=})a ;
 - (id) description;
 - (void) dealloc;
 - (unsigned long long) hash;
 - (BOOL) isEqual:(id)a ;
 - ({UIOffset=dd}) viewerOffset;
 - (void) _reset;
 - (void) setViewerOffset:({UIOffset=dd})a ;
 - (id) _acceleratedOutputRange;
 - (void) _setAcceleration:({CGPoint=dd})a fixingOutputForViewerOffset:({UIOffset=dd})b ;
 - ({UIOffset=dd}) _acceleratedOutputForViewerOffset:({UIOffset=dd})a accelerationBoostFactor:({CGPoint=dd})b ;
 - (double) planarRotationAngle;
 - (void) setPlanarRotationAngle:(double)a ;
 - (void) encodeWithCoder:(id)a ;
 - (id) initWithCoder:(id)a ;


@end
