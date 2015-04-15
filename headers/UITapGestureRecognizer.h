
@interface UITapGestureRecognizer : UIGestureRecognizer {

    {CGPoint="x"d"y"d} _locationInView;
    id _imp;
    unsigned int _delaysRecognitionForGreaterTapCounts;
    long long _buttonType;
}

 - (void) dealloc;
 - ({CGPoint=dd}) locationInView:(id)a;
 - (void) touchesBegan:(id)awithEvent:(id)b;
 - (void) touchesMoved:(id)awithEvent:(id)b;
 - (void) touchesEnded:(id)awithEvent:(id)b;
 - (void) touchesCancelled:(id)awithEvent:(id)b;
 - (void) _physicalButtonsBegan:(id)awithEvent:(id)b;
 - (void) _physicalButtonsEnded:(id)awithEvent:(id)b;
 - (void) _physicalButtonsCancelled:(id)awithEvent:(id)b;
 - (long long) _buttonType;
 - ({CGPoint=dd}) _digitizerLocation;
 - (void) _setButtonType:(long long)a;
 - (double) _touchSloppinessFactor;
 - (unsigned long long) numberOfTouches;
 - (BOOL) canPreventGestureRecognizer:(id)a;
 - (unsigned long long) numberOfTouchesRequired;
 - (unsigned long long) numberOfTapsRequired;
 - (void) setNumberOfTapsRequired:(unsigned long long)a;
 - (void) setNumberOfTouchesRequired:(unsigned long long)a;
 - ({CGPoint=dd}) locationOfTouch:(unsigned long long)ainView:(id)b;
 - (void) setAllowableMovement:(double)a;
 - (void) _resetGestureRecognizer;
 - (void) _appendSubclassDescription:(id)a;
 - (BOOL) _shouldRequireFailureOfGestureRecognizer:(id)a;
 - ({CGPoint=dd}) centroid;
 - (id) touches;
 - (double) maximumIntervalBetweenSuccessiveTaps;
 - (BOOL) tapIsPossibleForTapRecognizer:(id)a;
 - (void) tapRecognizerRecognizedTap:(id)a;
 - (void) tapRecognizerFailedToRecognizeTap:(id)a;
 - (double) allowableMovement;
 - (double) maximumSingleTapDuration;
 - (void) setMaximumSingleTapDuration:(double)a;
 - (void) setMaximumIntervalBetweenSuccessiveTaps:(double)a;
 - (BOOL) _delaysRecognitionForGreaterTapCounts;
 - (void) _setDelaysRecognitionForGreaterTapCounts:(BOOL)a;
 - (void) encodeWithCoder:(id)a;
 - (id) initWithCoder:(id)a;
 - ({CGPoint=dd}) location;
 - (id) initWithTarget:(id)aaction:(SEL)b;


@end
