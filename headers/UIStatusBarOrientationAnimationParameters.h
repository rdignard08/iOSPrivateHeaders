
@interface UIStatusBarOrientationAnimationParameters : UIStatusBarAnimationParameters {

    i _orientationAnimation;
}

 - (id) initWithDefaultParameters;
 - (void) setOrientationAnimation:(i)a;
 - (i) orientationAnimation;
 - (BOOL) shouldAnimate;


@end
