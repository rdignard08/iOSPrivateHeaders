
@interface UISwipeGestureRecognizer : UIGestureRecognizer {

    d _maximumDuration;
    d _minimumPrimaryMovement;
    d _maximumPrimaryMovement;
    d _minimumSecondaryMovement;
    d _maximumSecondaryMovement;
    d _rateOfMinimumMovementDecay;
    d _rateOfMaximumMovementDecay;
    Q _numberOfTouchesRequired;
    @"NSMutableArray" _touches;
    Q _direction;
    {CGPoint="x"d"y"d} _startLocation;
    ^{CGPoint=dd} _startLocations;
    d _startTime;
    b1 _failed;
}

 - (void) dealloc;
 - ({CGPoint=dd}) locationInView:(id)a;
 - (void) touchesBegan:(id)awithEvent:(id)b;
 - (void) touchesMoved:(id)awithEvent:(id)b;
 - (void) touchesEnded:(id)awithEvent:(id)b;
 - (void) touchesCancelled:(id)awithEvent:(id)b;
 - (Q) numberOfTouches;
 - (void) setMaximumDuration:(d)a;
 - (Q) numberOfTouchesRequired;
 - (void) setNumberOfTouchesRequired:(Q)a;
 - ({CGPoint=dd}) locationOfTouch:(Q)ainView:(id)b;
 - (void) setMinimumPrimaryMovement:(d)a;
 - (void) _resetGestureRecognizer;
 - (void) _appendSubclassDescription:(id)a;
 - (BOOL) _checkForSwipeWithDelta:({CGPoint=dd})atime:(d)b;
 - (d) maximumDuration;
 - (d) minimumPrimaryMovement;
 - (d) maximumPrimaryMovement;
 - (void) setMaximumPrimaryMovement:(d)a;
 - (d) minimumSecondaryMovement;
 - (void) setMinimumSecondaryMovement:(d)a;
 - (d) maximumSecondaryMovement;
 - (void) setMaximumSecondaryMovement:(d)a;
 - (d) rateOfMinimumMovementDecay;
 - (void) setRateOfMinimumMovementDecay:(d)a;
 - (d) rateOfMaximumMovementDecay;
 - (void) setRateOfMaximumMovementDecay:(d)a;
 - (void) encodeWithCoder:(id)a;
 - (id) initWithCoder:(id)a;
 - (void) setDirection:(Q)a;
 - (Q) direction;
 - ({CGPoint=dd}) startPoint;
 - (id) initWithTarget:(id)aaction:(SEL)b;


@end
