
@protocol UIGestureRecognizerDelegate, NSCoding;
@interface UISwitch : UIControl <UIGestureRecognizerDelegate, NSCoding> {

    @"UILongPressGestureRecognizer" _pressGesture;
    @"UIPanGestureRecognizer" _panGesture;
    @"UIView<_UISwitchInternalViewProtocol>" _control;
    BOOL _onStateChangedByLongPressGestureRecognizer;
    BOOL _onStateChangedByPanGestureRecognizer;
    BOOL _on;
    d _enabledAlpha;
}
 + (Class) _internalViewClass;

 - (void) dealloc;
 - (void) _populateArchivedSubviews:(id)a;
 - (void) setAlpha:(d)a;
 - ({CGSize=dd}) _intrinsicSizeWithinSize:({CGSize=dd})a;
 - (BOOL) _contentHuggingDefault_isUsuallyFixedHeight;
 - (BOOL) _contentHuggingDefault_isUsuallyFixedWidth;
 - ({CGSize=dd}) sizeThatFits:({CGSize=dd})a;
 - ({UIEdgeInsets=dddd}) alignmentRectInsets;
 - (void) _encodeFrameWithCoder:(id)a;
 - (id) tintColor;
 - (void) setTintColor:(id)a;
 - (id) _scriptingInfo;
 - (BOOL) _gestureRecognizer:(id)ashouldRecognizeSimultaneouslyWithGestureRecognizer:(id)b;
 - (void) setThumbTintColor:(id)a;
 - (id) thumbTintColor;
 - (void) _setOnTintColor:(id)a;
 - (void) _onAnimationDidStop:(id)afinished:(id)bcontext:(^v)c;
 - (id) onTintColor;
 - (void) setOnTintColor:(id)a;
 - (id) onImage;
 - (void) setOnImage:(id)a;
 - (id) offImage;
 - (void) setOffImage:(id)a;
 - (void) setOn:(BOOL)a;
 - (id) _onTintColor;
 - (void) setEnabledAlpha:(d)a;
 - (void) _handlePanNL:(id)a;
 - (void) _handleTapNL:(id)a;
 - (void) _handleLongPressNL:(id)a;
 - (BOOL) _handleTranslationInPanGestureRecognizer:(id)a;
 - (void) _animateToOn:(BOOL)awithDuration:(d)bsendAction:(BOOL)c;
 - (BOOL) _useOldSize;
 - (void) _commonInitNewLook;
 - (void) _commonInitNewLookNeue1;
 - (BOOL) _shouldAlterCodedFrame;
 - (BOOL) isOn;
 - (void) setOn:(BOOL)aanimated:(BOOL)b;
 - (void) _setOnColor:(id)a;
 - (id) _onColor;
 - (void) _setAlwaysShowsOnOffLabel:(BOOL)a;
 - (BOOL) _alwaysShowOnOffLabel;
 - (d) enabledAlpha;
 - (void) setAlternateColors:(BOOL)a;
 - (void) _setPressed:(BOOL)aon:(BOOL)banimated:(BOOL)ccompletion:(@?)d;
 - (d) _knobBounceDuration;
 - (void) _setKnobBounceDuration:(d)a;
 - (d) _knobBounceDamping;
 - (void) _setKnobBounceDamping:(d)a;
 - (d) _knobBounceStiffness;
 - (void) _setKnobBounceStiffness:(d)a;
 - (d) _knobBounceMass;
 - (void) _setKnobBounceMass:(d)a;
 - (Q) defaultAccessibilityTraits;
 - (BOOL) isAccessibilityElementByDefault;
 - (BOOL) isElementAccessibilityExposedToInterfaceBuilder;
 - (id) init;
 - (void) encodeWithCoder:(id)a;
 - (id) initWithCoder:(id)a;
 - (id) initWithFrame:({CGRect={CGPoint=dd}{CGSize=dd}})a;
 - (void) setFrame:({CGRect={CGPoint=dd}{CGSize=dd}})a;
 - (void) setEnabled:(BOOL)a;


@end
