
@protocol UIInputViewAnimationController;
@interface UIInputViewAnimationControllerSlide : NSObject <UIInputViewAnimationController> {

    int _slide;
}

 - (id) prepareAnimationWithHost:(id)astartPlacement:(id)bendPlacement:(id)c;
 - (void) performAnimationWithHost:(id)acontext:(id)b;
 - (void) completeAnimationWithHost:(id)acontext:(id)b;
 - (id) initWithSlide:(int)a;
 - (id) placementForSlideStart:(BOOL)a;


@end
