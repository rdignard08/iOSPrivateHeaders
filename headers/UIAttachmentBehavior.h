
@interface UIAttachmentBehavior : UIDynamicBehavior {

    {CGPoint="x"d"y"d} _anchorPoint;
    {CGPoint="x"d"y"d} _anchorPointA;
    {CGPoint="x"d"y"d} _anchorPointB;
    @"PKExtendedPhysicsBody" _anchorBody;
    @"PKPhysicsJoint" _joint;
    d _damping;
    d _frequency;
    d _length;
    q _type;
    {?="dampingSet"b1"frequencySet"b1"lengthSet"b1"isRevolute"b1} _stateFlags;
    q _attachedBehaviorType;
}

 - (id) description;
 - (void) dealloc;
 - (void) setLength:(d)a;
 - (id) items;
 - (id) initWithItem:(id)apoint:({CGPoint=dd})battachedToAnchor:({CGPoint=dd})c;
 - (id) initWithItem:(id)apoint:({CGPoint=dd})battachedToItem:(id)cpoint:({CGPoint=dd})d;
 - (void) _changedParameter;
 - (void) _reevaluateJoint;
 - (id) initWithItem:(id)aattachedToAnchor:({CGPoint=dd})b;
 - (id) initWithItem:(id)aattachedToItem:(id)b;
 - (id) initWithItem:(id)aoffsetFromCenter:({UIOffset=dd})battachedToAnchor:({CGPoint=dd})c;
 - (id) initWithItem:(id)aoffsetFromCenter:({UIOffset=dd})battachedToItem:(id)coffsetFromCenter:({UIOffset=dd})d;
 - (void) _associate;
 - (void) _dissociate;
 - (q) attachedBehaviorType;
 - (d) length;
 - (id) init;
 - (q) type;
 - ({CGPoint=dd}) anchorPoint;
 - (void) setAnchorPoint:({CGPoint=dd})a;
 - (d) damping;
 - (d) frequency;
 - (void) setDamping:(d)a;
 - (void) setFrequency:(d)a;


@end
