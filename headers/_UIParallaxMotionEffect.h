
@interface _UIParallaxMotionEffect : UIMotionEffect {

    @"UIMotionEffectGroup" _group;
    {UIOffset="horizontal"d"vertical"d} _slideMagnitude;
    @"UIInterpolatingMotionEffect" _horizontalSlideEffect;
    @"UIInterpolatingMotionEffect" _verticalSlideEffect;
    @"_UITiltMotionEffect" _tiltEffect;
}

 - (id) copyWithZone:(^{_NSZone=})a;
 - (id) description;
 - (void) dealloc;
 - ({UIOffset=dd}) slideMagnitude;
 - (void) setSlideMagnitude:({UIOffset=dd})a;
 - (id) keyPathsAndRelativeValuesForViewerOffset:({UIOffset=dd})a;
 - (void) setRotatingSphereRadius:(d)a;
 - (d) maximumHorizontalTiltAngle;
 - (void) setMaximumHorizontalTiltAngle:(d)a;
 - (d) maximumVerticalTiltAngle;
 - (void) setMaximumVerticalTiltAngle:(d)a;
 - (d) rotatingSphereRadius;
 - (d) horizontalSlideAccelerationBoostFactor;
 - (d) verticalSlideAccelerationBoostFactor;
 - (void) _updateSlideEffectsWithCurrentSlideMagnitude;
 - (id) _keyPathsAndRelativeValuesForPose:(id)a;
 - (void) _updateGroupMotionEffect;
 - (void) _activateTiltEffectIfNecessary;
 - (void) setHorizontalSlideAccelerationBoostFactor:(d)a;
 - (void) setVerticalSlideAccelerationBoostFactor:(d)a;
 - (id) init;
 - (void) encodeWithCoder:(id)a;
 - (id) initWithCoder:(id)a;


@end
