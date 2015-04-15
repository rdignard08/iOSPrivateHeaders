
@interface _UIViewAnimationDelegate : NSObject {

    @? _completionBlock;
}

 - (void) dealloc;
 - (id) initWithCompletionBlock:(@?)a ;
 - (void) animationDidStop:(id)a finished:(BOOL)b ;


@end
