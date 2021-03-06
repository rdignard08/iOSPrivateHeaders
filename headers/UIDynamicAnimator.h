
@interface UIDynamicAnimator : NSObject {

    PKExtendedPhysicsWorld* _world;
    CADisplayLink* _displaylink;
    double _elapsedTime;
    double _realElapsedTime;
    double _lastUpdateTime;
    double _lastInterval;
    long long _ticks;
    CALayer* _debugLayer;
    NSMutableDictionary* _bodies;
    NSMutableArray* _topLevelBehaviors;
    NSMutableSet* _registeredBehaviors;
    NSMutableSet* _behaviorsToRemove;
    NSMutableSet* _behaviorsToAdd;
    NSMutableArray* _postSolverActions;
    NSMutableArray* _beginContacts;
    NSMutableArray* _endContacts;
    BOOL _isInWorldStepMethod;
    BOOL _needsLocalBehaviorReevaluation;
    BOOL _stopping;
    unsigned long long _referenceSystemType;
    unsigned long long _integralization;
    {?="delegateImplementsDynamicAnimatorDidPause"b1"delegateImplementsDynamicAnimatorWillResume"b1} _stateFlags;
    double _accuracy;
    int _registeredCollisionGroups;
    int _registeredImplicitBounds;
    {CGRect="origin"{CGPoint="x"d"y"d}"size"{CGSize="width"d"height"d}} _referenceSystemBounds;
    <_UIDynamicReferenceSystem>* _referenceSystem;
    int _debugInterval;
    @? _action;
    <UIDynamicAnimatorDelegate>* _delegate;
    BOOL _disableDisplayLink;
    double _speed;
    UIDynamicAnimatorTicker* _ticker;
}
@property (nonatomic, assign, readonly) UIView* referenceView;
@property (nonatomic, copy, readonly) NSArray* behaviors;
@property (nonatomic, assign, readonly, getter=isRunning) NSNumber* running;
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
 - (void) setDelegate:(id)a ;
 - (id) recursiveDescription;
 - (id) _bodyForItem:(id)a ;
 - (void) _tickle;
 - (id) _world;
 - (id) _registerBodyForItem:(id)a ;
 - (void) _unregisterBodyForItem:(id)a action:(@?)b ;
 - (void) removeAllBehaviors;
 - (id) initWithReferenceView:(id)a ;
 - (void) addBehavior:(id)a ;
 - (BOOL) _animatorStep:(double)a ;
 - (id) _registerBodyForItem:(id)a shape:(unsigned long long)b ;
 - (void) _shouldReevaluateLocalBehaviors;
 - (id) layoutAttributesForSupplementaryViewOfKind:(id)a atIndexPath:(id)b ;
 - (id) layoutAttributesForDecorationViewOfKind:(id)a atIndexPath:(id)b ;
 - (id) initWithCollectionViewLayout:(id)a ;
 - (void) _setRunning:(BOOL)a ;
 - (void) _displayLinkTick:(id)a ;
 - (id) initWithReferenceSystem:(id)a ;
 - (id) referenceView;
 - (void) _clearReferenceView;
 - (double) elapsedTime;
 - (id) _referenceSystem;
 - (void) _traverseBehaviorHierarchy:(@?)a ;
 - (void) _checkBehavior:(id)a ;
 - (void) _registerBehavior:(id)a ;
 - (void) _unregisterBehavior:(id)a ;
 - (void) _setupWorld;
 - (id) _keyForItem:(id)a ;
 - (void) _runBlockPostSolverIfNeeded:(@?)a ;
 - (void) updateItemUsingCurrentState:(id)a ;
 - (void) _defaultMapper:(id)a position:({CGPoint=dd})b angle:(double)c itemType:(unsigned long long)d ;
 - (BOOL) _isWorldActive;
 - (void) _stop;
 - (void) setTicker:(id)a ;
 - (id) ticker;
 - (void) _evaluateLocalBehaviors;
 - (void) _reevaluateImplicitBounds;
 - (void) _reportBeginContacts;
 - (void) _reportEndContacts;
 - (void) _preSolverStep;
 - (void) _postSolverStep;
 - (void) _setReferenceSystem:(id)a ;
 - (double) _ptmRatio;
 - (void) removeBehavior:(id)a ;
 - (void) _registerImplicitBounds;
 - (void) _unregisterImplicitBounds;
 - (int) _registerCollisionGroup;
 - (void) _unregisterCollisionGroup;
 - (void) _setAnimatorIntegralization:(unsigned long long)a ;
 - (unsigned long long) _animatorIntegralization;
 - (id) itemsInRect:({CGRect={CGPoint=dd}{CGSize=dd}})a ;
 - (id) layoutAttributesForCellAtIndexPath:(id)a ;
 - (void) updateItemFromCurrentState:(id)a ;
 - (void) _setSpeed:(double)a ;
 - (double) _speed;
 - (void) _setAction:(@?)a ;
 - (void) _setDebugInterval:(int)a ;
 - (int) _debugInterval;
 - (void) _setAlwaysDisableDisplayLink:(BOOL)a ;
 - (BOOL) _alwaysDisableDisplayLink;
 - (double) _animatorInterval;
 - (long long) _ticks;
 - (double) _realElapsedTime;
 - (void) setReferenceView:(id)a ;
 - ({CGRect={CGPoint=dd}{CGSize=dd}}) _referenceSystemBounds;
 - (unsigned long long) _referenceSystemType;
 - (id) init;
 - (id) delegate;
 - (id) _delegate;
 - (void) _setDelegate:(id)a ;
 - (BOOL) isRunning;
 - (void) _start;
 - (id) behaviors;
 - (void) didBeginContact:(id)a ;
 - (void) didEndContact:(id)a ;


@end
