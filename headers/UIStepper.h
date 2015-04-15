
@interface UIStepper : UIControl {

    BOOL _isRtoL;
    @"UIImageView" _middleView;
    @"UIButton" _plusButton;
    @"UIButton" _minusButton;
    @"NSTimer" _repeatTimer;
    q _repeatCount;
    @"NSMutableDictionary" _dividerImages;
    BOOL _continuous;
    BOOL _autorepeat;
    BOOL _wraps;
    d _value;
    d _minimumValue;
    d _maximumValue;
    d _stepValue;
}

 - (void) dealloc;
 - (void) _populateArchivedSubviews:(id)a;
 - (id) hitTest:({CGPoint=dd})awithEvent:(id)b;
 - ({CGSize=dd}) _intrinsicSizeWithinSize:({CGSize=dd})a;
 - (void) layoutSubviews;
 - (BOOL) _contentHuggingDefault_isUsuallyFixedHeight;
 - (BOOL) _contentHuggingDefault_isUsuallyFixedWidth;
 - ({CGSize=dd}) sizeThatFits:({CGSize=dd})a;
 - (BOOL) gestureRecognizerShouldBegin:(id)a;
 - (void) setTintColor:(id)a;
 - (void) setBackgroundImage:(id)aforState:(Q)b;
 - (id) backgroundImageForState:(Q)a;
 - (void) cancelTrackingWithEvent:(id)a;
 - (BOOL) beginTrackingWithTouch:(id)awithEvent:(id)b;
 - (BOOL) continueTrackingWithTouch:(id)awithEvent:(id)b;
 - (void) endTrackingWithTouch:(id)awithEvent:(id)b;
 - (d) minimumValue;
 - (d) maximumValue;
 - (BOOL) isContinuous;
 - (void) setContinuous:(BOOL)a;
 - (void) setMinimumValue:(d)a;
 - (void) setMaximumValue:(d)a;
 - (void) _updateImages;
 - (BOOL) wraps;
 - (void) setWraps:(BOOL)a;
 - (void) _commonStepperInit;
 - (void) _updateButtonEnabled;
 - (void) _setBackgroundImage:(id)aforState:(Q)b;
 - (void) _setDividerImage:(id)aforLeftSegmentState:(Q)brightSegmentState:(Q)c;
 - (void) setIncrementImage:(id)aforState:(Q)b;
 - (void) setDecrementImage:(id)aforState:(Q)b;
 - (void) _updateDividerImageForButtonState;
 - (id) dividerImageForLeftSegmentState:(Q)arightSegmentState:(Q)b;
 - (void) _startTimer;
 - (void) _updateHighlightingAtPoint:({CGPoint=dd})awithEvent:(id)b;
 - (void) _updateCount:(id)a;
 - (void) _stopTimer;
 - (void) _setIncrementImage:(id)aforState:(Q)b;
 - (void) _setDecrementImage:(id)aforState:(Q)b;
 - (void) setDividerImage:(id)aforLeftSegmentState:(Q)brightSegmentState:(Q)c;
 - (void) setStepValue:(d)a;
 - (id) incrementImageForState:(Q)a;
 - (id) decrementImageForState:(Q)a;
 - (d) stepValue;
 - (BOOL) autorepeat;
 - (void) setAutorepeat:(BOOL)a;
 - (void) encodeWithCoder:(id)a;
 - (id) initWithCoder:(id)a;
 - (void) setValue:(d)a;
 - (d) value;
 - (id) initWithFrame:({CGRect={CGPoint=dd}{CGSize=dd}})a;
 - (void) setFrame:({CGRect={CGPoint=dd}{CGSize=dd}})a;


@end
