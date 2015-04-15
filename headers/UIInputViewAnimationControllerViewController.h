
@protocol UIInputViewAnimationController;
@interface UIInputViewAnimationControllerViewController : NSObject <UIInputViewAnimationController> {

    <UIViewControllerContextTransitioning>* _context;
    <UIViewControllerAnimatedTransitioning_Keyboard>* _animator;
    UIInputViewSetPlacement* _endPlacement;
}
 + (id) controllerWithContext:(id)a;

 - (void) dealloc;
 - (id) prepareAnimationWithHost:(id)a startPlacement:(id)b endPlacement:(id)c ;
 - (void) performAnimationWithHost:(id)a context:(id)b ;
 - (void) completeAnimationWithHost:(id)a context:(id)b ;
 - (id) initWithContext:(id)a ;


@end
