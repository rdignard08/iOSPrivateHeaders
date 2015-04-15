
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
 - (void) setXComponent:(d)ayComponent:(d)b;
 - (d) magnitude;
 - (void) setAngle:(d)amagnitude:(d)b;
 - (d) yComponent;
 - (d) xComponent;
 - ({CGVector=dd}) gravityDirection;
 - ({CGPoint=dd}) denormalizedGravity;
 - (void) setMagnitude:(d)a;
 - (void) setXComponent:(d)a;
 - (void) setYComponent:(d)a;
 - (void) _setAngle:(d)amagnitude:(d)b;
 - (id) init;
 - (void) _commonInit;
 - (void) setAngle:(d)a;
 - (d) angle;
 - (void) addItem:(id)a;
 - ({CGPoint=dd}) gravity;
 - (void) setGravity:({CGPoint=dd})a;


@end
