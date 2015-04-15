
@interface UIOldSliderControl : UIControl {

    UIImage* _sliderLeftFillCap;
    (?="image"@"UIImage""view"@"UIView") _sliderLeftFill;
    (?="image"@"UIImage""view"@"UIView") _sliderRightFill;
    UIImage* _minValueImage;
    UIImage* _maxValueImage;
    int _numberOfTickMarks;
    double _hitOffset;
    UIImage* _sliderRightCap;
    UIImage* _sliderRightFullCap;
    UIImage* _sliderLeftCap;
    {?="allowsOnlyTickMarks"b1"animating"b1"showValue"b1"layeredFill"b1"continuous"b1"sendActionDuringAnimation"b1"alternateColors"b1"shouldFlipValue"b1"needsNonOpaqueFills"b1"reserved"b24} _sliderFlags;
    float _value;
    float _animationEndValue;
    float _minValue;
    float _maxValue;
    UIView* _knob;
    double _lastTrackingTime;
    double _idleTrackingTime;
    {CGPoint="x"d"y"d} _lastTrackingPoint;
    {CGPoint="x"d"y"d} _idleTrackingPoint;
}

 - (void) dealloc;
 - (BOOL) cancelTouchTracking;
 - (BOOL) cancelMouseTracking;
 - (id) _scriptingInfo;
 - (void) setHighlighted:(BOOL)a ;
 - (BOOL) beginTrackingWithTouch:(id)a withEvent:(id)b ;
 - (void) _controlTouchBegan:(id)a withEvent:(id)b ;
 - (BOOL) continueTrackingWithTouch:(id)a withEvent:(id)b ;
 - (void) _controlTouchMoved:(id)a withEvent:(id)b ;
 - (void) endTrackingWithTouch:(id)a withEvent:(id)b ;
 - (void) _controlTouchEnded:(id)a withEvent:(id)b ;
 - (void) _sendDelayedActions;
 - (void) animator:(id)a stopAnimation:(id)b ;
 - (void) setValue:(float)a animated:(BOOL)b ;
 - (void) _setValue:(float)a andSendAction:(BOOL)b ;
 - (void) setContinuous:(BOOL)a ;
 - (BOOL) isAnimatingValueChange;
 - (void) setShowValue:(BOOL)a ;
 - (id) initWithFrame:({CGRect={CGPoint=dd}{CGSize=dd}})a layeredFill:(BOOL)b ;
 - (id) createSliderKnobView;
 - (id) imageForSliderPiece:(int)a ;
 - (void) sliderBoundsChanged;
 - (void) setMaxValue:(float)a ;
 - ({CGRect={CGPoint=dd}{CGSize=dd}}) fillBounds;
 - (void) drawSliderPiece:(int)a inRect:({CGRect={CGPoint=dd}{CGSize=dd}})b ;
 - ({CGRect={CGPoint=dd}{CGSize=dd}}) sliderBounds;
 - (void) setValue:(float)a animated:(BOOL)b animationCurve:(int)c ;
 - (void) refreshImages;
 - (void) _resetFillFrames;
 - (void) _sliderBounds:({CGRect={CGPoint=dd}{CGSize=dd}})a getLeftCapRect:(^{CGRect={CGPoint=dd}{CGSize=dd}})b rightCapRect:(^{CGRect={CGPoint=dd}{CGSize=dd}})c left:(^{CGRect={CGPoint=dd}{CGSize=dd}})d right:(^{CGRect={CGPoint=dd}{CGSize=dd}})e ;
 - (void) drawSliderInRect:({CGRect={CGPoint=dd}{CGSize=dd}})a dirtyRect:({CGRect={CGPoint=dd}{CGSize=dd}})b ;
 - ({CGRect={CGPoint=dd}{CGSize=dd}}) valueTextBounds;
 - ({CGRect={CGPoint=dd}{CGSize=dd}}) minValueImageBounds;
 - ({CGRect={CGPoint=dd}{CGSize=dd}}) maxValueImageBounds;
 - (float) _validatedValue:(float)a ;
 - (void) drawSliderInRect:({CGRect={CGPoint=dd}{CGSize=dd}})a ;
 - (void) setMinValue:(float)a ;
 - (void) setNumberOfTickMarks:(int)a ;
 - (void) setAllowsTickMarkValuesOnly:(BOOL)a ;
 - (void) setMinValueImage:(id)a ;
 - (void) setMaxValueImage:(id)a ;
 - (float) _validatedValueForPoint:({CGPoint=dd})a includeTickMarks:(BOOL)b ;
 - (void) setSendActionDuringAnimation:(BOOL)a ;
 - (id) init;
 - (void) setValue:(float)a ;
 - (float) value;
 - (id) initWithFrame:({CGRect={CGPoint=dd}{CGSize=dd}})a ;
 - (void) drawRect:({CGRect={CGPoint=dd}{CGSize=dd}})a ;
 - (void) setEnabled:(BOOL)a ;


@end
