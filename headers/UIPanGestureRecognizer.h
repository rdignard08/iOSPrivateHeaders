
@interface UIPanGestureRecognizer : UIGestureRecognizer {

    {CGPoint="x"d"y"d} _firstSceneReferenceLocation;
    {CGPoint="x"d"y"d} _lastSceneReferenceLocation;
    d _lastTouchTime;
    id _velocitySample;
    id _previousVelocitySample;
    @"NSMutableArray" _touches;
    Q _lastTouchCount;
    Q _minimumNumberOfTouches;
    Q _maximumNumberOfTouches;
    d _hysteresis;
    {CGPoint="x"d"y"d} _lastUnadjustedSceneReferenceLocation;
    b1 _failsPastMaxTouches;
    b1 _canPanHorizontally;
    b1 _canPanVertically;
    b1 _ignoresStationaryTouches;
    @"NSMutableArray" _movingTouches;
    {CGPoint="x"d"y"d} _digitizerLocation;
}
 + (void) _setPanGestureRecognizersEnabled:(BOOL)a;

 - (void) dealloc;
 - (void) setMaximumNumberOfTouches:(Q)a;
 - ({CGPoint=dd}) translationInView:(id)a;
 - ({CGPoint=dd}) velocityInView:(id)a;
 - (d) _hysteresis;
 - (void) _setHysteresis:(d)a;
 - ({CGPoint=dd}) locationInView:(id)a;
 - (void) touchesBegan:(id)awithEvent:(id)b;
 - (void) touchesMoved:(id)awithEvent:(id)b;
 - (void) touchesEnded:(id)awithEvent:(id)b;
 - (void) touchesCancelled:(id)awithEvent:(id)b;
 - (void) _physicalButtonsBegan:(id)awithEvent:(id)b;
 - ({CGPoint=dd}) _digitizerLocation;
 - (void) _setIgnoresStationaryTouches:(BOOL)a;
 - (void) setFailsPastMaxTouches:(BOOL)a;
 - (void) setTranslation:({CGPoint=dd})ainView:(id)b;
 - (Q) numberOfTouches;
 - (void) _setCanPanVertically:(BOOL)a;
 - (Q) minimumNumberOfTouches;
 - (void) setMinimumNumberOfTouches:(Q)a;
 - ({CGPoint=dd}) locationOfTouch:(Q)ainView:(id)b;
 - (void) _resetGestureRecognizer;
 - (void) _willBeginAfterSatisfyingFailureRequirements;
 - (id) _velocitySample;
 - (id) _previousVelocitySample;
 - (void) _resetVelocitySamples;
 - ({CGPoint=dd}) _convertPoint:({CGPoint=dd})afromSceneReferenceCoordinatesToView:(id)b;
 - ({CGPoint=dd}) _convertPoint:({CGPoint=dd})atoSceneReferenceCoordinatesFromView:(id)b;
 - ({CGPoint=dd}) _convertVelocitySample:(id)afromSceneReferenceCoordinatesToView:(id)b;
 - ({UIOffset=dd}) _offsetInViewFromSceneReferenceLocation:({CGPoint=dd})atoSceneReferenceLocation:({CGPoint=dd})b;
 - ({CGPoint=dd}) _shiftPanLocationToNewSceneReferenceLocation:({CGPoint=dd})alockingToAxis:(i)b;
 - ({CGPoint=dd}) _adjustSceneReferenceLocation:({CGPoint=dd})a;
 - (BOOL) _willScrollX;
 - (BOOL) _willScrollY;
 - (void) _updateDigitizerLocationWithEvent:(id)a;
 - (void) _touchesListChangedFrom:(id)ato:(id)b;
 - (BOOL) _updateMovingTouchesArraySavingOldArray:(^@)a;
 - (void) _centroidMovedTo:({CGPoint=dd})aatTime:(d)b;
 - (void) _processTouchesMoved:(id)awithEvent:(id)b;
 - (BOOL) _shouldTryToBeginWithEvent:(id)a;
 - (void) _removeHysteresisFromTranslation;
 - (void) _handleEndedTouches:(id)awithFinalStateAdjustments:(@?)b;
 - (BOOL) failsPastMaxTouches;
 - (q) _lastTouchCount;
 - (BOOL) _ignoresStationaryTouches;
 - (BOOL) _canPanHorizontally;
 - (BOOL) _canPanVertically;
 - (void) _setCanPanHorizontally:(BOOL)a;
 - (Q) maximumNumberOfTouches;
 - (void) encodeWithCoder:(id)a;
 - (id) initWithCoder:(id)a;
 - (id) initWithTarget:(id)aaction:(SEL)b;


@end
