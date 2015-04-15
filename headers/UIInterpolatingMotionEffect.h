
@interface UIInterpolatingMotionEffect : UIMotionEffect {

    d _horizontalAccelerationBoostFactor;
    d _verticalAccelerationBoostFactor;
    @"NSString" _keyPath;
    q _type;
    id _minimumRelativeValue;
    id _maximumRelativeValue;
}

 - (id) keyPath;
 - (id) copyWithZone:(^{_NSZone=})a;
 - (id) description;
 - (void) dealloc;
 - (id) keyPathsAndRelativeValuesForViewerOffset:({UIOffset=dd})a;
 - (id) initWithKeyPath:(id)atype:(q)b;
 - (void) setMinimumRelativeValue:(id)a;
 - (void) setMaximumRelativeValue:(id)a;
 - (void) _setHorizontalAccelerationBoostFactor:(d)a;
 - (d) _horizontalAccelerationBoostFactor;
 - (void) _setVerticalAccelerationBoostFactor:(d)a;
 - (d) _verticalAccelerationBoostFactor;
 - (id) _keyPathsAndRelativeValuesForPose:(id)a;
 - (void) _setKeyPath:(id)a;
 - (void) _setType:(q)a;
 - (id) minimumRelativeValue;
 - (id) maximumRelativeValue;
 - (void) encodeWithCoder:(id)a;
 - (id) initWithCoder:(id)a;
 - (q) type;


@end
