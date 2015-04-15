
@protocol NSCopying, NSCoding;
@interface PKPhysicsBody : NSObject <NSCopying, NSCoding> {

    @"<NSObject>" _representedObject;
    {b2BodyDef="_sk_affectedByGravity"B"_sk_fieldCategoryBitMask"I"_sk_categoryBitMask"I"_sk_collisionBitMask"I"_sk_intersectionCallbackBitMask"I"type"i"position"{b2Vec2="x"f"y"f}"angle"f"linearVelocity"{b2Vec2="x"f"y"f}"angularVelocity"f"charge"f"linearDamping"f"angularDamping"f"allowSleep"B"awake"B"fixedRotation"B"bullet"B"active"B"userData"^v} _bodyDef;
    ^{b2Body=BIIIIiSi{b2Transform={b2Vec2=ff}{b2Rot=ff}}{b2Transform={b2Vec2=ff}{b2Rot=ff}}{b2Sweep={b2Vec2=ff}(b2Position={?={b2Vec2=ff}ff})(b2Position={?={b2Vec2=ff}ff})f}{b2Vec2=ff}f{b2Vec2=ff}f^{b2World}^{b2Body}^{b2Body}^{b2Fixture}i^{b2JointEdge}^{b2ContactEdge}ffffffff^v} _body;
    ^{PKCField=} _field;
    int _dynamicType;
    {vector<PKPhysicsShape *, std::__1::allocator<PKPhysicsShape *> >="__begin_"^^{PKPhysicsShape}"__end_"^^{PKPhysicsShape}"__end_cap_"{__compressed_pair<PKPhysicsShape **, std::__1::allocator<PKPhysicsShape *> >="__first_"^^{PKPhysicsShape}}} _shapes;
    @"PKPhysicsWorld" _world;
    @"NSMutableArray" _joints;
    BOOL _inUse;
    int _shapeType;
    {shared_ptr<PKPath>="__ptr_"^{PKPath}"__cntrl_"^{__shared_weak_count}} _pathPtr;
    {shared_ptr<QuadTree>="__ptr_"^{QuadTree}"__cntrl_"^{__shared_weak_count}} _quadTree;
    {CGPoint="x"d"y"d} _p0;
    {CGPoint="x"d"y"d} _p1;
    {CGSize="width"d"height"d} _size;
    double _radius;
    double _edgeRadius;
    ^{CGImage=} _mask;
    {shared_ptr<PKPath>="__ptr_"^{PKPath}"__cntrl_"^{__shared_weak_count}} _outline;
    BOOL _isPinned;
    BOOL _allowsRotation;
    @? _postStepBlock;
}
@property (nonatomic, assign, readonly) NSNumber* _shapes;
@property (nonatomic, assign, readwrite) NSNumber* _bodyDef;
@property (nonatomic, assign, readwrite) NSNumber* _body;
@property (nonatomic, assign, readwrite) NSNumber* position;
@property (nonatomic, assign, readwrite) NSNumber* rotation;
@property (nonatomic, assign, readwrite, isDynamic) NSNumber* dynamic;
@property (nonatomic, assign, readwrite) NSNumber* usesPreciseCollisionDetection;
@property (nonatomic, assign, readwrite) NSNumber* allowsRotation;
@property (nonatomic, assign, readwrite) NSNumber* pinned;
@property (nonatomic, assign, readwrite) NSNumber* outline;
@property (nonatomic, assign, readwrite, isResting) NSNumber* resting;
@property (nonatomic, assign, readwrite) NSNumber* friction;
@property (nonatomic, assign, readwrite) NSNumber* charge;
@property (nonatomic, assign, readwrite) NSNumber* restitution;
@property (nonatomic, assign, readwrite) NSNumber* linearDamping;
@property (nonatomic, assign, readwrite) NSNumber* angularDamping;
@property (nonatomic, assign, readwrite) NSNumber* density;
@property (nonatomic, assign, readwrite) NSNumber* mass;
@property (nonatomic, assign, readonly) NSNumber* area;
@property (nonatomic, assign, readwrite) NSNumber* radius;
@property (nonatomic, assign, readwrite) NSNumber* affectedByGravity;
@property (nonatomic, assign, readwrite) NSNumber* fieldBitMask;
@property (nonatomic, assign, readwrite) NSNumber* categoryBitMask;
@property (nonatomic, assign, readwrite) NSNumber* collisionBitMask;
@property (nonatomic, assign, readwrite) NSNumber* contactTestBitMask;
@property (nonatomic, assign, readonly) NSArray* joints;
@property (nonatomic, weak, readwrite) NSNumber* representedObject;
@property (nonatomic, copy, readwrite) NSNumber* postStepBlock;
@property (nonatomic, assign, readwrite) NSNumber* velocity;
@property (nonatomic, assign, readwrite) NSNumber* angularVelocity;
 + (id) bodyWithRectangleOfSize:({CGSize=dd})a;
 + (id) bodyWithCircleOfRadius:(double)a;
 + (id) bodyWithEdgeLoopFromPath:(^{CGPath=})a;
 + (id) bodyWithEdgeFromPoint:({CGPoint=dd})atoPoint:({CGPoint=dd})b;
 + (id) bodyWithBodies:(id)a;
 + (id) bodyWithCircleOfRadius:(double)acenter:({CGPoint=dd})b;
 + (id) bodyWithOutline:({shared_ptr<PKPath>=^{PKPath}^{__shared_weak_count}})aoffset:({CGPoint=dd})b;
 + (id) initWithQuadTree:(id)a;
 + (id) initWithMarchingCubes:(^{PKCGrid=iii{Range=ffffff}{vector<unsigned char, std::__1::allocator<unsigned char> >=**{__compressed_pair<unsigned char *, std::__1::allocator<unsigned char> >=*}}{vector<float __attribute__((ext_vector_type(4))), std::__1::allocator<float __attribute__((ext_vector_type(4)))> >=^^{__compressed_pair<float * __attribute__((ext_vector_type(4))), std::__1::allocator<float __attribute__((ext_vector_type(4)))> >=^}}{vector<int, std::__1::allocator<int> >=^i^i{__compressed_pair<int *, std::__1::allocator<int> >=^i}}{vector<signed char, std::__1::allocator<signed char> >=**{__compressed_pair<signed char *, std::__1::allocator<signed char> >=*}}})apixelFrame:({CGRect={CGPoint=dd}{CGSize=dd}})b;
 + (id) bodyWithRectangleOfSize:({CGSize=dd})aedgeRadius:(double)b;
 + (id) bodyWithRectangleOfSize:({CGSize=dd})acenter:({CGPoint=dd})b;
 + (id) bodyWithRectangleOfSize:({CGSize=dd})acenter:({CGPoint=dd})bedgeRadius:(double)c;
 + (id) bodyWithPolygonFromPath:(^{CGPath=})a;
 + (id) bodyWithEdgeChainFromPath:(^{CGPath=})a;

 - ({CGPoint=dd}) position;
 - (void) setActive:(BOOL)a;
 - (id) copyWithZone:(^{_NSZone=})a;
 - (id) description;
 - (id) .cxx_construct;
 - (void) .cxx_destruct;
 - (void) dealloc;
 - (BOOL) active;
 - (id) _world;
 - (void) setRotation:(double)a;
 - (void) applyImpulse:({CGVector=dd})a;
 - (void) setRepresentedObject:(id)a;
 - (void) setPostStepBlock:(@?)a;
 - (void) applyUnscaledImpulse:({CGVector=dd})aatPoint:({CGPoint=dd})b;
 - (void) applyUnscaledForce:({CGVector=dd})aatPoint:({CGPoint=dd})b;
 - (void) applyUnscaledImpulse:({CGVector=dd})a;
 - (void) applyUnscaledForce:({CGVector=dd})a;
 - (id) initWithCircleOfRadius:(double)a;
 - (id) initWithRectangleOfSize:({CGSize=dd})a;
 - (id) init;
 - (void) encodeWithCoder:(id)a;
 - (id) initWithCoder:(id)a;
 - (void) setMass:(double)a;
 - (double) rotation;
 - (void) setPosition:({CGPoint=dd})a;
 - (double) radius;
 - (id) initWithPolygonFromPath:(^{CGPath=})a;
 - (void) setDynamic:(BOOL)a;
 - (void) setOutline:({shared_ptr<PKPath>=^{PKPath}^{__shared_weak_count}})a;
 - (BOOL) isDynamic;
 - (BOOL) usesPreciseCollisionDetection;
 - (BOOL) allowsRotation;
 - (BOOL) pinned;
 - (double) friction;
 - (double) charge;
 - (double) restitution;
 - (double) density;
 - (BOOL) affectedByGravity;
 - (unsigned int) categoryBitMask;
 - (unsigned int) collisionBitMask;
 - (unsigned int) contactTestBitMask;
 - (unsigned int) fieldBitMask;
 - ({CGVector=dd}) velocity;
 - (double) angularVelocity;
 - (double) linearDamping;
 - (double) angularDamping;
 - (id) initWithCircleOfRadius:(double)acenter:({CGPoint=dd})b;
 - (id) initWithRectangleOfSize:({CGSize=dd})acenter:({CGPoint=dd})b;
 - (id) initWithEdgeFromPoint:({CGPoint=dd})atoPoint:({CGPoint=dd})b;
 - (id) initWithEdgeChainFromPath:(^{CGPath=})a;
 - (id) initWithEdgeLoopFromPath:(^{CGPath=})a;
 - (void) setUsesPreciseCollisionDetection:(BOOL)a;
 - (void) setAllowsRotation:(BOOL)a;
 - (void) setPinned:(BOOL)a;
 - (void) setFriction:(double)a;
 - (void) setCharge:(double)a;
 - (void) setRestitution:(double)a;
 - (void) setDensity:(double)a;
 - (void) setAffectedByGravity:(BOOL)a;
 - (void) setCategoryBitMask:(unsigned int)a;
 - (void) setCollisionBitMask:(unsigned int)a;
 - (void) setContactTestBitMask:(unsigned int)a;
 - (void) setFieldBitMask:(unsigned int)a;
 - (void) setVelocity:({CGVector=dd})a;
 - (void) setAngularVelocity:(double)a;
 - (void) setLinearDamping:(double)a;
 - (void) setAngularDamping:(double)a;
 - (^{vector<PKPhysicsShape *, std::__1::allocator<PKPhysicsShape *> >=^^{PKPhysicsShape}^^{PKPhysicsShape}{__compressed_pair<PKPhysicsShape **, std::__1::allocator<PKPhysicsShape *> >=^^{PKPhysicsShape}}}) _shapes;
 - (id) initWithRectangleOfSize:({CGSize=dd})acenter:({CGPoint=dd})bedgeRadius:(float)c;
 - (void) set_allowSleep:(BOOL)a;
 - (id) initWithBodies:(id)a;
 - (void) setResting:(BOOL)a;
 - (double) mass;
 - (id) _descriptionClassName;
 - (id) _descriptionFormat;
 - ({shared_ptr<PKPath>=^{PKPath}^{__shared_weak_count}}) outline;
 - (void) clearBox2DData;
 - (id) representedObject;
 - (BOOL) _allowSleep;
 - (void) applyForce:({CGPoint=dd})aatPoint:({CGPoint=dd})b;
 - (void) applyForce:({CGPoint=dd})a;
 - (void) applyTorque:(double)a;
 - (void) applyImpulse:({CGVector=dd})aatPoint:({CGPoint=dd})b;
 - (void) applyAngularImpulse:(double)a;
 - (BOOL) isResting;
 - (id) joints;
 - (double) area;
 - (void) reapplyScale:(double)ayScale:(double)b;
 - (void) setRadius:(double)a;
 - (id) allContactedBodies;
 - (@?) postStepBlock;
 - ({b2BodyDef=BIIIIi{b2Vec2=ff}f{b2Vec2=ff}ffffBBBBB^v}) _bodyDef;
 - (^{b2Body=BIIIIiSi{b2Transform={b2Vec2=ff}{b2Rot=ff}}{b2Transform={b2Vec2=ff}{b2Rot=ff}}{b2Sweep={b2Vec2=ff}(b2Position={?={b2Vec2=ff}ff})(b2Position={?={b2Vec2=ff}ff})f}{b2Vec2=ff}f{b2Vec2=ff}f^{b2World}^{b2Body}^{b2Body}^{b2Fixture}i^{b2JointEdge}^{b2ContactEdge}ffffffff^v}) _body;
 - (id) _joints;
 - (BOOL) _inUse;
 - ({shared_ptr<QuadTree>=^{QuadTree}^{__shared_weak_count}}) _quadTree;
 - (void) set_world:(id)a;
 - (void) set_joints:(id)a;
 - (void) set_inUse:(BOOL)a;
 - (void) set_bodyDef:({b2BodyDef=BIIIIi{b2Vec2=ff}f{b2Vec2=ff}ffffBBBBB^v})a;
 - (void) set_body:(^{b2Body=BIIIIiSi{b2Transform={b2Vec2=ff}{b2Rot=ff}}{b2Transform={b2Vec2=ff}{b2Rot=ff}}{b2Sweep={b2Vec2=ff}(b2Position={?={b2Vec2=ff}ff})(b2Position={?={b2Vec2=ff}ff})f}{b2Vec2=ff}f{b2Vec2=ff}f^{b2World}^{b2Body}^{b2Body}^{b2Fixture}i^{b2JointEdge}^{b2ContactEdge}ffffffff^v})a;


@end
