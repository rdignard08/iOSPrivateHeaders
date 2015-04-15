
@interface PKExtendedPhysicsBody : PKPhysicsBody {

    q _associations;
    d _areaFactor;
}
 + (id) bodyWithRectangleOfSize:({CGSize=dd})a;
 + (id) bodyWithCircleOfRadius:(d)a;
 + (id) bodyWithEdgeLoopFromPath:(^{CGPath=})a;
 + (id) bodyWithEdgeFromPoint:({CGPoint=dd})atoPoint:({CGPoint=dd})b;
 + (id) bodyWithPolygonFromPath:(^{CGPath=})a;
 + (id) bodyWithEdgeChainFromPath:(^{CGPath=})a;

 - (id) description;
 - (void) setNormalizedDensity:(d)a;
 - (d) normalizedDensity;
 - (BOOL) dissociate;
 - (void) associate;
 - (id) initWithRectangleOfSize:({CGSize=dd})a;
 - (id) init;


@end
