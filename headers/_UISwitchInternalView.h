
@protocol _UISwitchInternalViewProtocol;
@interface _UISwitchInternalView : UIView <_UISwitchInternalViewProtocol> {

    UIImage* _colorMask;
    UIImage* _shapeMask;
    UIImage* _shapeShadow;
    UIImage* _thumb;
    UIImage* _thumbPressed;
    double _position;
    BOOL _pressed;
    UIImageView* _colorView;
    UIImageView* _thumbView;
    UIImageView* _labelView;
    UIColor* _onTintColor;
    UIColor* _tintColor;
    UIColor* _thumbTintColor;
    UIColor* _nonAlternateColor;
    UIImage* _onImage;
    UIImage* _offImage;
    BOOL _on;
    BOOL _sendAction;
    BOOL _useAlternateColor;
    BOOL _animating;
    UIImageView* _idleImageView;
    UIView* _interactiveView;
    CALayer* _backgroundLayer;
}
 + (id) _defaultOnTintColor;

 - (void) dealloc;
 - (void) touchesBegan:(id)a withEvent:(id)b ;
 - (void) touchesEnded:(id)a withEvent:(id)b ;
 - (void) touchesCancelled:(id)a withEvent:(id)b ;
 - (id) tintColor;
 - (void) setTintColor:(id)a ;
 - (void) _setPressed:(BOOL)a ;
 - (void) setThumbTintColor:(id)a ;
 - (id) thumbTintColor;
 - (void) _setOn:(BOOL)a animated:(BOOL)b force:(BOOL)c ;
 - (id) _labelImage;
 - (id) _colorImage;
 - (void) _cleanUpAfterAnimating;
 - (void) _setOnTintColor:(id)a ;
 - (void) _setupThumbImages;
 - (void) _setupBackgroundLayer;
 - (void) _buildControl;
 - (id) _snapshotImage;
 - (void) _onAnimationDidStop:(id)a finished:(id)b context:(^v)c ;
 - (void) _setProgress:(double)a animated:(BOOL)b withDuration:(double)c force:(BOOL)d sendAction:(BOOL)e ;
 - (void) _sendActions;
 - (void) _setProgress:(double)a ;
 - (void) _prepareForInteraction;
 - (void) setSendAction:(BOOL)a ;
 - (void) _setPressed:(BOOL)a on:(BOOL)b animated:(BOOL)c shouldAnimateLabels:(BOOL)d completion:(@?)e ;
 - (id) onTintColor;
 - (void) setOnTintColor:(id)a ;
 - (id) onImage;
 - (void) setOnImage:(id)a ;
 - (id) offImage;
 - (void) setOffImage:(id)a ;
 - (BOOL) on;
 - (void) setOn:(BOOL)a ;
 - (BOOL) useAlternateColor;
 - (void) setUseAlternateColor:(BOOL)a ;
 - (BOOL) sendAction;
 - (id) initWithFrame:({CGRect={CGPoint=dd}{CGSize=dd}})a ;


@end
