
@protocol UIGestureRecognizerDelegate, NSCoding;
@interface UISwitch : UIControl <UIGestureRecognizerDelegate, NSCoding> {

    UILongPressGestureRecognizer* _pressGesture;
    UIPanGestureRecognizer* _panGesture;
    UIView<_UISwitchInternalViewProtocol>* _control;
    BOOL _onStateChangedByLongPressGestureRecognizer;
    BOOL _onStateChangedByPanGestureRecognizer;
    BOOL _on;
    double _enabledAlpha;
}
 + (Class) _internalViewClass;

 - (void) dealloc;
 - (void) _populateArchivedSubviews:(id)a ;
 - (void) setAlpha:(double)a ;
 - ({CGSize=dd}) _intrinsicSizeWithinSize:({CGSize=dd})a ;
 - (BOOL) _contentHuggingDefault_isUsuallyFixedHeight;
 - (BOOL) _contentHuggingDefault_isUsuallyFixedWidth;
 - ({CGSize=dd}) sizeThatFits:({CGSize=dd})a ;
 - ({UIEdgeInsets=dddd}) alignmentRectInsets;
 - (void) _encodeFrameWithCoder:(id)a ;
 - (id) tintColor;
 - (void) setTintColor:(id)a ;
 - (id) _scriptingInfo;
 - (BOOL) _gestureRecognizer:(id)a shouldRecognizeSimultaneouslyWithGestureRecognizer:(id)b ;
 - (void) setThumbTintColor:(id)a ;
 - (id) thumbTintColor;
 - (void) _setOnTintColor:(id)a ;
 - (void) _onAnimationDidStop:(id)a finished:(id)b context:(^v)c ;
 - (id) onTintColor;
 - (void) setOnTintColor:(id)a ;
 - (id) onImage;
 - (void) setOnImage:(id)a ;
 - (id) offImage;
 - (void) setOffImage:(id)a ;
 - (void) setOn:(BOOL)a ;
 - (id) _onTintColor;
 - (void) setEnabledAlpha:(double)a ;
 - (void) _handlePanNL:(id)a ;
 - (void) _handleTapNL:(id)a ;
 - (void) _handleLongPressNL:(id)a ;
 - (BOOL) _handleTranslationInPanGestureRecognizer:(id)a ;
 - (void) _animateToOn:(BOOL)a withDuration:(double)b sendAction:(BOOL)c ;
 - (BOOL) _useOldSize;
 - (void) _commonInitNewLook;
 - (void) _commonInitNewLookNeue1;
 - (BOOL) _shouldAlterCodedFrame;
 - (BOOL) isOn;
 - (void) setOn:(BOOL)a animated:(BOOL)b ;
 - (void) _setOnColor:(id)a ;
 - (id) _onColor;
 - (void) _setAlwaysShowsOnOffLabel:(BOOL)a ;
 - (BOOL) _alwaysShowOnOffLabel;
 - (double) enabledAlpha;
 - (void) setAlternateColors:(BOOL)a ;
 - (void) _setPressed:(BOOL)a on:(BOOL)b animated:(BOOL)c completion:(@?)d ;
 - (double) _knobBounceDuration;
 - (void) _setKnobBounceDuration:(double)a ;
 - (double) _knobBounceDamping;
 - (void) _setKnobBounceDamping:(double)a ;
 - (double) _knobBounceStiffness;
 - (void) _setKnobBounceStiffness:(double)a ;
 - (double) _knobBounceMass;
 - (void) _setKnobBounceMass:(double)a ;
 - (unsigned long long) defaultAccessibilityTraits;
 - (BOOL) isAccessibilityElementByDefault;
 - (BOOL) isElementAccessibilityExposedToInterfaceBuilder;
 - (id) init;
 - (void) encodeWithCoder:(id)a ;
 - (id) initWithCoder:(id)a ;
 - (id) initWithFrame:({CGRect={CGPoint=dd}{CGSize=dd}})a ;
 - (void) setFrame:({CGRect={CGPoint=dd}{CGSize=dd}})a ;
 - (void) setEnabled:(BOOL)a ;


@end
