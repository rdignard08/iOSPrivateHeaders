
@interface UITapAndAHalfRecognizer : UIGestureRecognizer {

    {CGPoint="x"d"y"d} _startPoint;
    d _allowableMovement;
    i _numberOfFullTaps;
    d _minimumFinalPressDuration;
    @"NSMutableSet" _activeTouches;
    i _currentNumberOfTaps;
    @"UITouch" _touch;
    @"UIDelayedAction" _tapTimer;
}

 - (void) dealloc;
 - (void) touchesBegan:(id)awithEvent:(id)b;
 - (void) touchesMoved:(id)awithEvent:(id)b;
 - (void) touchesEnded:(id)awithEvent:(id)b;
 - (void) touchesCancelled:(id)awithEvent:(id)b;
 - (id) touch;
 - (void) setAllowableMovement:(d)a;
 - (void) setTouch:(id)a;
 - (void) _resetGestureRecognizer;
 - (d) allowableMovement;
 - (void) clearTapTimer;
 - (void) tooSlow:(id)a;
 - (void) startTapTimer:(d)a;
 - (i) numberOfFullTaps;
 - (void) recognized:(id)a;
 - (d) minimumFinalPressDuration;
 - (void) startRecognitionTimer:(d)a;
 - (void) _verifyMovementInAllowableRange;
 - (void) setNumberOfFullTaps:(i)a;
 - (void) setMinimumFinalPressDuration:(d)a;
 - (id) initWithTarget:(id)aaction:(SEL)b;


@end
