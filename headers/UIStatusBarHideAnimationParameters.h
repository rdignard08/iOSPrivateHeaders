
@interface UIStatusBarHideAnimationParameters : UIStatusBarAnimationParameters {

    int _hideAnimation;
    double _additionalSlideHeight;
}

 - (id) initWithDefaultParameters;
 - (void) setHideAnimation:(int)a ;
 - (int) hideAnimation;
 - (BOOL) shouldAnimate;
 - (double) additionalSlideHeight;
 - (void) setAdditionalSlideHeight:(double)a ;


@end
