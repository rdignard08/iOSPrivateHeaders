
@interface _UITransitionState : NSObject {

    q _transitionDirection;
    @? _completion;
    @"NSDate" _beginDate;
}
@property (nonatomic, assign, readonly) NSNumber* transitionDirection;
@property (nonatomic, assign, readonly) NSNumber* effectiveTransitionDirection;
@property (nonatomic, assign, readonly) NSDate* beginDate;
@property (nonatomic, assign, readonly, isActive) NSNumber* active;

 - (BOOL) isActive;
 - (id) description;
 - (void) dealloc;
 - (id) initWithTransitionDirection:(q)acompletion:(@?)b;
 - (q) transitionDirection;
 - (void) cleanupWithFinishedState:(BOOL)acompletedState:(BOOL)b;
 - (BOOL) isCompatibleWithTransitionInDirection:(q)a;
 - (q) effectiveTransitionDirection;
 - (id) beginDate;
 - (void) markBeginDate;


@end
