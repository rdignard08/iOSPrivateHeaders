
@interface _UIViewControllerKeyboardAnimationStyleInfo : NSObject {

    BOOL _isAnimationCompleting;
    @? _previousCompleteHandler;
}
@property (nonatomic, copy, readwrite) NSNumber* previousCompleteHandler;
@property (nonatomic, assign, readwrite) NSNumber* isAnimationCompleting;

 - (void) dealloc;
 - (@?) previousCompleteHandler;
 - (void) setPreviousCompleteHandler:(@?)a;
 - (BOOL) isAnimationCompleting;
 - (void) setIsAnimationCompleting:(BOOL)a;


@end
