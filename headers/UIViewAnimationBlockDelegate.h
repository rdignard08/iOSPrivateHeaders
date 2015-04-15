
@interface UIViewAnimationBlockDelegate : NSObject {

    BOOL _didBeginBlockAnimation;
    BOOL _allowUserInteraction;
    BOOL _isZeroDuration;
    BOOL _allowsUserInteractionToCutOffEndOfAnimation;
    BOOL _animationDidStopSent;
    @? _start;
    @? _completion;
}
@property (nonatomic, assign, readonly) NSNumber* _allowsUserInteraction;
 + (void) setAnimationBlockDelegateWithDuration:(d)aoptions:(Q)bstart:(@?)ccompletion:(@?)d;

 - (void) dealloc;
 - (BOOL) _allowsUserInteraction;
 - (BOOL) _allowsUserInteractionToCutOffEndOfAnimation;
 - (void) _willBeginBlockAnimation:(id)acontext:(id)b;
 - (void) _didEndBlockAnimation:(id)afinished:(id)bcontext:(id)c;
 - (void) _sendDeferredCompletion:(id)a;


@end
