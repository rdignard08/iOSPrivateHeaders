
@interface UILongPressGestureRecognizer : UIGestureRecognizer {

    @"NSArray" _touches;
    @"NSMutableSet" _activeTouches;
    Q _numberOfTouchesRequired;
    d _minimumPressDuration;
    d _allowableMovement;
    {CGPoint="x"d"y"d} _startPointScreen;
    id _enoughTimeElapsed;
    id _tooMuchTimeElapsed;
    id _imp;
    b1 _gotTouchEnd;
    b1 _gotTooMany;
    b1 _gotEnoughTaps;
    b1 _cancelPastAllowableMovement;
    q _buttonType;
}

 - (void) dealloc;
 - (void) invalidate;
 - ({CGPoint=dd}) locationInView:(id)a;
 - (void) touchesBegan:(id)awithEvent:(id)b;
 - (void) touchesMoved:(id)awithEvent:(id)b;
 - (void) touchesEnded:(id)awithEvent:(id)b;
 - (void) touchesCancelled:(id)awithEvent:(id)b;
 - (void) setDelay:(d)a;
 - (void) _physicalButtonsBegan:(id)awithEvent:(id)b;
 - (void) _physicalButtonsEnded:(id)awithEvent:(id)b;
 - (void) _physicalButtonsCancelled:(id)awithEvent:(id)b;
 - (q) _buttonType;
 - (void) setView:(id)a;
 - (void) _setButtonType:(q)a;
 - (d) _touchSloppinessFactor;
 - (Q) numberOfTouches;
 - (BOOL) canPreventGestureRecognizer:(id)a;
 - (void) setMinimumPressDuration:(d)a;
 - (Q) numberOfTouchesRequired;
 - (Q) numberOfTapsRequired;
 - (void) setNumberOfTapsRequired:(Q)a;
 - (void) setNumberOfTouchesRequired:(Q)a;
 - ({CGPoint=dd}) locationOfTouch:(Q)ainView:(id)b;
 - (void) setAllowableMovement:(d)a;
 - (void) _resetGestureRecognizer;
 - ({CGPoint=dd}) centroid;
 - (id) touches;
 - (void) clearTimer;
 - (void) setTouches:(id)a;
 - (void) enoughTimeElapsed:(id)a;
 - (void) tooMuchElapsed:(id)a;
 - ({CGPoint=dd}) centroidScreen;
 - (void) startTimer;
 - (void) _interactionsEndedWithValidTouches:(BOOL)a;
 - (void) _startTapFinishedTimer;
 - (d) minimumPressDuration;
 - (BOOL) cancelPastAllowableMovement;
 - (void) setCancelPastAllowableMovement:(BOOL)a;
 - (BOOL) tapIsPossibleForTapRecognizer:(id)a;
 - (void) tapRecognizerRecognizedTap:(id)a;
 - (void) tapRecognizerFailedToRecognizeTap:(id)a;
 - (d) allowableMovement;
 - (void) encodeWithCoder:(id)a;
 - (id) initWithCoder:(id)a;
 - (d) delay;
 - ({CGPoint=dd}) startPoint;
 - (id) initWithTarget:(id)aaction:(SEL)b;


@end
