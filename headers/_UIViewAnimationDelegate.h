
@interface _UIViewAnimationDelegate : NSObject {

    @? _completionBlock;
}

 - (void) dealloc;
 - (id) initWithCompletionBlock:(@?)a;
 - (void) animationDidStop:(id)afinished:(BOOL)b;


@end
