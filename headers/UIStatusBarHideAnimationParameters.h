
@interface UIStatusBarHideAnimationParameters : UIStatusBarAnimationParameters {

    i _hideAnimation;
    d _additionalSlideHeight;
}

 - (id) initWithDefaultParameters;
 - (void) setHideAnimation:(i)a;
 - (i) hideAnimation;
 - (BOOL) shouldAnimate;
 - (d) additionalSlideHeight;
 - (void) setAdditionalSlideHeight:(d)a;


@end
