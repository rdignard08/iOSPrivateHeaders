
@interface UIPanGestureRecognizer : UIGestureRecognizer {

    {CGPoint="x"d"y"d} _firstSceneReferenceLocation;
    {CGPoint="x"d"y"d} _lastSceneReferenceLocation;
    double _lastTouchTime;
    id _velocitySample;
    id _previousVelocitySample;
    @"NSMutableArray" _touches;
    unsigned long long _lastTouchCount;
    unsigned long long _minimumNumberOfTouches;
    unsigned long long _maximumNumberOfTouches;
    double _hysteresis;
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
 - (void) setMaximumNumberOfTouches:(unsigned long long)a;
 - ({CGPoint=dd}) translationInView:(id)a;
 - ({CGPoint=dd}) velocityInView:(id)a;
 - (double) _hysteresis;
 - (void) _setHysteresis:(double)a;
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
 - (unsigned long long) numberOfTouches;
 - (void) _setCanPanVertically:(BOOL)a;
 - (unsigned long long) minimumNumberOfTouches;
 - (void) setMinimumNumberOfTouches:(unsigned long long)a;
 - ({CGPoint=dd}) locationOfTouch:(unsigned long long)ainView:(id)b;
 - (void) _resetGestureRecognizer;
 - (void) _willBeginAfterSatisfyingFailureRequirements;
 - (id) _velocitySample;
 - (id) _previousVelocitySample;
 - (void) _resetVelocitySamples;
 - ({CGPoint=dd}) _convertPoint:({CGPoint=dd})afromSceneReferenceCoordinatesToView:(id)b;
 - ({CGPoint=dd}) _convertPoint:({CGPoint=dd})atoSceneReferenceCoordinatesFromView:(id)b;
 - ({CGPoint=dd}) _convertVelocitySample:(id)afromSceneReferenceCoordinatesToView:(id)b;
 - ({UIOffset=dd}) _offsetInViewFromSceneReferenceLocation:({CGPoint=dd})atoSceneReferenceLocation:({CGPoint=dd})b;
 - ({CGPoint=dd}) _shiftPanLocationToNewSceneReferenceLocation:({CGPoint=dd})alockingToAxis:(int)b;
 - ({CGPoint=dd}) _adjustSceneReferenceLocation:({CGPoint=dd})a;
 - (BOOL) _willScrollX;
 - (BOOL) _willScrollY;
 - (void) _updateDigitizerLocationWithEvent:(id)a;
 - (void) _touchesListChangedFrom:(id)ato:(id)b;
 - (BOOL) _updateMovingTouchesArraySavingOldArray:(^@)a;
 - (void) _centroidMovedTo:({CGPoint=dd})aatTime:(double)b;
 - (void) _processTouchesMoved:(id)awithEvent:(id)b;
 - (BOOL) _shouldTryToBeginWithEvent:(id)a;
 - (void) _removeHysteresisFromTranslation;
 - (void) _handleEndedTouches:(id)awithFinalStateAdjustments:(@?)b;
 - (BOOL) failsPastMaxTouches;
 - (long long) _lastTouchCount;
 - (BOOL) _ignoresStationaryTouches;
 - (BOOL) _canPanHorizontally;
 - (BOOL) _canPanVertically;
 - (void) _setCanPanHorizontally:(BOOL)a;
 - (unsigned long long) maximumNumberOfTouches;
 - (void) encodeWithCoder:(id)a;
 - (id) initWithCoder:(id)a;
 - (id) initWithTarget:(id)aaction:(SEL)b;


@end
