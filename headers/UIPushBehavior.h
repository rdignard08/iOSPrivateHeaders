
@interface UIPushBehavior : UIDynamicBehavior {

    double _angle;
    double _magnitude;
    BOOL _active;
    long long _mode;
    {CGVector="dx"d"dy"d} _forceVector;
    double _timeInterval;
    NSMutableDictionary* _targetPoints;
    int _i;
}

 - (void) removeItem:(id)a;
 - (void) setActive:(BOOL)a;
 - (id) description;
 - (void) dealloc;
 - (id) items;
 - (BOOL) active;
 - (id) initWithItems:(id)a;
 - (long long) mode;
 - (void) _associate;
 - (void) _dissociate;
 - (id) initWithItems:(id)amode:(long long)b;
 - (void) setPushDirection:({CGVector=dd})a;
 - (void) _step;
 - (void) setXComponent:(double)ayComponent:(double)b;
 - (double) magnitude;
 - (void) setAngle:(double)amagnitude:(double)b;
 - (double) yComponent;
 - (double) xComponent;
 - (void) setMagnitude:(double)a;
 - (void) setXComponent:(double)a;
 - (void) setYComponent:(double)a;
 - ({CGPoint=dd}) targetPointForItem:(id)a;
 - (void) setTargetPoint:({CGPoint=dd})aforItem:(id)b;
 - ({UIOffset=dd}) targetOffsetFromCenterForItem:(id)a;
 - (void) setTargetOffsetFromCenter:({UIOffset=dd})aforItem:(id)b;
 - ({CGVector=dd}) pushDirection;
 - (id) init;
 - (void) _commonInit;
 - (void) setAngle:(double)a;
 - (double) angle;
 - (void) addItem:(id)a;


@end
