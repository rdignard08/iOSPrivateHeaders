
@protocol UIInputViewAnimationController;
@interface UIInputViewAnimationControllerSlide : NSObject <UIInputViewAnimationController> {

    int _slide;
}

 - (id) prepareAnimationWithHost:(id)a startPlacement:(id)b endPlacement:(id)c ;
 - (void) performAnimationWithHost:(id)a context:(id)b ;
 - (void) completeAnimationWithHost:(id)a context:(id)b ;
 - (id) initWithSlide:(int)a ;
 - (id) placementForSlideStart:(BOOL)a ;


@end
