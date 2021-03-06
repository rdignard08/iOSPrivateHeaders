
@interface UITapAndAHalfRecognizer : UIGestureRecognizer {

    {CGPoint="x"d"y"d} _startPoint;
    double _allowableMovement;
    int _numberOfFullTaps;
    double _minimumFinalPressDuration;
    NSMutableSet* _activeTouches;
    int _currentNumberOfTaps;
    UITouch* _touch;
    UIDelayedAction* _tapTimer;
}

 - (void) dealloc;
 - (void) touchesBegan:(id)a withEvent:(id)b ;
 - (void) touchesMoved:(id)a withEvent:(id)b ;
 - (void) touchesEnded:(id)a withEvent:(id)b ;
 - (void) touchesCancelled:(id)a withEvent:(id)b ;
 - (id) touch;
 - (void) setAllowableMovement:(double)a ;
 - (void) setTouch:(id)a ;
 - (void) _resetGestureRecognizer;
 - (double) allowableMovement;
 - (void) clearTapTimer;
 - (void) tooSlow:(id)a ;
 - (void) startTapTimer:(double)a ;
 - (int) numberOfFullTaps;
 - (void) recognized:(id)a ;
 - (double) minimumFinalPressDuration;
 - (void) startRecognitionTimer:(double)a ;
 - (void) _verifyMovementInAllowableRange;
 - (void) setNumberOfFullTaps:(int)a ;
 - (void) setMinimumFinalPressDuration:(double)a ;
 - (id) initWithTarget:(id)a action:(SEL)b ;


@end
