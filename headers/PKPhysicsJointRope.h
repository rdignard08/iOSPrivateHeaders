
@interface PKPhysicsJointRope : PKPhysicsJoint {

    {b2RopeJointDef="type"i"userData"^v"bodyA"^{b2Body}"bodyB"^{b2Body}"collideConnected"B"localAnchorA"{b2Vec2="x"f"y"f}"localAnchorB"{b2Vec2="x"f"y"f}"maxLength"f} _jointDef;
    ^{b2RopeJoint=^^?i^{b2Joint}^{b2Joint}{b2JointEdge=^{b2Body}^{b2Joint}^{b2JointEdge}^{b2JointEdge}}{b2JointEdge=^{b2Body}^{b2Joint}^{b2JointEdge}^{b2JointEdge}}^{b2Body}^{b2Body}BB^v{b2Vec2=ff}{b2Vec2=ff}fffii{b2Vec2=ff}{b2Vec2=ff}{b2Vec2=ff}{b2Vec2=ff}{b2Vec2=ff}fffffi} _joint;
    {CGPoint="x"d"y"d} _anchorA;
    {CGPoint="x"d"y"d} _anchorB;
}
 + (id) jointWithBodyA:(id)abodyB:(id)banchorA:({CGPoint=dd})canchorB:({CGPoint=dd})d;

 - (id) .cxx_construct;
 - (void) encodeWithCoder:(id)a;
 - (id) initWithCoder:(id)a;
 - (^{b2Joint=^^?i^{b2Joint}^{b2Joint}{b2JointEdge=^{b2Body}^{b2Joint}^{b2JointEdge}^{b2JointEdge}}{b2JointEdge=^{b2Body}^{b2Joint}^{b2JointEdge}^{b2JointEdge}}^{b2Body}^{b2Body}BB^v}) _joint;
 - (void) set_joint:(^{b2Joint=^^?i^{b2Joint}^{b2Joint}{b2JointEdge=^{b2Body}^{b2Joint}^{b2JointEdge}^{b2JointEdge}}{b2JointEdge=^{b2Body}^{b2Joint}^{b2JointEdge}^{b2JointEdge}}^{b2Body}^{b2Body}BB^v})a;
 - (^{b2JointDef=i^v^{b2Body}^{b2Body}B}) _jointDef;
 - (void) create;
 - (id) initWithBodyA:(id)abodyB:(id)banchorA:({CGPoint=dd})canchorB:({CGPoint=dd})d;
 - (d) maxLength;
 - (void) setMaxLength:(d)a;


@end
