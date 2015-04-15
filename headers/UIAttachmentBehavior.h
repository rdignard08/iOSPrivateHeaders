
@interface UIAttachmentBehavior : UIDynamicBehavior {

    {CGPoint="x"d"y"d} _anchorPoint;
    {CGPoint="x"d"y"d} _anchorPointA;
    {CGPoint="x"d"y"d} _anchorPointB;
    PKExtendedPhysicsBody _anchorBody;
    PKPhysicsJoint _joint;
    double _damping;
    double _frequency;
    double _length;
    long long _type;
    {?="dampingSet"b1"frequencySet"b1"lengthSet"b1"isRevolute"b1} _stateFlags;
    long long _attachedBehaviorType;
}

 - (id) description;
 - (void) dealloc;
 - (void) setLength:(double)a;
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
 - (long long) attachedBehaviorType;
 - (double) length;
 - (id) init;
 - (long long) type;
 - ({CGPoint=dd}) anchorPoint;
 - (void) setAnchorPoint:({CGPoint=dd})a;
 - (double) damping;
 - (double) frequency;
 - (void) setDamping:(double)a;
 - (void) setFrequency:(double)a;


@end
