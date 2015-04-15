
@interface UILongPressGestureRecognizer : UIGestureRecognizer {

    NSArray _touches;
    NSMutableSet _activeTouches;
    unsigned long long _numberOfTouchesRequired;
    double _minimumPressDuration;
    double _allowableMovement;
    {CGPoint="x"d"y"d} _startPointScreen;
    id _enoughTimeElapsed;
    id _tooMuchTimeElapsed;
    id _imp;
    b1 _gotTouchEnd;
    b1 _gotTooMany;
    b1 _gotEnoughTaps;
    b1 _cancelPastAllowableMovement;
    long long _buttonType;
}

 - (void) dealloc;
 - (void) invalidate;
 - ({CGPoint=dd}) locationInView:(id)a;
 - (void) touchesBegan:(id)awithEvent:(id)b;
 - (void) touchesMoved:(id)awithEvent:(id)b;
 - (void) touchesEnded:(id)awithEvent:(id)b;
 - (void) touchesCancelled:(id)awithEvent:(id)b;
 - (void) setDelay:(double)a;
 - (void) _physicalButtonsBegan:(id)awithEvent:(id)b;
 - (void) _physicalButtonsEnded:(id)awithEvent:(id)b;
 - (void) _physicalButtonsCancelled:(id)awithEvent:(id)b;
 - (long long) _buttonType;
 - (void) setView:(id)a;
 - (void) _setButtonType:(long long)a;
 - (double) _touchSloppinessFactor;
 - (unsigned long long) numberOfTouches;
 - (BOOL) canPreventGestureRecognizer:(id)a;
 - (void) setMinimumPressDuration:(double)a;
 - (unsigned long long) numberOfTouchesRequired;
 - (unsigned long long) numberOfTapsRequired;
 - (void) setNumberOfTapsRequired:(unsigned long long)a;
 - (void) setNumberOfTouchesRequired:(unsigned long long)a;
 - ({CGPoint=dd}) locationOfTouch:(unsigned long long)ainView:(id)b;
 - (void) setAllowableMovement:(double)a;
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
 - (double) minimumPressDuration;
 - (BOOL) cancelPastAllowableMovement;
 - (void) setCancelPastAllowableMovement:(BOOL)a;
 - (BOOL) tapIsPossibleForTapRecognizer:(id)a;
 - (void) tapRecognizerRecognizedTap:(id)a;
 - (void) tapRecognizerFailedToRecognizeTap:(id)a;
 - (double) allowableMovement;
 - (void) encodeWithCoder:(id)a;
 - (id) initWithCoder:(id)a;
 - (double) delay;
 - ({CGPoint=dd}) startPoint;
 - (id) initWithTarget:(id)aaction:(SEL)b;


@end
