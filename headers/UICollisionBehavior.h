
@interface UICollisionBehavior : UIDynamicBehavior {

    BOOL _usesImplicitBounds;
    {UIEdgeInsets="top"d"left"d"bottom"d"right"d} _implicitBoundsInsets;
    PKExtendedPhysicsBody* _implicitBoundsBody;
    NSMutableDictionary* _boundaryBodies;
    NSMutableDictionary* _boundaryPaths;
    unsigned long long _collisionMode;
    <UICollisionBehaviorDelegate>* _collisionDelegate;
    unsigned int _groupVID;
    unsigned int _groupBID;
    {?="delegateBeganWithItem"b1"delegateEndedWithItem"b1"delegateBeganWithBoundary"b1"delegateEndedWithBoundary"b1} _collisionBehaviorFlags;
}

 - (void) removeItem:(id)a;
 - (id) description;
 - (void) dealloc;
 - (id) items;
 - (id) initWithItems:(id)a;
 - (void) _associate;
 - (void) _dissociate;
 - (void) addBoundaryWithIdentifier:(id)afromPoint:({CGPoint=dd})btoPoint:({CGPoint=dd})c;
 - (void) setCollisionDelegate:(id)a;
 - (void) _reevaluate:(unsigned long long)a;
 - (id) collisionDelegate;
 - (void) _didBeginContact:(id)a;
 - (void) _didEndContact:(id)a;
 - (void) _addItem:(id)a;
 - (void) _setCollisions:(BOOL)aforBody:(id)bisEdge:(BOOL)c;
 - (unsigned long long) collisionMode;
 - (void) _setupImplicitBoundaries;
 - (void) _applySettings;
 - (void) _setupExplicitBoundaries;
 - (void) _removeImplicitBoundaries;
 - (void) _removeExplicitBoundaries;
 - (void) _setTranslatesReferenceItemBounds:(BOOL)aintoBoundaryWithInsets:({UIEdgeInsets=dddd})b;
 - (BOOL) translatesReferenceBoundsIntoBoundary;
 - (void) setCollisionMode:(unsigned long long)a;
 - (void) setTranslatesReferenceBoundsIntoBoundary:(BOOL)a;
 - (void) setTranslatesReferenceBoundsIntoBoundaryWithInsets:({UIEdgeInsets=dddd})a;
 - (void) addBoundaryWithIdentifier:(id)aforPath:(id)b;
 - (id) boundaryWithIdentifier:(id)a;
 - (void) removeBoundaryWithIdentifier:(id)a;
 - (id) boundaryIdentifiers;
 - (void) removeAllBoundaries;
 - (id) init;
 - (void) addItem:(id)a;


@end
