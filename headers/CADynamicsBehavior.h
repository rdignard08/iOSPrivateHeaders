
@interface CADynamicsBehavior : CABehavior {

}
 + (id) defaultValueForKey:(id)a;

 - (void) setSprings:(id)a ;
 - (void) setReactsToCollisions:(BOOL)a ;
 - (^{Object=^^?{Atomic={?=i}}}) CA_copyRenderValue;
 - (id) springs;
 - (id) forceFields;
 - (double) timeStep;
 - (double) minimumTimeStep;
 - (double) stoppedVelocity;
 - (double) stoppedAngularVelocity;
 - (double) collisionInterval;
 - (double) springScale;
 - (double) drag;
 - (double) angularDrag;
 - (BOOL) reactsToCollisions;
 - (void) setForceFields:(id)a ;
 - (void) setTimeStep:(double)a ;
 - (void) setMinimumTimeStep:(double)a ;
 - (void) setStoppedVelocity:(double)a ;
 - (void) setStoppedAngularVelocity:(double)a ;
 - (void) setCollisionInterval:(double)a ;
 - (void) setSpringScale:(double)a ;
 - (void) setDrag:(double)a ;
 - (void) setAngularDrag:(double)a ;


@end
