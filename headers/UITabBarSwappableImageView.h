
@interface UITabBarSwappableImageView : UIImageView {

    id _value;
    id _alternate;
    d _scale;
    BOOL _showAlternate;
    BOOL _flipped;
    i _currentAnimation;
    @"UITabBar" _tabBar;
    i _buttonTag;
}

 - (void) dealloc;
 - (void) showAlternateImage:(BOOL)a;
 - (void) setCurrentImage;
 - (id) initWithImage:(id)aalternateImage:(id)b;
 - (void) animateImage:(f)awithTabBar:(id)bwithTag:(i)c;
 - (void) setAlternateImage:(id)a;
 - (void) setImage:(id)a;
 - (void) animationDidStop:(id)afinished:(BOOL)b;


@end
