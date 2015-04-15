
@protocol NSCoding;
@interface PKPhysicsJoint : NSObject <NSCoding> {

    BOOL _inUse;
    BOOL _implicit;
    ^{b2Joint=^^?i^{b2Joint}^{b2Joint}{b2JointEdge=^{b2Body}^{b2Joint}^{b2JointEdge}^{b2JointEdge}}{b2JointEdge=^{b2Body}^{b2Joint}^{b2JointEdge}^{b2JointEdge}}^{b2Body}^{b2Body}BB^v} _baseJoint;
    @"PKPhysicsBody" _bodyA;
    @"PKPhysicsBody" _bodyB;
}
@property (nonatomic, assign, readwrite) NSNumber* _joint;
@property (nonatomic, assign, readonly) NSNumber* _jointDef;
@property (nonatomic, retain, readwrite) PKPhysicsBody* bodyA;
@property (nonatomic, retain, readwrite) PKPhysicsBody* bodyB;
@property (nonatomic, assign, readonly) NSNumber* reactionForce;
@property (nonatomic, assign, readonly) NSNumber* reactionTorque;

 - (void) .cxx_destruct;
 - (id) init;
 - (void) encodeWithCoder:(id)a;
 - (id) initWithCoder:(id)a;
 - (BOOL) _implicit;
 - (BOOL) _inUse;
 - (void) set_inUse:(BOOL)a;
 - (id) bodyA;
 - (id) bodyB;
 - (void) setBodyA:(id)a;
 - (void) setBodyB:(id)a;
 - ({CGVector=dd}) reactionForce;
 - (double) reactionTorque;
 - (^{b2Joint=^^?i^{b2Joint}^{b2Joint}{b2JointEdge=^{b2Body}^{b2Joint}^{b2JointEdge}^{b2JointEdge}}{b2JointEdge=^{b2Body}^{b2Joint}^{b2JointEdge}^{b2JointEdge}}^{b2Body}^{b2Body}BB^v}) _joint;
 - (void) set_joint:(^{b2Joint=^^?i^{b2Joint}^{b2Joint}{b2JointEdge=^{b2Body}^{b2Joint}^{b2JointEdge}^{b2JointEdge}}{b2JointEdge=^{b2Body}^{b2Joint}^{b2JointEdge}^{b2JointEdge}}^{b2Body}^{b2Body}BB^v})a;
 - (void) set_implicit:(BOOL)a;
 - (^{b2JointDef=i^v^{b2Body}^{b2Body}B}) _jointDef;
 - (void) create;


@end
