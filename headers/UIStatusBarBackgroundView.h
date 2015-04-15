
@interface UIStatusBarBackgroundView : UIView {

    @"UIStatusBarStyleAttributes" _style;
    @"UIStatusBarCorners" _topCorners;
    @"UIImageView" _glowView;
    BOOL _glowEnabled;
    BOOL _suppressGlow;
}

 - (void) dealloc;
 - (id) _baseImage;
 - (BOOL) _topCornersAreRounded;
 - (void) _setGlowAnimationEnabled:(BOOL)awaitForNextCycle:(BOOL)b;
 - (void) _startGlowAnimationWaitForNextCycle:(BOOL)a;
 - (void) _stopGlowAnimation;
 - (BOOL) _styleCanGlow;
 - (id) _glowImage;
 - (id) _backgroundImageName;
 - (id) initWithFrame:({CGRect={CGPoint=dd}{CGSize=dd}})astyle:(id)bbackgroundColor:(id)c;
 - (void) setGlowAnimationEnabled:(BOOL)a;
 - (void) setSuppressesGlow:(BOOL)a;
 - (id) style;


@end
