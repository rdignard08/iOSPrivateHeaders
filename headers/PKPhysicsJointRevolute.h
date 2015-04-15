
@interface PKPhysicsJointRevolute : PKPhysicsJoint {

    {b2RevoluteJointDef="type"i"userData"^v"bodyA"^{b2Body}"bodyB"^{b2Body}"collideConnected"B"localAnchorA"{b2Vec2="x"f"y"f}"localAnchorB"{b2Vec2="x"f"y"f}"referenceAngle"f"enableLimit"B"lowerAngle"f"upperAngle"f"enableMotor"B"motorSpeed"f"maxMotorTorque"f} _jointDef;
    ^{b2RevoluteJoint=^^?i^{b2Joint}^{b2Joint}{b2JointEdge=^{b2Body}^{b2Joint}^{b2JointEdge}^{b2JointEdge}}{b2JointEdge=^{b2Body}^{b2Joint}^{b2JointEdge}^{b2JointEdge}}^{b2Body}^{b2Body}BB^v{b2Vec2=ff}{b2Vec2=ff}{b2Vec3=fff}fBffBfffii{b2Vec2=ff}{b2Vec2=ff}{b2Vec2=ff}{b2Vec2=ff}ffff{b2Mat33={b2Vec3=fff}{b2Vec3=fff}{b2Vec3=fff}}fi} _joint;
    {CGPoint="x"d"y"d} _anchor;
}
 + (id) jointWithBodyA:(id)abodyB:(id)banchor:({CGPoint=dd})c;

 - (id) .cxx_construct;
 - ({CGPoint=dd}) anchor;
 - (void) encodeWithCoder:(id)a ;
 - (id) initWithCoder:(id)a ;
 - (^{b2Joint=^^?i^{b2Joint}^{b2Joint}{b2JointEdge=^{b2Body}^{b2Joint}^{b2JointEdge}^{b2JointEdge}}{b2JointEdge=^{b2Body}^{b2Joint}^{b2JointEdge}^{b2JointEdge}}^{b2Body}^{b2Body}BB^v}) _joint;
 - (void) set_joint:(^{b2Joint=^^?i^{b2Joint}^{b2Joint}{b2JointEdge=^{b2Body}^{b2Joint}^{b2JointEdge}^{b2JointEdge}}{b2JointEdge=^{b2Body}^{b2Joint}^{b2JointEdge}^{b2JointEdge}}^{b2Body}^{b2Body}BB^v})a ;
 - (^{b2JointDef=i^v^{b2Body}^{b2Body}B}) _jointDef;
 - (void) create;
 - (id) initWithBodyA:(id)a bodyB:(id)b anchor:({CGPoint=dd})c ;
 - (BOOL) shouldEnableLimits;
 - (double) lowerAngleLimit;
 - (double) upperAngleLimit;
 - (double) frictionTorque;
 - (void) setShouldEnableLimits:(BOOL)a ;
 - (void) setLowerAngleLimit:(double)a ;
 - (void) setUpperAngleLimit:(double)a ;
 - (void) setFrictionTorque:(double)a ;
 - (double) rotationSpeed;
 - (void) setRotationSpeed:(double)a ;


@end
