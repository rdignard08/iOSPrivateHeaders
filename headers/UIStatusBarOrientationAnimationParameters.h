
@interface UIStatusBarOrientationAnimationParameters : UIStatusBarAnimationParameters {

    int _orientationAnimation;
}

 - (id) initWithDefaultParameters;
 - (void) setOrientationAnimation:(int)a;
 - (int) orientationAnimation;
 - (BOOL) shouldAnimate;


@end
