
@interface UIDynamicBehavior : NSObject {

    @"UIDynamicAnimator" _context;
    @"NSMutableArray" _items;
    @"NSMutableArray" _behaviors;
    @"NSMutableArray" _addedBehaviors;
    BOOL __isPrimitiveBehavior;
    @? _action;
}
@property (nonatomic, copy, readonly) NSArray* childBehaviors;
@property (nonatomic, copy, readwrite) NSNumber* action;
@property (nonatomic, assign, readonly) UIDynamicAnimator* dynamicAnimator;
@property (nonatomic, assign, readwrite, _isPrimitiveBehavior:) NSNumber* _isPrimitiveBehavior;
 + (void) initialize;

 - (id) _init:(BOOL)a;
 - (id) description;
 - (void) dealloc;
 - (@?) action;
 - (id) _context;
 - (id) items;
 - (void) setAction:(@?)a;
 - (id) _items;
 - (void) _associate;
 - (void) _dissociate;
 - (void) _changedParameterForBody:(id)a;
 - (void) _reevaluate:(unsigned long long)a;
 - (id) _itemsDescription;
 - (void) _setItems:(id)a;
 - (void) willMoveToAnimator:(id)a;
 - (id) childBehaviors;
 - (void) _step;
 - (BOOL) allowsAnimatorToStop;
 - (void) _isPrimitiveBehavior:(BOOL)a;
 - (BOOL) _isPrimitiveBehavior;
 - (id) dynamicAnimator;
 - (void) addChildBehavior:(id)a;
 - (void) removeChildBehavior:(id)a;
 - (void) _setContext:(id)a;
 - (id) init;


@end
