
@interface UIStatusBarStyleAnimationParameters : UIStatusBarAnimationParameters {

    int _styleAnimation;
}

 - (id) initWithDefaultParameters;
 - (void) setStyleAnimation:(int)a ;
 - (BOOL) shouldAnimate;
 - (int) styleAnimation;


@end
