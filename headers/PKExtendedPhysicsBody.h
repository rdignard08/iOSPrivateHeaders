
@interface PKExtendedPhysicsBody : PKPhysicsBody {

    long long _associations;
    double _areaFactor;
}
 + (id) bodyWithRectangleOfSize:({CGSize=dd})a;
 + (id) bodyWithCircleOfRadius:(double)a;
 + (id) bodyWithEdgeLoopFromPath:(^{CGPath=})a;
 + (id) bodyWithEdgeFromPoint:({CGPoint=dd})atoPoint:({CGPoint=dd})b;
 + (id) bodyWithPolygonFromPath:(^{CGPath=})a;
 + (id) bodyWithEdgeChainFromPath:(^{CGPath=})a;

 - (id) description;
 - (void) setNormalizedDensity:(double)a ;
 - (double) normalizedDensity;
 - (BOOL) dissociate;
 - (void) associate;
 - (id) initWithRectangleOfSize:({CGSize=dd})a ;
 - (id) init;


@end
