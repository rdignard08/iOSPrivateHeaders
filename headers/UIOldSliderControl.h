
@interface UIOldSliderControl : UIControl {

    @"UIImage" _sliderLeftFillCap;
    (?="image"@"UIImage""view"@"UIView") _sliderLeftFill;
    (?="image"@"UIImage""view"@"UIView") _sliderRightFill;
    @"UIImage" _minValueImage;
    @"UIImage" _maxValueImage;
    int _numberOfTickMarks;
    double _hitOffset;
    @"UIImage" _sliderRightCap;
    @"UIImage" _sliderRightFullCap;
    @"UIImage" _sliderLeftCap;
    {?="allowsOnlyTickMarks"b1"animating"b1"showValue"b1"layeredFill"b1"continuous"b1"sendActionDuringAnimation"b1"alternateColors"b1"shouldFlipValue"b1"needsNonOpaqueFills"b1"reserved"b24} _sliderFlags;
    float _value;
    float _animationEndValue;
    float _minValue;
    float _maxValue;
    @"UIView" _knob;
    double _lastTrackingTime;
    double _idleTrackingTime;
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
 - (void) setValue:(float)aanimated:(BOOL)b;
 - (void) _setValue:(float)aandSendAction:(BOOL)b;
 - (void) setContinuous:(BOOL)a;
 - (BOOL) isAnimatingValueChange;
 - (void) setShowValue:(BOOL)a;
 - (id) initWithFrame:({CGRect={CGPoint=dd}{CGSize=dd}})alayeredFill:(BOOL)b;
 - (id) createSliderKnobView;
 - (id) imageForSliderPiece:(int)a;
 - (void) sliderBoundsChanged;
 - (void) setMaxValue:(float)a;
 - ({CGRect={CGPoint=dd}{CGSize=dd}}) fillBounds;
 - (void) drawSliderPiece:(int)ainRect:({CGRect={CGPoint=dd}{CGSize=dd}})b;
 - ({CGRect={CGPoint=dd}{CGSize=dd}}) sliderBounds;
 - (void) setValue:(float)aanimated:(BOOL)banimationCurve:(int)c;
 - (void) refreshImages;
 - (void) _resetFillFrames;
 - (void) _sliderBounds:({CGRect={CGPoint=dd}{CGSize=dd}})agetLeftCapRect:(^{CGRect={CGPoint=dd}{CGSize=dd}})brightCapRect:(^{CGRect={CGPoint=dd}{CGSize=dd}})cleft:(^{CGRect={CGPoint=dd}{CGSize=dd}})dright:(^{CGRect={CGPoint=dd}{CGSize=dd}})e;
 - (void) drawSliderInRect:({CGRect={CGPoint=dd}{CGSize=dd}})adirtyRect:({CGRect={CGPoint=dd}{CGSize=dd}})b;
 - ({CGRect={CGPoint=dd}{CGSize=dd}}) valueTextBounds;
 - ({CGRect={CGPoint=dd}{CGSize=dd}}) minValueImageBounds;
 - ({CGRect={CGPoint=dd}{CGSize=dd}}) maxValueImageBounds;
 - (float) _validatedValue:(float)a;
 - (void) drawSliderInRect:({CGRect={CGPoint=dd}{CGSize=dd}})a;
 - (void) setMinValue:(float)a;
 - (void) setNumberOfTickMarks:(int)a;
 - (void) setAllowsTickMarkValuesOnly:(BOOL)a;
 - (void) setMinValueImage:(id)a;
 - (void) setMaxValueImage:(id)a;
 - (float) _validatedValueForPoint:({CGPoint=dd})aincludeTickMarks:(BOOL)b;
 - (void) setSendActionDuringAnimation:(BOOL)a;
 - (id) init;
 - (void) setValue:(float)a;
 - (float) value;
 - (id) initWithFrame:({CGRect={CGPoint=dd}{CGSize=dd}})a;
 - (void) drawRect:({CGRect={CGPoint=dd}{CGSize=dd}})a;
 - (void) setEnabled:(BOOL)a;


@end
