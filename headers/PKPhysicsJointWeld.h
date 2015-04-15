
@interface PKPhysicsJointWeld : PKPhysicsJoint {

    {b2WeldJointDef="type"i"userData"^v"bodyA"^{b2Body}"bodyB"^{b2Body}"collideConnected"B"localAnchorA"{b2Vec2="x"f"y"f}"localAnchorB"{b2Vec2="x"f"y"f}"referenceAngle"f} _jointDef;
    ^{b2WeldJoint=^^?i^{b2Joint}^{b2Joint}{b2JointEdge=^{b2Body}^{b2Joint}^{b2JointEdge}^{b2JointEdge}}{b2JointEdge=^{b2Body}^{b2Joint}^{b2JointEdge}^{b2JointEdge}}^{b2Body}^{b2Body}BB^v{b2Vec2=ff}{b2Vec2=ff}f{b2Vec3=fff}ii{b2Vec2=ff}{b2Vec2=ff}{b2Vec2=ff}{b2Vec2=ff}ffff{b2Mat33={b2Vec3=fff}{b2Vec3=fff}{b2Vec3=fff}}} _joint;
    {CGPoint="x"d"y"d} _anchor;
}
 + (id) jointWithBodyA:(id)abodyB:(id)banchor:({CGPoint=dd})c;

 - (id) .cxx_construct;
 - (void) encodeWithCoder:(id)a ;
 - (id) initWithCoder:(id)a ;
 - (^{b2Joint=^^?i^{b2Joint}^{b2Joint}{b2JointEdge=^{b2Body}^{b2Joint}^{b2JointEdge}^{b2JointEdge}}{b2JointEdge=^{b2Body}^{b2Joint}^{b2JointEdge}^{b2JointEdge}}^{b2Body}^{b2Body}BB^v}) _joint;
 - (void) set_joint:(^{b2Joint=^^?i^{b2Joint}^{b2Joint}{b2JointEdge=^{b2Body}^{b2Joint}^{b2JointEdge}^{b2JointEdge}}{b2JointEdge=^{b2Body}^{b2Joint}^{b2JointEdge}^{b2JointEdge}}^{b2Body}^{b2Body}BB^v})a ;
 - (^{b2JointDef=i^v^{b2Body}^{b2Body}B}) _jointDef;
 - (void) create;
 - (id) initWithBodyA:(id)a bodyB:(id)b anchor:({CGPoint=dd})c ;


@end
