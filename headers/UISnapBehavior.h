
@interface UISnapBehavior : UIDynamicBehavior {

    {CGPoint="x"d"y"d} _anchorPoint;
    d _damping;
    d _distance;
    d _frequency;
    {?="attachedToView"b1"dampingSet"b1"frequencySet"b1"lengthSet"b1} _stateFlags;
    @"NSMutableArray" _joints;
    @"PKPhysicsBody" _anchorBody;
}

 - (id) description;
 - (void) dealloc;
 - (void) _associate;
 - (void) _dissociate;
 - (d) _frequency;
 - (id) initWithItem:(id)asnapToPoint:({CGPoint=dd})b;
 - (d) _distance;
 - (void) _setDistance:(d)a;
 - (void) _setFrequency:(d)a;
 - (id) init;
 - (d) damping;
 - (void) setDamping:(d)a;


@end
