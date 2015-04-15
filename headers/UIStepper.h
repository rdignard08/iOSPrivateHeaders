
@interface UIStepper : UIControl {

    BOOL _isRtoL;
    UIImageView _middleView;
    UIButton _plusButton;
    UIButton _minusButton;
    NSTimer _repeatTimer;
    long long _repeatCount;
    NSMutableDictionary _dividerImages;
    BOOL _continuous;
    BOOL _autorepeat;
    BOOL _wraps;
    double _value;
    double _minimumValue;
    double _maximumValue;
    double _stepValue;
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
 - (void) setBackgroundImage:(id)aforState:(unsigned long long)b;
 - (id) backgroundImageForState:(unsigned long long)a;
 - (void) cancelTrackingWithEvent:(id)a;
 - (BOOL) beginTrackingWithTouch:(id)awithEvent:(id)b;
 - (BOOL) continueTrackingWithTouch:(id)awithEvent:(id)b;
 - (void) endTrackingWithTouch:(id)awithEvent:(id)b;
 - (double) minimumValue;
 - (double) maximumValue;
 - (BOOL) isContinuous;
 - (void) setContinuous:(BOOL)a;
 - (void) setMinimumValue:(double)a;
 - (void) setMaximumValue:(double)a;
 - (void) _updateImages;
 - (BOOL) wraps;
 - (void) setWraps:(BOOL)a;
 - (void) _commonStepperInit;
 - (void) _updateButtonEnabled;
 - (void) _setBackgroundImage:(id)aforState:(unsigned long long)b;
 - (void) _setDividerImage:(id)aforLeftSegmentState:(unsigned long long)brightSegmentState:(unsigned long long)c;
 - (void) setIncrementImage:(id)aforState:(unsigned long long)b;
 - (void) setDecrementImage:(id)aforState:(unsigned long long)b;
 - (void) _updateDividerImageForButtonState;
 - (id) dividerImageForLeftSegmentState:(unsigned long long)arightSegmentState:(unsigned long long)b;
 - (void) _startTimer;
 - (void) _updateHighlightingAtPoint:({CGPoint=dd})awithEvent:(id)b;
 - (void) _updateCount:(id)a;
 - (void) _stopTimer;
 - (void) _setIncrementImage:(id)aforState:(unsigned long long)b;
 - (void) _setDecrementImage:(id)aforState:(unsigned long long)b;
 - (void) setDividerImage:(id)aforLeftSegmentState:(unsigned long long)brightSegmentState:(unsigned long long)c;
 - (void) setStepValue:(double)a;
 - (id) incrementImageForState:(unsigned long long)a;
 - (id) decrementImageForState:(unsigned long long)a;
 - (double) stepValue;
 - (BOOL) autorepeat;
 - (void) setAutorepeat:(BOOL)a;
 - (void) encodeWithCoder:(id)a;
 - (id) initWithCoder:(id)a;
 - (void) setValue:(double)a;
 - (double) value;
 - (id) initWithFrame:({CGRect={CGPoint=dd}{CGSize=dd}})a;
 - (void) setFrame:({CGRect={CGPoint=dd}{CGSize=dd}})a;


@end
