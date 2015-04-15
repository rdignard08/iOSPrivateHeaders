
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
 + (void) setAnimationBlockDelegateWithDuration:(double)aoptions:(unsigned long long)bstart:(@?)ccompletion:(@?)d;

 - (void) dealloc;
 - (BOOL) _allowsUserInteraction;
 - (BOOL) _allowsUserInteractionToCutOffEndOfAnimation;
 - (void) _willBeginBlockAnimation:(id)a context:(id)b ;
 - (void) _didEndBlockAnimation:(id)a finished:(id)b context:(id)c ;
 - (void) _sendDeferredCompletion:(id)a ;


@end
