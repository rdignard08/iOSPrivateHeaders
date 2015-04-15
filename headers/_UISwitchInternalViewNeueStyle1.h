
@protocol _UISwitchInternalViewProtocol;
@interface _UISwitchInternalViewNeueStyle1 : UIView <_UISwitchInternalViewProtocol> {

    UIView* _switchWellView;
    UIView* _leftSwitchWellView;
    UIView* _switchWellContainerView;
    UIView* _leftSwitchWellContainerView;
    UIView* _switchWellImageViewContainer;
    UIImageView* _switchWellOffImageView;
    UIImageView* _switchWellOnImageView;
    UIImageView* _knobView;
    UIColor* _onTintColor;
    UIColor* _tintColor;
    BOOL _on;
    BOOL _pressed;
    BOOL _isAlwaysAccessible;
    BOOL _useAlternateColor;
    BOOL _pressedIsHandledByGestureRecognizer;
    UIColor* _thumbTintColor;
    UIImage* _onImage;
    UIImage* _offImage;
}

 - (void) dealloc;
 - (id) tintColor;
 - (void) setTintColor:(id)a ;
 - (void) _setPressed:(BOOL)a ;
 - (void) setThumbTintColor:(id)a ;
 - (id) thumbTintColor;
 - (void) _setOn:(BOOL)a animated:(BOOL)b force:(BOOL)c ;
 - (id) _defaultOnTintColor;
 - (void) _cleanUpAfterAnimating;
 - (void) _setProgress:(double)a animated:(BOOL)b withDuration:(double)c force:(BOOL)d sendAction:(BOOL)e ;
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
 - (void) _invalidateControl;
 - (void) _accessibilitySettingChanged;
 - (void) _invalidateWell;
 - (void) _invalidateKnob;
 - (void) _invalidateOnOffImages;
 - (double) _wellBorderWidthPressed:(BOOL)a on:(BOOL)b ;
 - (void) _orderSubviews;
 - (void) _transitionWellViewToPressed:(BOOL)a animated:(BOOL)b ;
 - (void) _transitionWellViewToOn:(BOOL)a animated:(BOOL)b ;
 - (void) _transitionKnobToPressed:(BOOL)a on:(BOOL)b animated:(BOOL)c ;
 - (id) _effectiveThumbImage;
 - (void) _transitionKnobToPressed:(BOOL)a animated:(BOOL)b ;
 - (void) _transitionKnobToOn:(BOOL)a animated:(BOOL)b ;
 - (id) _effectiveOffImage;
 - (id) _effectiveOnImage;
 - ({CGPoint=dd}) _offImagePosition;
 - ({CGPoint=dd}) _onImagePosition;
 - (id) _effectiveOffImageTintColor;
 - (id) _effectiveOnImageTintColor;
 - (id) _maskLayerForImageViews;
 - (void) _transitionImagesToPressed:(BOOL)a on:(BOOL)b animated:(BOOL)c ;
 - ({CGRect={CGPoint=dd}{CGSize=dd}}) _knobBoundsPressed:(BOOL)a ;
 - ({CGPoint=dd}) _knobPositionOn:(BOOL)a pressed:(BOOL)b forBounds:({CGRect={CGPoint=dd}{CGSize=dd}})c ;
 - ({CGRect={CGPoint=dd}{CGSize=dd}}) _switchWellContainerBoundsOn:(BOOL)a pressed:(BOOL)b ;
 - ({CGPoint=dd}) _switchWellContainerPositionOn:(BOOL)a pressed:(BOOL)b ;
 - ({CGRect={CGPoint=dd}{CGSize=dd}}) _leftSwitchWellContainerBoundsOn:(BOOL)a pressed:(BOOL)b ;
 - ({CGPoint=dd}) _leftSwitchWellContainerPositionOn:(BOOL)a pressed:(BOOL)b ;
 - ({CGPoint=dd}) _switchWellPositionOn:(BOOL)a pressed:(BOOL)b ;
 - (id) _switchSpringAnimationWithKeyPath:(id)a fromValue:(id)b toValue:(id)c pressed:(BOOL)d ;
 - (id) _switchTrackAnimationWithFromValue:(id)a toValue:(id)b on:(BOOL)c ;
 - (^{CGColor=}) _wellColorOn:(BOOL)a ;
 - (id) _switchTrackColorAnimationWithFromValue:(id)a toValue:(id)b ;
 - (id) _effectiveOnTintColor;
 - (id) _effectiveTintColor;
 - (BOOL) _shouldDrawAccessibly;
 - (id) _accessibleOnImage;
 - (id) _accessibleOffImage;
 - (BOOL) _shouldUseLightTintOverColor:(id)a ;
 - ({CGRect={CGPoint=dd}{CGSize=dd}}) _frameForLeftAlignmentOfView:(id)a ;
 - (id) _labelOpacityAnimation;
 - (id) _effectiveOffTextColor;
 - (BOOL) isAlwaysAccessible;
 - (void) setIsAlwaysAccessible:(BOOL)a ;
 - (void) _setPressed:(BOOL)a animated:(BOOL)b ;
 - (BOOL) pressedIsHandledByGestureRecognizer;
 - (void) setPressedIsHandledByGestureRecognizer:(BOOL)a ;
 - (id) initWithFrame:({CGRect={CGPoint=dd}{CGSize=dd}})a ;


@end
