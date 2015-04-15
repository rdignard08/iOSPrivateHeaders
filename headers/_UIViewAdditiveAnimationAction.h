
@protocol CAAction;
@interface _UIViewAdditiveAnimationAction : NSObject <CAAction> {

    CAAnimation* _pendingAnimation;
}
@property (nonatomic, retain, readonly) CAAnimation* pendingAnimation;

 - (void) dealloc;
 - (id) pendingAnimation;
 - (id) initWithPendingAnimation:(id)a ;
 - (void) runActionForKey:(id)a object:(id)b arguments:(id)c ;


@end
