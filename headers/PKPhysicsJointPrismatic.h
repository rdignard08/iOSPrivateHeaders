
@interface PKPhysicsJointPrismatic : PKPhysicsJoint {

    {b2PrismaticJointDef="type"i"userData"^v"bodyA"^{b2Body}"bodyB"^{b2Body}"collideConnected"B"localAnchorA"{b2Vec2="x"f"y"f}"localAnchorB"{b2Vec2="x"f"y"f}"localAxisA"{b2Vec2="x"f"y"f}"referenceAngle"f"enableLimit"B"lowerTranslation"f"upperTranslation"f"enableMotor"B"maxMotorForce"f"motorSpeed"f} _jointDef;
    ^{b2PrismaticJoint=^^?i^{b2Joint}^{b2Joint}{b2JointEdge=^{b2Body}^{b2Joint}^{b2JointEdge}^{b2JointEdge}}{b2JointEdge=^{b2Body}^{b2Joint}^{b2JointEdge}^{b2JointEdge}}^{b2Body}^{b2Body}BB^v{b2Vec2=ff}{b2Vec2=ff}{b2Vec2=ff}{b2Vec2=ff}f{b2Vec3=fff}fffffBBiii{b2Vec2=ff}{b2Vec2=ff}ffff{b2Vec2=ff}{b2Vec2=ff}ffff{b2Mat33={b2Vec3=fff}{b2Vec3=fff}{b2Vec3=fff}}f} _joint;
    {CGPoint="x"d"y"d} _anchor;
    {CGVector="dx"d"dy"d} _axis;
}
 + (id) jointWithBodyA:(id)abodyB:(id)banchor:({CGPoint=dd})caxis:({CGVector=dd})d;

 - (id) .cxx_construct;
 - (void) encodeWithCoder:(id)a;
 - (id) initWithCoder:(id)a;
 - (^{b2Joint=^^?i^{b2Joint}^{b2Joint}{b2JointEdge=^{b2Body}^{b2Joint}^{b2JointEdge}^{b2JointEdge}}{b2JointEdge=^{b2Body}^{b2Joint}^{b2JointEdge}^{b2JointEdge}}^{b2Body}^{b2Body}BB^v}) _joint;
 - (void) set_joint:(^{b2Joint=^^?i^{b2Joint}^{b2Joint}{b2JointEdge=^{b2Body}^{b2Joint}^{b2JointEdge}^{b2JointEdge}}{b2JointEdge=^{b2Body}^{b2Joint}^{b2JointEdge}^{b2JointEdge}}^{b2Body}^{b2Body}BB^v})a;
 - (^{b2JointDef=i^v^{b2Body}^{b2Body}B}) _jointDef;
 - (void) create;
 - (BOOL) shouldEnableLimits;
 - (void) setShouldEnableLimits:(BOOL)a;
 - (id) initWithBodyA:(id)abodyB:(id)banchor:({CGPoint=dd})caxis:({CGVector=dd})d;
 - (double) lowerDistanceLimit;
 - (double) upperDistanceLimit;
 - (void) setLowerDistanceLimit:(double)a;
 - (void) setUpperDistanceLimit:(double)a;


@end
