
@interface _UITiltMotionEffect : UIMotionEffect {

    d _maximumHorizontalTiltAngle;
    d _maximumVerticalTiltAngle;
    d _rotatingSphereRadius;
}

 - (id) copyWithZone:(^{_NSZone=})a;
 - (id) description;
 - (id) keyPathsAndRelativeValuesForViewerOffset:({UIOffset=dd})a;
 - (void) setRotatingSphereRadius:(d)a;
 - (d) maximumHorizontalTiltAngle;
 - (void) setMaximumHorizontalTiltAngle:(d)a;
 - (d) maximumVerticalTiltAngle;
 - (void) setMaximumVerticalTiltAngle:(d)a;
 - (d) rotatingSphereRadius;
 - (void) encodeWithCoder:(id)a;
 - (id) initWithCoder:(id)a;


@end
