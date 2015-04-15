
@interface _UIRefreshControlAnimationDelegate : NSObject {

    @? block;
}
 + (id) delegateWithCompletionBlock:(@?)a;

 - (void) dealloc;
 - (void) animationDidStop:(id)afinished:(BOOL)b;


@end
