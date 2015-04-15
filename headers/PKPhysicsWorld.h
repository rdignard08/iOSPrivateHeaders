
@protocol NSCoding;
@interface PKPhysicsWorld : NSObject <NSCoding> {

    ^{b2World={b2StackAllocator=[102400c]iii[32{b2StackEntry=*iB}]i}i{b2ContactManager=^{b2ContactListener}i{b2DynamicTree=i^{b2TreeNode}iiiIi}{unordered_set<int, std::__1::hash<int>, std::__1::equal_to<int>, std::__1::allocator<int> >={__hash_table<int, std::__1::hash<int>, std::__1::equal_to<int>, std::__1::allocator<int> >={unique_ptr<std::__1::__hash_node<int, void *> *[], std::__1::__bucket_list_deallocator<std::__1::allocator<std::__1::__hash_node<int, void *> *> > >={__compressed_pair<std::__1::__hash_node<int, void *> **, std::__1::__bucket_list_deallocator<std::__1::allocator<std::__1::__hash_node<int, void *> *> > >=^^{__hash_node<int, void *>}{__bucket_list_deallocator<std::__1::allocator<std::__1::__hash_node<int, void *> *> >={__compressed_pair<unsigned long, std::__1::allocator<std::__1::__hash_node<int, void *> *> >=Q}}}}{__compressed_pair<std::__1::__hash_node_base<std::__1::__hash_node<int, void *> *>, std::__1::allocator<std::__1::__hash_node<int, void *> > >={__hash_node_base<std::__1::__hash_node<int, void *> *>=^{__hash_node<int, void *>}}}{__compressed_pair<unsigned long, std::__1::hash<int> >=Q}{__compressed_pair<float, std::__1::equal_to<int> >=f}}}{unordered_set<unsigned long long, std::__1::hash<unsigned long long>, std::__1::equal_to<unsigned long long>, std::__1::allocator<unsigned long long> >={__hash_table<unsigned long long, std::__1::hash<unsigned long long>, std::__1::equal_to<unsigned long long>, std::__1::allocator<unsigned long long> >={unique_ptr<std::__1::__hash_node<unsigned long long, void *> *[], std::__1::__bucket_list_deallocator<std::__1::allocator<std::__1::__hash_node<unsigned long long, void *> *> > >={__compressed_pair<std::__1::__hash_node<unsigned long long, void *> **, std::__1::__bucket_list_deallocator<std::__1::allocator<std::__1::__hash_node<unsigned long long, void *> *> > >=^^{__hash_node<unsigned long long, void *>}{__bucket_list_deallocator<std::__1::allocator<std::__1::__hash_node<unsigned long long, void *> *> >={__compressed_pair<unsigned long, std::__1::allocator<std::__1::__hash_node<unsigned long long, void *> *> >=Q}}}}{__compressed_pair<std::__1::__hash_node_base<std::__1::__hash_node<unsigned long long, void *> *>, std::__1::allocator<std::__1::__hash_node<unsigned long long, void *> > >={__hash_node_base<std::__1::__hash_node<unsigned long long, void *> *>=^{__hash_node<unsigned long long, void *>}}}{__compressed_pair<unsigned long, std::__1::hash<unsigned long long> >=Q}{__compressed_pair<float, std::__1::equal_to<unsigned long long> >=f}}}{unordered_set<b2Contact *, std::__1::hash<b2Contact *>, std::__1::equal_to<b2Contact *>, std::__1::allocator<b2Contact *> >={__hash_table<b2Contact *, std::__1::hash<b2Contact *>, std::__1::equal_to<b2Contact *>, std::__1::allocator<b2Contact *> >={unique_ptr<std::__1::__hash_node<b2Contact *, void *> *[], std::__1::__bucket_list_deallocator<std::__1::allocator<std::__1::__hash_node<b2Contact *, void *> *> > >={__compressed_pair<std::__1::__hash_node<b2Contact *, void *> **, std::__1::__bucket_list_deallocator<std::__1::allocator<std::__1::__hash_node<b2Contact *, void *> *> > >=^^{__hash_node<b2Contact *, void *>}{__bucket_list_deallocator<std::__1::allocator<std::__1::__hash_node<b2Contact *, void *> *> >={__compressed_pair<unsigned long, std::__1::allocator<std::__1::__hash_node<b2Contact *, void *> *> >=Q}}}}{__compressed_pair<std::__1::__hash_node_base<std::__1::__hash_node<b2Contact *, void *> *>, std::__1::allocator<std::__1::__hash_node<b2Contact *, void *> > >={__hash_node_base<std::__1::__hash_node<b2Contact *, void *> *>=^{__hash_node<b2Contact *, void *>}}}{__compressed_pair<unsigned long, std::__1::hash<b2Contact *> >=Q}{__compressed_pair<float, std::__1::equal_to<b2Contact *> >=f}}}i}^{b2Body}^{b2Joint}ii^{PKCAether}B^{b2DestructionListener}^{b2Draw}fBBBBdf{PKCMechanics=^{b2World}{vector<QuadTree *, std::__1::allocator<QuadTree *> >=^^{QuadTree}^^{QuadTree}{__compressed_pair<QuadTree **, std::__1::allocator<QuadTree *> >=^^{QuadTree}}}}} _world;
    {b2Vec2="x"f"y"f} _gravity;
    BOOL _doSleep;
    double _accumulatedDt;
    {PKContactListener="_vptr$b2ContactListener"^^?"_contacts"@"NSMutableDictionary""_contactDelegate"@"<PKPhysicsContactDelegate>"} _contactListener;
    float _speed;
    @"NSMutableArray" _bodies;
    @"NSMutableArray" _joints;
    @"NSMutableArray" _postStepBlocks;
    {PKDebugDrawPacket="_linePoints"{vector<PKPoint, std::__1::allocator<PKPoint> >="__begin_"^{?}"__end_"^{?}"__end_cap_"{__compressed_pair<PKPoint *, std::__1::allocator<PKPoint> >="__first_"^{?}}}"_colors"{vector<PKDebugDrawPacket::color4, std::__1::allocator<PKDebugDrawPacket::color4> >="__begin_"^{?}"__end_"^{?}"__end_cap_"{__compressed_pair<PKDebugDrawPacket::color4 *, std::__1::allocator<PKDebugDrawPacket::color4> >="__first_"^{?}}}} drawPacket;
}
@property (nonatomic, assign, readwrite) NSNumber* _doSleep;
@property (nonatomic, retain, readwrite) NSMutableArray* _bodies;
@property (nonatomic, assign, readonly) NSNumber* aether;
@property (nonatomic, assign, readonly) NSNumber* _world;
@property (nonatomic, assign, readwrite) NSNumber* _gravity;
@property (nonatomic, assign, readwrite) NSNumber* gravity;
@property (nonatomic, assign, readwrite) NSNumber* speed;
@property (nonatomic, assign, readwrite) NSNumber* velocityThreshold;
@property (nonatomic, assign, readwrite) NSNumber* contactDelegate;
 + (id) world;

 - (id) copyWithZone:(^{_NSZone=})a;
 - (id) .cxx_construct;
 - (void) .cxx_destruct;
 - (void) dealloc;
 - (id) copy;
 - (^{b2World={b2StackAllocator=[102400c]iii[32{b2StackEntry=*iB}]i}i{b2ContactManager=^{b2ContactListener}i{b2DynamicTree=i^{b2TreeNode}iiiIi}{unordered_set<int, std::__1::hash<int>, std::__1::equal_to<int>, std::__1::allocator<int> >={__hash_table<int, std::__1::hash<int>, std::__1::equal_to<int>, std::__1::allocator<int> >={unique_ptr<std::__1::__hash_node<int, void *> *[], std::__1::__bucket_list_deallocator<std::__1::allocator<std::__1::__hash_node<int, void *> *> > >={__compressed_pair<std::__1::__hash_node<int, void *> **, std::__1::__bucket_list_deallocator<std::__1::allocator<std::__1::__hash_node<int, void *> *> > >=^^{__hash_node<int, void *>}{__bucket_list_deallocator<std::__1::allocator<std::__1::__hash_node<int, void *> *> >={__compressed_pair<unsigned long, std::__1::allocator<std::__1::__hash_node<int, void *> *> >=Q}}}}{__compressed_pair<std::__1::__hash_node_base<std::__1::__hash_node<int, void *> *>, std::__1::allocator<std::__1::__hash_node<int, void *> > >={__hash_node_base<std::__1::__hash_node<int, void *> *>=^{__hash_node<int, void *>}}}{__compressed_pair<unsigned long, std::__1::hash<int> >=Q}{__compressed_pair<float, std::__1::equal_to<int> >=f}}}{unordered_set<unsigned long long, std::__1::hash<unsigned long long>, std::__1::equal_to<unsigned long long>, std::__1::allocator<unsigned long long> >={__hash_table<unsigned long long, std::__1::hash<unsigned long long>, std::__1::equal_to<unsigned long long>, std::__1::allocator<unsigned long long> >={unique_ptr<std::__1::__hash_node<unsigned long long, void *> *[], std::__1::__bucket_list_deallocator<std::__1::allocator<std::__1::__hash_node<unsigned long long, void *> *> > >={__compressed_pair<std::__1::__hash_node<unsigned long long, void *> **, std::__1::__bucket_list_deallocator<std::__1::allocator<std::__1::__hash_node<unsigned long long, void *> *> > >=^^{__hash_node<unsigned long long, void *>}{__bucket_list_deallocator<std::__1::allocator<std::__1::__hash_node<unsigned long long, void *> *> >={__compressed_pair<unsigned long, std::__1::allocator<std::__1::__hash_node<unsigned long long, void *> *> >=Q}}}}{__compressed_pair<std::__1::__hash_node_base<std::__1::__hash_node<unsigned long long, void *> *>, std::__1::allocator<std::__1::__hash_node<unsigned long long, void *> > >={__hash_node_base<std::__1::__hash_node<unsigned long long, void *> *>=^{__hash_node<unsigned long long, void *>}}}{__compressed_pair<unsigned long, std::__1::hash<unsigned long long> >=Q}{__compressed_pair<float, std::__1::equal_to<unsigned long long> >=f}}}{unordered_set<b2Contact *, std::__1::hash<b2Contact *>, std::__1::equal_to<b2Contact *>, std::__1::allocator<b2Contact *> >={__hash_table<b2Contact *, std::__1::hash<b2Contact *>, std::__1::equal_to<b2Contact *>, std::__1::allocator<b2Contact *> >={unique_ptr<std::__1::__hash_node<b2Contact *, void *> *[], std::__1::__bucket_list_deallocator<std::__1::allocator<std::__1::__hash_node<b2Contact *, void *> *> > >={__compressed_pair<std::__1::__hash_node<b2Contact *, void *> **, std::__1::__bucket_list_deallocator<std::__1::allocator<std::__1::__hash_node<b2Contact *, void *> *> > >=^^{__hash_node<b2Contact *, void *>}{__bucket_list_deallocator<std::__1::allocator<std::__1::__hash_node<b2Contact *, void *> *> >={__compressed_pair<unsigned long, std::__1::allocator<std::__1::__hash_node<b2Contact *, void *> *> >=Q}}}}{__compressed_pair<std::__1::__hash_node_base<std::__1::__hash_node<b2Contact *, void *> *>, std::__1::allocator<std::__1::__hash_node<b2Contact *, void *> > >={__hash_node_base<std::__1::__hash_node<b2Contact *, void *> *>=^{__hash_node<b2Contact *, void *>}}}{__compressed_pair<unsigned long, std::__1::hash<b2Contact *> >=Q}{__compressed_pair<float, std::__1::equal_to<b2Contact *> >=f}}}i}^{b2Body}^{b2Joint}ii^{PKCAether}B^{b2DestructionListener}^{b2Draw}fBBBBdf{PKCMechanics=^{b2World}{vector<QuadTree *, std::__1::allocator<QuadTree *> >=^^{QuadTree}^^{QuadTree}{__compressed_pair<QuadTree **, std::__1::allocator<QuadTree *> >=^^{QuadTree}}}}}) _world;
 - (void) removeBody:(id)a;
 - (void) setCollisionDelegate:(id)a;
 - (id) collisionDelegate;
 - (BOOL) stepWithTime:(double)avelocityIterations:(unsigned long long)bpositionIterations:(unsigned long long)c;
 - (id) bodies;
 - (id) init;
 - (void) encodeWithCoder:(id)a;
 - (id) initWithCoder:(id)a;
 - (id) joints;
 - (void) _runBlockOutsideOfTimeStep:(@?)a;
 - (void) enumerateBodiesInRect:({CGRect={CGPoint=dd}{CGSize=dd}})ausingBlock:(@?)b;
 - (void) enumerateBodiesAtPoint:({CGPoint=dd})ausingBlock:(@?)b;
 - (void) enumerateBodiesAlongRayStart:({CGPoint=dd})aend:({CGPoint=dd})busingBlock:(@?)c;
 - ({CGVector=dd}) gravity;
 - (double) speed;
 - (id) contactDelegate;
 - (void) __init__;
 - (void) addBody:(id)a;
 - (void) addJoint:(id)a;
 - (void) setGravity:({CGVector=dd})a;
 - (void) setSpeed:(double)a;
 - (void) setContactDelegate:(id)a;
 - (void) removeAllJoints;
 - (void) removeAllBodies;
 - (void) removeAllFields;
 - (void) removeJoint:(id)a;
 - (3) sampleFieldsAt;
 - (^{PKCAether={vector<std::__1::weak_ptr<PKCField>, std::__1::allocator<std::__1::weak_ptr<PKCField> > >=^{weak_ptr<PKCField>}^{weak_ptr<PKCField>}{__compressed_pair<std::__1::weak_ptr<PKCField> *, std::__1::allocator<std::__1::weak_ptr<PKCField> > >=^{weak_ptr<PKCField>}}}}) aether;
 - (id) bodyAtPoint:({CGPoint=dd})a;
 - (id) bodyInRect:({CGRect={CGPoint=dd}{CGSize=dd}})a;
 - (id) bodyAlongRayStart:({CGPoint=dd})aend:({CGPoint=dd})b;
 - (void) setVelocityThreshold:(double)a;
 - (double) velocityThreshold;
 - (BOOL) hasBodies;
 - (BOOL) hasFields;
 - (void) addField:(id)a;
 - (void) removeField:(id)a;
 - (id) sampleFields:({CGRect={CGPoint=dd}{CGSize=dd}})acategories:(unsigned int)bdataSize:({CGSize=dd})c;
 - ({CGVector=dd}) sampleFields:({CGPoint=dd})a;
 - ({CGVector=dd}) evalForce:(unsigned int)apoint:({CGPoint=dd})b;
 - ({b2Vec2=ff}) _gravity;
 - (BOOL) _doSleep;
 - (id) _bodies;
 - (void) debugDraw:(float)amatrix:((_GLKMatrix4={?=ffffffffffffffff}[16f]))bshowsPhysics:(BOOL)cshowsOutlineInterior:(BOOL)dshowsFields:(BOOL)e;
 - (r^{PKDebugDrawPacket={vector<PKPoint, std::__1::allocator<PKPoint> >=^{?}^{?}{__compressed_pair<PKPoint *, std::__1::allocator<PKPoint> >=^{?}}}{vector<PKDebugDrawPacket::color4, std::__1::allocator<PKDebugDrawPacket::color4> >=^{?}^{?}{__compressed_pair<PKDebugDrawPacket::color4 *, std::__1::allocator<PKDebugDrawPacket::color4> >=^{?}}}}) debugDrawPacket;
 - (void) set_bodies:(id)a;
 - (void) set_doSleep:(BOOL)a;
 - (void) set_gravity:({b2Vec2=ff})a;


@end
