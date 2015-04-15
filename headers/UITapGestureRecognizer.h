
@interface UITapGestureRecognizer : UIGestureRecognizer {

    {CGPoint="x"d"y"d} _locationInView;
    id _imp;
    unsigned int _delaysRecognitionForGreaterTapCounts;
    long long _buttonType;
}

 - (void) dealloc;
 - ({CGPoint=dd}) locationInView:(id)a ;
 - (void) touchesBegan:(id)a withEvent:(id)b ;
 - (void) touchesMoved:(id)a withEvent:(id)b ;
 - (void) touchesEnded:(id)a withEvent:(id)b ;
 - (void) touchesCancelled:(id)a withEvent:(id)b ;
 - (void) _physicalButtonsBegan:(id)a withEvent:(id)b ;
 - (void) _physicalButtonsEnded:(id)a withEvent:(id)b ;
 - (void) _physicalButtonsCancelled:(id)a withEvent:(id)b ;
 - (long long) _buttonType;
 - ({CGPoint=dd}) _digitizerLocation;
 - (void) _setButtonType:(long long)a ;
 - (double) _touchSloppinessFactor;
 - (unsigned long long) numberOfTouches;
 - (BOOL) canPreventGestureRecognizer:(id)a ;
 - (unsigned long long) numberOfTouchesRequired;
 - (unsigned long long) numberOfTapsRequired;
 - (void) setNumberOfTapsRequired:(unsigned long long)a ;
 - (void) setNumberOfTouchesRequired:(unsigned long long)a ;
 - ({CGPoint=dd}) locationOfTouch:(unsigned long long)a inView:(id)b ;
 - (void) setAllowableMovement:(double)a ;
 - (void) _resetGestureRecognizer;
 - (void) _appendSubclassDescription:(id)a ;
 - (BOOL) _shouldRequireFailureOfGestureRecognizer:(id)a ;
 - ({CGPoint=dd}) centroid;
 - (id) touches;
 - (double) maximumIntervalBetweenSuccessiveTaps;
 - (BOOL) tapIsPossibleForTapRecognizer:(id)a ;
 - (void) tapRecognizerRecognizedTap:(id)a ;
 - (void) tapRecognizerFailedToRecognizeTap:(id)a ;
 - (double) allowableMovement;
 - (double) maximumSingleTapDuration;
 - (void) setMaximumSingleTapDuration:(double)a ;
 - (void) setMaximumIntervalBetweenSuccessiveTaps:(double)a ;
 - (BOOL) _delaysRecognitionForGreaterTapCounts;
 - (void) _setDelaysRecognitionForGreaterTapCounts:(BOOL)a ;
 - (void) encodeWithCoder:(id)a ;
 - (id) initWithCoder:(id)a ;
 - ({CGPoint=dd}) location;
 - (id) initWithTarget:(id)a action:(SEL)b ;


@end
