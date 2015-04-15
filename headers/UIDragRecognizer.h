
@interface UIDragRecognizer : UIGestureRecognizer {

    double _maximumDeviation;
    double _minimumDistance;
    {CGPoint="x"d"y"d} _startPosition;
    BOOL _restrictsToAngle;
    double _angle;
    UITouch* _touch;
    UIDelayedAction* _tooSlow;
    double _startAngle;
    double _quietPeriod;
    BOOL _canBeginDrag;
    SEL _checkCanBeginDrag;
    UIDelayedAction* ignoreTouch;
}

 - (void) dealloc;
 - (void) touchesBegan:(id)a withEvent:(id)b ;
 - (void) touchesMoved:(id)a withEvent:(id)b ;
 - (void) touchesEnded:(id)a withEvent:(id)b ;
 - (void) touchesCancelled:(id)a withEvent:(id)b ;
 - (id) touch;
 - (void) setTouch:(id)a ;
 - (void) _resetGestureRecognizer;
 - (void) setCanBeginDrag:(BOOL)a ;
 - (void) setMinimumDistance:(double)a ;
 - (void) setMaximumDeviation:(double)a ;
 - (void) setQuietPeriod:(double)a ;
 - (void) setCheckCanBeginDrag:(SEL)a ;
 - (void) clearTimer;
 - (void) tooSlow:(id)a ;
 - (void) setRestrictsToAngle:(BOOL)a ;
 - (void) clearIgnoreTouch;
 - (id) ignoreTouch;
 - (void) setIgnoreTouch:(id)a ;
 - (void) setStartPosition:({CGPoint=dd})a ;
 - (double) quietPeriod;
 - (double) minimumDistance;
 - (BOOL) restrictsToAngle;
 - (double) maximumDeviation;
 - (SEL) checkCanBeginDrag;
 - (BOOL) canBeginDrag;
 - (void) setStartAngle:(double)a ;
 - (void) setAngle:(double)a ;
 - (double) angle;
 - (double) startAngle;
 - ({CGPoint=dd}) startPosition;
 - (id) initWithTarget:(id)a action:(SEL)b ;


@end
