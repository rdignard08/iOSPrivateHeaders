
@interface UITapGestureRecognizer : UIGestureRecognizer {

    {CGPoint="x"d"y"d} _locationInView;
    id _imp;
    I _delaysRecognitionForGreaterTapCounts;
    q _buttonType;
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
 - (q) _buttonType;
 - ({CGPoint=dd}) _digitizerLocation;
 - (void) _setButtonType:(q)a;
 - (d) _touchSloppinessFactor;
 - (Q) numberOfTouches;
 - (BOOL) canPreventGestureRecognizer:(id)a;
 - (Q) numberOfTouchesRequired;
 - (Q) numberOfTapsRequired;
 - (void) setNumberOfTapsRequired:(Q)a;
 - (void) setNumberOfTouchesRequired:(Q)a;
 - ({CGPoint=dd}) locationOfTouch:(Q)ainView:(id)b;
 - (void) setAllowableMovement:(d)a;
 - (void) _resetGestureRecognizer;
 - (void) _appendSubclassDescription:(id)a;
 - (BOOL) _shouldRequireFailureOfGestureRecognizer:(id)a;
 - ({CGPoint=dd}) centroid;
 - (id) touches;
 - (d) maximumIntervalBetweenSuccessiveTaps;
 - (BOOL) tapIsPossibleForTapRecognizer:(id)a;
 - (void) tapRecognizerRecognizedTap:(id)a;
 - (void) tapRecognizerFailedToRecognizeTap:(id)a;
 - (d) allowableMovement;
 - (d) maximumSingleTapDuration;
 - (void) setMaximumSingleTapDuration:(d)a;
 - (void) setMaximumIntervalBetweenSuccessiveTaps:(d)a;
 - (BOOL) _delaysRecognitionForGreaterTapCounts;
 - (void) _setDelaysRecognitionForGreaterTapCounts:(BOOL)a;
 - (void) encodeWithCoder:(id)a;
 - (id) initWithCoder:(id)a;
 - ({CGPoint=dd}) location;
 - (id) initWithTarget:(id)aaction:(SEL)b;


@end
