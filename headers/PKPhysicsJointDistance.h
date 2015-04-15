
@interface PKPhysicsJointDistance : PKPhysicsJoint {

    {b2DistanceJointDef="type"i"userData"^v"bodyA"^{b2Body}"bodyB"^{b2Body}"collideConnected"B"localAnchorA"{b2Vec2="x"f"y"f}"localAnchorB"{b2Vec2="x"f"y"f}"length"f"frequencyHz"f"dampingRatio"f} _jointDef;
    ^{b2DistanceJoint=^^?i^{b2Joint}^{b2Joint}{b2JointEdge=^{b2Body}^{b2Joint}^{b2JointEdge}^{b2JointEdge}}{b2JointEdge=^{b2Body}^{b2Joint}^{b2JointEdge}^{b2JointEdge}}^{b2Body}^{b2Body}BB^vfff{b2Vec2=ff}{b2Vec2=ff}fffii{b2Vec2=ff}{b2Vec2=ff}{b2Vec2=ff}{b2Vec2=ff}{b2Vec2=ff}fffff} _joint;
    {CGPoint="x"d"y"d} _anchorA;
    {CGPoint="x"d"y"d} _anchorB;
}
 + (id) jointWithBodyA:(id)abodyB:(id)blocalAnchorA:({CGPoint=dd})clocalAnchorB:({CGPoint=dd})d;
 + (id) jointWithBodyA:(id)abodyB:(id)banchorA:({CGPoint=dd})canchorB:({CGPoint=dd})d;

 - (id) .cxx_construct;
 - (void) setLength:(double)a ;
 - (void) setCollideConnected:(BOOL)a ;
 - (double) length;
 - (void) encodeWithCoder:(id)a ;
 - (id) initWithCoder:(id)a ;
 - (^{b2Joint=^^?i^{b2Joint}^{b2Joint}{b2JointEdge=^{b2Body}^{b2Joint}^{b2JointEdge}^{b2JointEdge}}{b2JointEdge=^{b2Body}^{b2Joint}^{b2JointEdge}^{b2JointEdge}}^{b2Body}^{b2Body}BB^v}) _joint;
 - (void) set_joint:(^{b2Joint=^^?i^{b2Joint}^{b2Joint}{b2JointEdge=^{b2Body}^{b2Joint}^{b2JointEdge}^{b2JointEdge}}{b2JointEdge=^{b2Body}^{b2Joint}^{b2JointEdge}^{b2JointEdge}}^{b2Body}^{b2Body}BB^v})a ;
 - (^{b2JointDef=i^v^{b2Body}^{b2Body}B}) _jointDef;
 - (void) create;
 - (id) initWithBodyA:(id)a bodyB:(id)b localAnchorA:({CGPoint=dd})c localAnchorB:({CGPoint=dd})d ;
 - (id) initWithBodyA:(id)a bodyB:(id)b anchorA:({CGPoint=dd})c anchorB:({CGPoint=dd})d ;
 - (double) damping;
 - (double) frequency;
 - (void) setDamping:(double)a ;
 - (void) setFrequency:(double)a ;
 - (BOOL) collideConnected;


@end
