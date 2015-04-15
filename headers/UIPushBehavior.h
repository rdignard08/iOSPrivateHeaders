
@interface UIPushBehavior : UIDynamicBehavior {

    d _angle;
    d _magnitude;
    BOOL _active;
    q _mode;
    {CGVector="dx"d"dy"d} _forceVector;
    d _timeInterval;
    @"NSMutableDictionary" _targetPoints;
    i _i;
}

 - (void) removeItem:(id)a;
 - (void) setActive:(BOOL)a;
 - (id) description;
 - (void) dealloc;
 - (id) items;
 - (BOOL) active;
 - (id) initWithItems:(id)a;
 - (q) mode;
 - (void) _associate;
 - (void) _dissociate;
 - (id) initWithItems:(id)amode:(q)b;
 - (void) setPushDirection:({CGVector=dd})a;
 - (void) _step;
 - (void) setXComponent:(d)ayComponent:(d)b;
 - (d) magnitude;
 - (void) setAngle:(d)amagnitude:(d)b;
 - (d) yComponent;
 - (d) xComponent;
 - (void) setMagnitude:(d)a;
 - (void) setXComponent:(d)a;
 - (void) setYComponent:(d)a;
 - ({CGPoint=dd}) targetPointForItem:(id)a;
 - (void) setTargetPoint:({CGPoint=dd})aforItem:(id)b;
 - ({UIOffset=dd}) targetOffsetFromCenterForItem:(id)a;
 - (void) setTargetOffsetFromCenter:({UIOffset=dd})aforItem:(id)b;
 - ({CGVector=dd}) pushDirection;
 - (id) init;
 - (void) _commonInit;
 - (void) setAngle:(d)a;
 - (d) angle;
 - (void) addItem:(id)a;


@end
