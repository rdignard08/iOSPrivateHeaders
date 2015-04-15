
@interface UIMotionEffectGroup : UIMotionEffect {

    NSArray* _motionEffects;
}

 - (id) copyWithZone:(^{_NSZone=})a;
 - (id) description;
 - (void) dealloc;
 - (id) motionEffects;
 - (void) setMotionEffects:(id)a;
 - (id) keyPathsAndRelativeValuesForViewerOffset:({UIOffset=dd})a;
 - (id) _keyPathsAndRelativeValuesForPose:(id)a;
 - (id) debugDescription;
 - (void) encodeWithCoder:(id)a;
 - (id) initWithCoder:(id)a;


@end
