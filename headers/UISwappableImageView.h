
@interface UISwappableImageView : UIImageView {

    id _value;
    id _alternate;
    double _scale;
    BOOL _showAlternate;
    BOOL _flipped;
    BOOL _updateImage;
    BOOL _bezel;
    int _bezelStyle;
    int _currentAnimation;
    UIToolbar _buttonBar;
    int _buttonTag;
    _UISwappableImageViewAnimationProxy _proxy;
    long long _barButtonItemStyle;
    BOOL _didDisableWindowAutorotation;
    id _didFinishTarget;
    SEL _didFinishSelector;
}

 - (void) dealloc;
 - (void) _willMoveToWindow:(id)a;
 - (void) updateImageIfNeededWithTintColor:(id)a;
 - (void) updateImageIfNeeded;
 - (void) setBezelStyleForBarStyle:(long long)atintColor:(id)b;
 - (void) setBezelStyleForBarStyle:(long long)atintColor:(id)biconTintColor:(id)ciconTintColorDidChange:(BOOL)d;
 - (id) initWithImage:(id)aalternateImage:(id)bbarStyle:(long long)cbarButtonItemStyle:(long long)dtintColor:(id)ebezel:(BOOL)f;
 - (void) showAlternateImage:(BOOL)a;
 - (void) setFlipped:(BOOL)a;
 - (void) animateImage:(float)awithButtonBar:(id)bwithTag:(int)ctarget:(id)ddidFinishSelector:(SEL)e;
 - (void) setImage:(id)a;
 - (void) animationDidStop:(id)afinished:(BOOL)b;


@end
