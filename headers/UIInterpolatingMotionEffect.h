
@interface UIInterpolatingMotionEffect : UIMotionEffect {

    double _horizontalAccelerationBoostFactor;
    double _verticalAccelerationBoostFactor;
    @"NSString" _keyPath;
    long long _type;
    id _minimumRelativeValue;
    id _maximumRelativeValue;
}

 - (id) keyPath;
 - (id) copyWithZone:(^{_NSZone=})a;
 - (id) description;
 - (void) dealloc;
 - (id) keyPathsAndRelativeValuesForViewerOffset:({UIOffset=dd})a;
 - (id) initWithKeyPath:(id)atype:(long long)b;
 - (void) setMinimumRelativeValue:(id)a;
 - (void) setMaximumRelativeValue:(id)a;
 - (void) _setHorizontalAccelerationBoostFactor:(double)a;
 - (double) _horizontalAccelerationBoostFactor;
 - (void) _setVerticalAccelerationBoostFactor:(double)a;
 - (double) _verticalAccelerationBoostFactor;
 - (id) _keyPathsAndRelativeValuesForPose:(id)a;
 - (void) _setKeyPath:(id)a;
 - (void) _setType:(long long)a;
 - (id) minimumRelativeValue;
 - (id) maximumRelativeValue;
 - (void) encodeWithCoder:(id)a;
 - (id) initWithCoder:(id)a;
 - (long long) type;


@end
