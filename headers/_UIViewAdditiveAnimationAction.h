
@protocol CAAction;
@interface _UIViewAdditiveAnimationAction : NSObject <CAAction> {

    CAAnimation* _pendingAnimation;
}
@property (nonatomic, retain, readonly) CAAnimation* pendingAnimation;

 - (void) dealloc;
 - (id) pendingAnimation;
 - (id) initWithPendingAnimation:(id)a;
 - (void) runActionForKey:(id)aobject:(id)barguments:(id)c;


@end
