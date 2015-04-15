
@interface UIGravityBehavior : UIDynamicBehavior {

    {CGPoint="x"d"y"d} _gravity;
}

 - (void) removeItem:(id)a;
 - (id) description;
 - (id) items;
 - (id) initWithItems:(id)a;
 - (void) _associate;
 - (void) _dissociate;
 - (void) setGravityDirection:({CGVector=dd})a;
 - (void) _addItem:(id)a;
 - (void) setXComponent:(double)ayComponent:(double)b;
 - (double) magnitude;
 - (void) setAngle:(double)amagnitude:(double)b;
 - (double) yComponent;
 - (double) xComponent;
 - ({CGVector=dd}) gravityDirection;
 - ({CGPoint=dd}) denormalizedGravity;
 - (void) setMagnitude:(double)a;
 - (void) setXComponent:(double)a;
 - (void) setYComponent:(double)a;
 - (void) _setAngle:(double)amagnitude:(double)b;
 - (id) init;
 - (void) _commonInit;
 - (void) setAngle:(double)a;
 - (double) angle;
 - (void) addItem:(id)a;
 - ({CGPoint=dd}) gravity;
 - (void) setGravity:({CGPoint=dd})a;


@end
