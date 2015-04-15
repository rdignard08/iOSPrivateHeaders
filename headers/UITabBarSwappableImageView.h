
@interface UITabBarSwappableImageView : UIImageView {

    id _value;
    id _alternate;
    double _scale;
    BOOL _showAlternate;
    BOOL _flipped;
    int _currentAnimation;
    UITabBar _tabBar;
    int _buttonTag;
}

 - (void) dealloc;
 - (void) showAlternateImage:(BOOL)a;
 - (void) setCurrentImage;
 - (id) initWithImage:(id)aalternateImage:(id)b;
 - (void) animateImage:(float)awithTabBar:(id)bwithTag:(int)c;
 - (void) setAlternateImage:(id)a;
 - (void) setImage:(id)a;
 - (void) animationDidStop:(id)afinished:(BOOL)b;


@end
