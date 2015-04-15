
@interface CADynamicsBehavior : CABehavior {

}
 + (id) defaultValueForKey:(id)a;

 - (void) setSprings:(id)a;
 - (void) setReactsToCollisions:(BOOL)a;
 - (^{Object=^^?{Atomic={?=i}}}) CA_copyRenderValue;
 - (id) springs;
 - (id) forceFields;
 - (d) timeStep;
 - (d) minimumTimeStep;
 - (d) stoppedVelocity;
 - (d) stoppedAngularVelocity;
 - (d) collisionInterval;
 - (d) springScale;
 - (d) drag;
 - (d) angularDrag;
 - (BOOL) reactsToCollisions;
 - (void) setForceFields:(id)a;
 - (void) setTimeStep:(d)a;
 - (void) setMinimumTimeStep:(d)a;
 - (void) setStoppedVelocity:(d)a;
 - (void) setStoppedAngularVelocity:(d)a;
 - (void) setCollisionInterval:(d)a;
 - (void) setSpringScale:(d)a;
 - (void) setDrag:(d)a;
 - (void) setAngularDrag:(d)a;


@end
