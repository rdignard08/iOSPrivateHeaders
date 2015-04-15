
@interface PKPhysicsContact : NSObject {

    @"PKPhysicsBody" _bodyA;
    @"PKPhysicsBody" _bodyB;
    {CGPoint="x"d"y"d} _contactPoint;
    {CGVector="dx"d"dy"d} _contactNormal;
    d _impulse;
    BOOL _didBegin;
    BOOL _didEnd;
}
@property (atomic, assign, readwrite) NSNumber* didBegin;
@property (atomic, assign, readwrite) NSNumber* didEnd;
@property (nonatomic, assign, readonly) PKPhysicsBody* bodyA;
@property (nonatomic, assign, readonly) PKPhysicsBody* bodyB;
@property (nonatomic, assign, readonly) NSNumber* contactPoint;
@property (nonatomic, assign, readonly) NSNumber* contactNormal;
@property (nonatomic, assign, readonly) NSNumber* collisionImpulse;

 - (BOOL) didBegin;
 - (BOOL) didEnd;
 - (id) .cxx_construct;
 - (void) .cxx_destruct;
 - ({CGPoint=dd}) contactPoint;
 - (id) init;
 - (id) bodyA;
 - (id) bodyB;
 - ({CGVector=dd}) contactNormal;
 - (d) collisionImpulse;
 - (void) setDidBegin:(BOOL)a;
 - (void) setDidEnd:(BOOL)a;
 - (void) setContactPoint:({CGPoint=dd})a;
 - (void) setContactNormal:({CGVector=dd})a;
 - (void) setBodyA:(id)a;
 - (void) setBodyB:(id)a;
 - (void) setCollisionImpulse:(d)a;


@end
