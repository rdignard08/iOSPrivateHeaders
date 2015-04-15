
@interface UIDynamicItemBehavior : UIDynamicBehavior {

    BOOL _useDefaultViewPropertiesApplier;
    BOOL _useCircularBoundingBox;
    {?="elasticityChanged"b1"frictionChanged"b1"densityChanged"b1"resistanceChanged"b1"angularResistanceChanged"b1"rotationEnabledChanged"b1"useDefaultViewPropertiesApplierChanged"b1} _stateFlags;
    NSMapTable* _cachedAngularVelocities;
    NSMapTable* _cachedLinearVelocities;
    BOOL _allowsRotation;
    double _elasticity;
    double _friction;
    double _density;
    double _resistance;
    double _angularResistance;
}

 - (void) removeItem:(id)a;
 - (id) description;
 - (void) dealloc;
 - (id) items;
 - (id) initWithItems:(id)a;
 - (void) _associate;
 - (void) _dissociate;
 - (void) setElasticity:(double)a;
 - (void) setResistance:(double)a;
 - (double) elasticity;
 - (double) resistance;
 - (double) angularResistance;
 - (void) _configureBody:(id)aforView:(id)b;
 - (void) _reevaluate:(unsigned long long)a;
 - (BOOL) _useCircularBoundingBox;
 - (void) _setUseCircularBoundingBox:(BOOL)a;
 - (void) setAngularResistance:(double)a;
 - (void) addLinearVelocity:({CGPoint=dd})aforItem:(id)b;
 - ({CGPoint=dd}) linearVelocityForItem:(id)a;
 - (void) _setPosition:({CGPoint=dd})aforItem:(id)b;
 - ({CGPoint=dd}) _positionForItem:(id)a;
 - (void) _setAngle:(double)aforItem:(id)b;
 - (double) _angleForItem:(id)a;
 - (void) addAngularVelocity:(double)aforItem:(id)b;
 - (double) angularVelocityForItem:(id)a;
 - (double) _elasticityForItem:(id)a;
 - (double) _frictionForItem:(id)a;
 - (double) _densityForItem:(id)a;
 - (double) _resistanceForItem:(id)a;
 - (double) _angularResistanceForItem:(id)a;
 - (double) _massForItem:(id)a;
 - (BOOL) _rotationEnabledForItem:(id)a;
 - (void) applyImpulse:({CGPoint=dd})atoItem:(id)b;
 - (BOOL) useDefaultViewPropertiesApplier;
 - (void) setUseDefaultViewPropertiesApplier:(BOOL)a;
 - (id) init;
 - (void) _commonInit;
 - (void) addItem:(id)a;
 - (BOOL) allowsRotation;
 - (double) friction;
 - (double) density;
 - (void) setAllowsRotation:(BOOL)a;
 - (void) setFriction:(double)a;
 - (void) setDensity:(double)a;


@end
