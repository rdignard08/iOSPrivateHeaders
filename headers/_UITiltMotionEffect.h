
@interface _UITiltMotionEffect : UIMotionEffect {

    double _maximumHorizontalTiltAngle;
    double _maximumVerticalTiltAngle;
    double _rotatingSphereRadius;
}

 - (id) copyWithZone:(^{_NSZone=})a ;
 - (id) description;
 - (id) keyPathsAndRelativeValuesForViewerOffset:({UIOffset=dd})a ;
 - (void) setRotatingSphereRadius:(double)a ;
 - (double) maximumHorizontalTiltAngle;
 - (void) setMaximumHorizontalTiltAngle:(double)a ;
 - (double) maximumVerticalTiltAngle;
 - (void) setMaximumVerticalTiltAngle:(double)a ;
 - (double) rotatingSphereRadius;
 - (void) encodeWithCoder:(id)a ;
 - (id) initWithCoder:(id)a ;


@end
