
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
 - (void) touchesBegan:(id)awithEvent:(id)b;
 - (void) touchesEnded:(id)awithEvent:(id)b;
 - (void) touchesCancelled:(id)awithEvent:(id)b;
 - (id) tintColor;
 - (void) setTintColor:(id)a;
 - (void) _setPressed:(BOOL)a;
 - (void) setThumbTintColor:(id)a;
 - (id) thumbTintColor;
 - (void) _setOn:(BOOL)aanimated:(BOOL)bforce:(BOOL)c;
 - (id) _labelImage;
 - (id) _colorImage;
 - (void) _cleanUpAfterAnimating;
 - (void) _setOnTintColor:(id)a;
 - (void) _setupThumbImages;
 - (void) _setupBackgroundLayer;
 - (void) _buildControl;
 - (id) _snapshotImage;
 - (void) _onAnimationDidStop:(id)afinished:(id)bcontext:(^v)c;
 - (void) _setProgress:(double)aanimated:(BOOL)bwithDuration:(double)cforce:(BOOL)dsendAction:(BOOL)e;
 - (void) _sendActions;
 - (void) _setProgress:(double)a;
 - (void) _prepareForInteraction;
 - (void) setSendAction:(BOOL)a;
 - (void) _setPressed:(BOOL)aon:(BOOL)banimated:(BOOL)cshouldAnimateLabels:(BOOL)dcompletion:(@?)e;
 - (id) onTintColor;
 - (void) setOnTintColor:(id)a;
 - (id) onImage;
 - (void) setOnImage:(id)a;
 - (id) offImage;
 - (void) setOffImage:(id)a;
 - (BOOL) on;
 - (void) setOn:(BOOL)a;
 - (BOOL) useAlternateColor;
 - (void) setUseAlternateColor:(BOOL)a;
 - (BOOL) sendAction;
 - (id) initWithFrame:({CGRect={CGPoint=dd}{CGSize=dd}})a;


@end
