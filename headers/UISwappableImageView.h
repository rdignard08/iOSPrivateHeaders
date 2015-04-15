
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
    UIToolbar* _buttonBar;
    int _buttonTag;
    _UISwappableImageViewAnimationProxy* _proxy;
    long long _barButtonItemStyle;
    BOOL _didDisableWindowAutorotation;
    id _didFinishTarget;
    SEL _didFinishSelector;
}

 - (void) dealloc;
 - (void) _willMoveToWindow:(id)a ;
 - (void) updateImageIfNeededWithTintColor:(id)a ;
 - (void) updateImageIfNeeded;
 - (void) setBezelStyleForBarStyle:(long long)a tintColor:(id)b ;
 - (void) setBezelStyleForBarStyle:(long long)a tintColor:(id)b iconTintColor:(id)c iconTintColorDidChange:(BOOL)d ;
 - (id) initWithImage:(id)a alternateImage:(id)b barStyle:(long long)c barButtonItemStyle:(long long)d tintColor:(id)e bezel:(BOOL)f ;
 - (void) showAlternateImage:(BOOL)a ;
 - (void) setFlipped:(BOOL)a ;
 - (void) animateImage:(float)a withButtonBar:(id)b withTag:(int)c target:(id)d didFinishSelector:(SEL)e ;
 - (void) setImage:(id)a ;
 - (void) animationDidStop:(id)a finished:(BOOL)b ;


@end
