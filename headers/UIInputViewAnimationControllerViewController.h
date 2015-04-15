
@protocol UIInputViewAnimationController;
@interface UIInputViewAnimationControllerViewController : NSObject <UIInputViewAnimationController> {

    @"<UIViewControllerContextTransitioning>" _context;
    @"<UIViewControllerAnimatedTransitioning_Keyboard>" _animator;
    @"UIInputViewSetPlacement" _endPlacement;
}
 + (id) controllerWithContext:(id)a;

 - (void) dealloc;
 - (id) prepareAnimationWithHost:(id)astartPlacement:(id)bendPlacement:(id)c;
 - (void) performAnimationWithHost:(id)acontext:(id)b;
 - (void) completeAnimationWithHost:(id)acontext:(id)b;
 - (id) initWithContext:(id)a;


@end
