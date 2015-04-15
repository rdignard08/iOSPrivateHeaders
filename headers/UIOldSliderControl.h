
@interface UIOldSliderControl : UIControl {

    @"UIImage" _sliderLeftFillCap;
    (?="image"@"UIImage""view"@"UIView") _sliderLeftFill;
    (?="image"@"UIImage""view"@"UIView") _sliderRightFill;
    @"UIImage" _minValueImage;
    @"UIImage" _maxValueImage;
    i _numberOfTickMarks;
    d _hitOffset;
    @"UIImage" _sliderRightCap;
    @"UIImage" _sliderRightFullCap;
    @"UIImage" _sliderLeftCap;
    {?="allowsOnlyTickMarks"b1"animating"b1"showValue"b1"layeredFill"b1"continuous"b1"sendActionDuringAnimation"b1"alternateColors"b1"shouldFlipValue"b1"needsNonOpaqueFills"b1"reserved"b24} _sliderFlags;
    f _value;
    f _animationEndValue;
    f _minValue;
    f _maxValue;
    @"UIView" _knob;
    d _lastTrackingTime;
    d _idleTrackingTime;
    {CGPoint="x"d"y"d} _lastTrackingPoint;
    {CGPoint="x"d"y"d} _idleTrackingPoint;
}

 - (void) dealloc;
 - (BOOL) cancelTouchTracking;
 - (BOOL) cancelMouseTracking;
 - (id) _scriptingInfo;
 - (void) setHighlighted:(BOOL)a;
 - (BOOL) beginTrackingWithTouch:(id)awithEvent:(id)b;
 - (void) _controlTouchBegan:(id)awithEvent:(id)b;
 - (BOOL) continueTrackingWithTouch:(id)awithEvent:(id)b;
 - (void) _controlTouchMoved:(id)awithEvent:(id)b;
 - (void) endTrackingWithTouch:(id)awithEvent:(id)b;
 - (void) _controlTouchEnded:(id)awithEvent:(id)b;
 - (void) _sendDelayedActions;
 - (void) animator:(id)astopAnimation:(id)b;
 - (void) setValue:(f)aanimated:(BOOL)b;
 - (void) _setValue:(f)aandSendAction:(BOOL)b;
 - (void) setContinuous:(BOOL)a;
 - (BOOL) isAnimatingValueChange;
 - (void) setShowValue:(BOOL)a;
 - (id) initWithFrame:({CGRect={CGPoint=dd}{CGSize=dd}})alayeredFill:(BOOL)b;
 - (id) createSliderKnobView;
 - (id) imageForSliderPiece:(i)a;
 - (void) sliderBoundsChanged;
 - (void) setMaxValue:(f)a;
 - ({CGRect={CGPoint=dd}{CGSize=dd}}) fillBounds;
 - (void) drawSliderPiece:(i)ainRect:({CGRect={CGPoint=dd}{CGSize=dd}})b;
 - ({CGRect={CGPoint=dd}{CGSize=dd}}) sliderBounds;
 - (void) setValue:(f)aanimated:(BOOL)banimationCurve:(i)c;
 - (void) refreshImages;
 - (void) _resetFillFrames;
 - (void) _sliderBounds:({CGRect={CGPoint=dd}{CGSize=dd}})agetLeftCapRect:(^{CGRect={CGPoint=dd}{CGSize=dd}})brightCapRect:(^{CGRect={CGPoint=dd}{CGSize=dd}})cleft:(^{CGRect={CGPoint=dd}{CGSize=dd}})dright:(^{CGRect={CGPoint=dd}{CGSize=dd}})e;
 - (void) drawSliderInRect:({CGRect={CGPoint=dd}{CGSize=dd}})adirtyRect:({CGRect={CGPoint=dd}{CGSize=dd}})b;
 - ({CGRect={CGPoint=dd}{CGSize=dd}}) valueTextBounds;
 - ({CGRect={CGPoint=dd}{CGSize=dd}}) minValueImageBounds;
 - ({CGRect={CGPoint=dd}{CGSize=dd}}) maxValueImageBounds;
 - (f) _validatedValue:(f)a;
 - (void) drawSliderInRect:({CGRect={CGPoint=dd}{CGSize=dd}})a;
 - (void) setMinValue:(f)a;
 - (void) setNumberOfTickMarks:(i)a;
 - (void) setAllowsTickMarkValuesOnly:(BOOL)a;
 - (void) setMinValueImage:(id)a;
 - (void) setMaxValueImage:(id)a;
 - (f) _validatedValueForPoint:({CGPoint=dd})aincludeTickMarks:(BOOL)b;
 - (void) setSendActionDuringAnimation:(BOOL)a;
 - (id) init;
 - (void) setValue:(f)a;
 - (f) value;
 - (id) initWithFrame:({CGRect={CGPoint=dd}{CGSize=dd}})a;
 - (void) drawRect:({CGRect={CGPoint=dd}{CGSize=dd}})a;
 - (void) setEnabled:(BOOL)a;


@end
