
@interface UIDynamicItemBehavior : UIDynamicBehavior {

    BOOL _useDefaultViewPropertiesApplier;
    BOOL _useCircularBoundingBox;
    {?="elasticityChanged"b1"frictionChanged"b1"densityChanged"b1"resistanceChanged"b1"angularResistanceChanged"b1"rotationEnabledChanged"b1"useDefaultViewPropertiesApplierChanged"b1} _stateFlags;
    @"NSMapTable" _cachedAngularVelocities;
    @"NSMapTable" _cachedLinearVelocities;
    BOOL _allowsRotation;
    d _elasticity;
    d _friction;
    d _density;
    d _resistance;
    d _angularResistance;
}

 - (void) removeItem:(id)a;
 - (id) description;
 - (void) dealloc;
 - (id) items;
 - (id) initWithItems:(id)a;
 - (void) _associate;
 - (void) _dissociate;
 - (void) setElasticity:(d)a;
 - (void) setResistance:(d)a;
 - (d) elasticity;
 - (d) resistance;
 - (d) angularResistance;
 - (void) _configureBody:(id)aforView:(id)b;
 - (void) _reevaluate:(Q)a;
 - (BOOL) _useCircularBoundingBox;
 - (void) _setUseCircularBoundingBox:(BOOL)a;
 - (void) setAngularResistance:(d)a;
 - (void) addLinearVelocity:({CGPoint=dd})aforItem:(id)b;
 - ({CGPoint=dd}) linearVelocityForItem:(id)a;
 - (void) _setPosition:({CGPoint=dd})aforItem:(id)b;
 - ({CGPoint=dd}) _positionForItem:(id)a;
 - (void) _setAngle:(d)aforItem:(id)b;
 - (d) _angleForItem:(id)a;
 - (void) addAngularVelocity:(d)aforItem:(id)b;
 - (d) angularVelocityForItem:(id)a;
 - (d) _elasticityForItem:(id)a;
 - (d) _frictionForItem:(id)a;
 - (d) _densityForItem:(id)a;
 - (d) _resistanceForItem:(id)a;
 - (d) _angularResistanceForItem:(id)a;
 - (d) _massForItem:(id)a;
 - (BOOL) _rotationEnabledForItem:(id)a;
 - (void) applyImpulse:({CGPoint=dd})atoItem:(id)b;
 - (BOOL) useDefaultViewPropertiesApplier;
 - (void) setUseDefaultViewPropertiesApplier:(BOOL)a;
 - (id) init;
 - (void) _commonInit;
 - (void) addItem:(id)a;
 - (BOOL) allowsRotation;
 - (d) friction;
 - (d) density;
 - (void) setAllowsRotation:(BOOL)a;
 - (void) setFriction:(d)a;
 - (void) setDensity:(d)a;


@end
