
@protocol UIViewControllerAnimatedTransitioning;
@interface _UIAlertControllerAnimatedTransitioning : NSObject <UIViewControllerAnimatedTransitioning> {

    BOOL _presentation;
}
@property (atomic, assign, readwrite, isPresentation) NSNumber* presentation;

 - (double) transitionDuration:(id)a;
 - (void) animateTransition:(id)a;
 - (BOOL) isPresentation;
 - (void) setPresentation:(BOOL)a;


@end
