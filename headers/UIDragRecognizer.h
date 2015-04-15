
@interface UIDragRecognizer : UIGestureRecognizer {

    d _maximumDeviation;
    d _minimumDistance;
    {CGPoint="x"d"y"d} _startPosition;
    BOOL _restrictsToAngle;
    d _angle;
    @"UITouch" _touch;
    @"UIDelayedAction" _tooSlow;
    d _startAngle;
    d _quietPeriod;
    BOOL _canBeginDrag;
    SEL _checkCanBeginDrag;
    @"UIDelayedAction" ignoreTouch;
}

 - (void) dealloc;
 - (void) touchesBegan:(id)awithEvent:(id)b;
 - (void) touchesMoved:(id)awithEvent:(id)b;
 - (void) touchesEnded:(id)awithEvent:(id)b;
 - (void) touchesCancelled:(id)awithEvent:(id)b;
 - (id) touch;
 - (void) setTouch:(id)a;
 - (void) _resetGestureRecognizer;
 - (void) setCanBeginDrag:(BOOL)a;
 - (void) setMinimumDistance:(d)a;
 - (void) setMaximumDeviation:(d)a;
 - (void) setQuietPeriod:(d)a;
 - (void) setCheckCanBeginDrag:(SEL)a;
 - (void) clearTimer;
 - (void) tooSlow:(id)a;
 - (void) setRestrictsToAngle:(BOOL)a;
 - (void) clearIgnoreTouch;
 - (id) ignoreTouch;
 - (void) setIgnoreTouch:(id)a;
 - (void) setStartPosition:({CGPoint=dd})a;
 - (d) quietPeriod;
 - (d) minimumDistance;
 - (BOOL) restrictsToAngle;
 - (d) maximumDeviation;
 - (SEL) checkCanBeginDrag;
 - (BOOL) canBeginDrag;
 - (void) setStartAngle:(d)a;
 - (void) setAngle:(d)a;
 - (d) angle;
 - (d) startAngle;
 - ({CGPoint=dd}) startPosition;
 - (id) initWithTarget:(id)aaction:(SEL)b;


@end
