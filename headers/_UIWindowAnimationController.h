
@protocol UIViewControllerAnimatedTransitioning;
@interface _UIWindowAnimationController : NSObject <UIViewControllerAnimatedTransitioning> {

    BOOL _shouldCrossfade;
    UIWindow* _window;
}
@property (nonatomic, assign, readwrite) UIWindow* window;
@property (nonatomic, assign, readwrite) NSNumber* shouldCrossfade;
 + (id) animationControllerWithWindow:(id)a;

 - (double) transitionDuration:(id)a ;
 - (void) animateTransition:(id)a ;
 - (void) setWindow:(id)a ;
 - (id) initWithWindow:(id)a ;
 - (BOOL) shouldCrossfade;
 - (void) _performCrossfadeAnimationWithContext:(id)a windowGeometryUpdatingBlock:(@?)b ;
 - (void) _performLayoutAnimationWithContext:(id)a windowGeometryUpdatingBlock:(@?)b ;
 - (void) setShouldCrossfade:(BOOL)a ;
 - (id) window;


@end
