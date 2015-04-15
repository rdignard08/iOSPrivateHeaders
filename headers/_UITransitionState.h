
@interface _UITransitionState : NSObject {

    long long _transitionDirection;
    @? _completion;
    NSDate* _beginDate;
}
@property (nonatomic, assign, readonly) NSNumber* transitionDirection;
@property (nonatomic, assign, readonly) NSNumber* effectiveTransitionDirection;
@property (nonatomic, assign, readonly) NSDate* beginDate;
@property (nonatomic, assign, readonly, getter=isActive) NSNumber* active;

 - (BOOL) isActive;
 - (id) description;
 - (void) dealloc;
 - (id) initWithTransitionDirection:(long long)a completion:(@?)b ;
 - (long long) transitionDirection;
 - (void) cleanupWithFinishedState:(BOOL)a completedState:(BOOL)b ;
 - (BOOL) isCompatibleWithTransitionInDirection:(long long)a ;
 - (long long) effectiveTransitionDirection;
 - (id) beginDate;
 - (void) markBeginDate;


@end
