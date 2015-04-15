
@interface UISwipeGestureRecognizer : UIGestureRecognizer {

    double _maximumDuration;
    double _minimumPrimaryMovement;
    double _maximumPrimaryMovement;
    double _minimumSecondaryMovement;
    double _maximumSecondaryMovement;
    double _rateOfMinimumMovementDecay;
    double _rateOfMaximumMovementDecay;
    unsigned long long _numberOfTouchesRequired;
    NSMutableArray* _touches;
    unsigned long long _direction;
    {CGPoint="x"d"y"d} _startLocation;
    ^{CGPoint=dd} _startLocations;
    double _startTime;
    b1 _failed;
}

 - (void) dealloc;
 - ({CGPoint=dd}) locationInView:(id)a ;
 - (void) touchesBegan:(id)a withEvent:(id)b ;
 - (void) touchesMoved:(id)a withEvent:(id)b ;
 - (void) touchesEnded:(id)a withEvent:(id)b ;
 - (void) touchesCancelled:(id)a withEvent:(id)b ;
 - (unsigned long long) numberOfTouches;
 - (void) setMaximumDuration:(double)a ;
 - (unsigned long long) numberOfTouchesRequired;
 - (void) setNumberOfTouchesRequired:(unsigned long long)a ;
 - ({CGPoint=dd}) locationOfTouch:(unsigned long long)a inView:(id)b ;
 - (void) setMinimumPrimaryMovement:(double)a ;
 - (void) _resetGestureRecognizer;
 - (void) _appendSubclassDescription:(id)a ;
 - (BOOL) _checkForSwipeWithDelta:({CGPoint=dd})a time:(double)b ;
 - (double) maximumDuration;
 - (double) minimumPrimaryMovement;
 - (double) maximumPrimaryMovement;
 - (void) setMaximumPrimaryMovement:(double)a ;
 - (double) minimumSecondaryMovement;
 - (void) setMinimumSecondaryMovement:(double)a ;
 - (double) maximumSecondaryMovement;
 - (void) setMaximumSecondaryMovement:(double)a ;
 - (double) rateOfMinimumMovementDecay;
 - (void) setRateOfMinimumMovementDecay:(double)a ;
 - (double) rateOfMaximumMovementDecay;
 - (void) setRateOfMaximumMovementDecay:(double)a ;
 - (void) encodeWithCoder:(id)a ;
 - (id) initWithCoder:(id)a ;
 - (void) setDirection:(unsigned long long)a ;
 - (unsigned long long) direction;
 - ({CGPoint=dd}) startPoint;
 - (id) initWithTarget:(id)a action:(SEL)b ;


@end
