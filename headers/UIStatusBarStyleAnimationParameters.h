
@interface UIStatusBarStyleAnimationParameters : UIStatusBarAnimationParameters {

    i _styleAnimation;
}

 - (id) initWithDefaultParameters;
 - (void) setStyleAnimation:(i)a;
 - (BOOL) shouldAnimate;
 - (i) styleAnimation;


@end
