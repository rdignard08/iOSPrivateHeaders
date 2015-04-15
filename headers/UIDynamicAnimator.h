
@interface UIDynamicAnimator : NSObject {

    @"PKExtendedPhysicsWorld" _world;
    @"CADisplayLink" _displaylink;
    d _elapsedTime;
    d _realElapsedTime;
    d _lastUpdateTime;
    d _lastInterval;
    q _ticks;
    @"CALayer" _debugLayer;
    @"NSMutableDictionary" _bodies;
    @"NSMutableArray" _topLevelBehaviors;
    @"NSMutableSet" _registeredBehaviors;
    @"NSMutableSet" _behaviorsToRemove;
    @"NSMutableSet" _behaviorsToAdd;
    @"NSMutableArray" _postSolverActions;
    @"NSMutableArray" _beginContacts;
    @"NSMutableArray" _endContacts;
    BOOL _isInWorldStepMethod;
    BOOL _needsLocalBehaviorReevaluation;
    BOOL _stopping;
    Q _referenceSystemType;
    Q _integralization;
    {?="delegateImplementsDynamicAnimatorDidPause"b1"delegateImplementsDynamicAnimatorWillResume"b1} _stateFlags;
    d _accuracy;
    i _registeredCollisionGroups;
    i _registeredImplicitBounds;
    {CGRect="origin"{CGPoint="x"d"y"d}"size"{CGSize="width"d"height"d}} _referenceSystemBounds;
    @"<_UIDynamicReferenceSystem>" _referenceSystem;
    i _debugInterval;
    @? _action;
    @"<UIDynamicAnimatorDelegate>" _delegate;
    BOOL _disableDisplayLink;
    d _speed;
    @"UIDynamicAnimatorTicker" _ticker;
}
@property (nonatomic, assign, readonly) UIView* referenceView;
@property (nonatomic, copy, readonly) NSArray* behaviors;
@property (nonatomic, assign, readonly, isRunning) NSNumber* running;
@property (nonatomic, assign, readwrite) NSNumber* delegate;
@property (nonatomic, retain, readwrite) UIDynamicAnimatorTicker* ticker;
 + (void) initialize;
 + (void) _referenceViewSizeChanged:(id)a;
 + (void) _clearReferenceViewFromAnimators:(id)a;
 + (void) _registerAnimator:(id)a;
 + (void) _unregisterAnimator:(id)a;
 + (id) _allDynamicAnimators;

 - (id) description;
 - (void) dealloc;
 - (void) setDelegate:(id)a;
 - (id) recursiveDescription;
 - (id) _bodyForItem:(id)a;
 - (void) _tickle;
 - (id) _world;
 - (id) _registerBodyForItem:(id)a;
 - (void) _unregisterBodyForItem:(id)aaction:(@?)b;
 - (void) removeAllBehaviors;
 - (id) initWithReferenceView:(id)a;
 - (void) addBehavior:(id)a;
 - (BOOL) _animatorStep:(d)a;
 - (id) _registerBodyForItem:(id)ashape:(Q)b;
 - (void) _shouldReevaluateLocalBehaviors;
 - (id) layoutAttributesForSupplementaryViewOfKind:(id)aatIndexPath:(id)b;
 - (id) layoutAttributesForDecorationViewOfKind:(id)aatIndexPath:(id)b;
 - (id) initWithCollectionViewLayout:(id)a;
 - (void) _setRunning:(BOOL)a;
 - (void) _displayLinkTick:(id)a;
 - (id) initWithReferenceSystem:(id)a;
 - (id) referenceView;
 - (void) _clearReferenceView;
 - (d) elapsedTime;
 - (id) _referenceSystem;
 - (void) _traverseBehaviorHierarchy:(@?)a;
 - (void) _checkBehavior:(id)a;
 - (void) _registerBehavior:(id)a;
 - (void) _unregisterBehavior:(id)a;
 - (void) _setupWorld;
 - (id) _keyForItem:(id)a;
 - (void) _runBlockPostSolverIfNeeded:(@?)a;
 - (void) updateItemUsingCurrentState:(id)a;
 - (void) _defaultMapper:(id)aposition:({CGPoint=dd})bangle:(d)citemType:(Q)d;
 - (BOOL) _isWorldActive;
 - (void) _stop;
 - (void) setTicker:(id)a;
 - (id) ticker;
 - (void) _evaluateLocalBehaviors;
 - (void) _reevaluateImplicitBounds;
 - (void) _reportBeginContacts;
 - (void) _reportEndContacts;
 - (void) _preSolverStep;
 - (void) _postSolverStep;
 - (void) _setReferenceSystem:(id)a;
 - (d) _ptmRatio;
 - (void) removeBehavior:(id)a;
 - (void) _registerImplicitBounds;
 - (void) _unregisterImplicitBounds;
 - (i) _registerCollisionGroup;
 - (void) _unregisterCollisionGroup;
 - (void) _setAnimatorIntegralization:(Q)a;
 - (Q) _animatorIntegralization;
 - (id) itemsInRect:({CGRect={CGPoint=dd}{CGSize=dd}})a;
 - (id) layoutAttributesForCellAtIndexPath:(id)a;
 - (void) updateItemFromCurrentState:(id)a;
 - (void) _setSpeed:(d)a;
 - (d) _speed;
 - (void) _setAction:(@?)a;
 - (void) _setDebugInterval:(i)a;
 - (i) _debugInterval;
 - (void) _setAlwaysDisableDisplayLink:(BOOL)a;
 - (BOOL) _alwaysDisableDisplayLink;
 - (d) _animatorInterval;
 - (q) _ticks;
 - (d) _realElapsedTime;
 - (void) setReferenceView:(id)a;
 - ({CGRect={CGPoint=dd}{CGSize=dd}}) _referenceSystemBounds;
 - (Q) _referenceSystemType;
 - (id) init;
 - (id) delegate;
 - (id) _delegate;
 - (void) _setDelegate:(id)a;
 - (BOOL) isRunning;
 - (void) _start;
 - (id) behaviors;
 - (void) didBeginContact:(id)a;
 - (void) didEndContact:(id)a;


@end