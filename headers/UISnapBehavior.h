
@interface UISnapBehavior : UIDynamicBehavior {

    {CGPoint="x"d"y"d} _anchorPoint;
    double _damping;
    double _distance;
    double _frequency;
    {?="attachedToView"b1"dampingSet"b1"frequencySet"b1"lengthSet"b1} _stateFlags;
    NSMutableArray _joints;
    PKPhysicsBody _anchorBody;
}

 - (id) description;
 - (void) dealloc;
 - (void) _associate;
 - (void) _dissociate;
 - (double) _frequency;
 - (id) initWithItem:(id)asnapToPoint:({CGPoint=dd})b;
 - (double) _distance;
 - (void) _setDistance:(double)a;
 - (void) _setFrequency:(double)a;
 - (id) init;
 - (double) damping;
 - (void) setDamping:(double)a;


@end
