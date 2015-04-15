
@interface UISwappableImageView : UIImageView {

    id _value;
    id _alternate;
    d _scale;
    BOOL _showAlternate;
    BOOL _flipped;
    BOOL _updateImage;
    BOOL _bezel;
    i _bezelStyle;
    i _currentAnimation;
    @"UIToolbar" _buttonBar;
    i _buttonTag;
    @"_UISwappableImageViewAnimationProxy" _proxy;
    q _barButtonItemStyle;
    BOOL _didDisableWindowAutorotation;
    id _didFinishTarget;
    SEL _didFinishSelector;
}

 - (void) dealloc;
 - (void) _willMoveToWindow:(id)a;
 - (void) updateImageIfNeededWithTintColor:(id)a;
 - (void) updateImageIfNeeded;
 - (void) setBezelStyleForBarStyle:(q)atintColor:(id)b;
 - (void) setBezelStyleForBarStyle:(q)atintColor:(id)biconTintColor:(id)ciconTintColorDidChange:(BOOL)d;
 - (id) initWithImage:(id)aalternateImage:(id)bbarStyle:(q)cbarButtonItemStyle:(q)dtintColor:(id)ebezel:(BOOL)f;
 - (void) showAlternateImage:(BOOL)a;
 - (void) setFlipped:(BOOL)a;
 - (void) animateImage:(f)awithButtonBar:(id)bwithTag:(i)ctarget:(id)ddidFinishSelector:(SEL)e;
 - (void) setImage:(id)a;
 - (void) animationDidStop:(id)afinished:(BOOL)b;


@end
