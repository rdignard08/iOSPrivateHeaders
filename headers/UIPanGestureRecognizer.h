
@interface UIPanGestureRecognizer : UIGestureRecognizer {

    {CGPoint="x"d"y"d} _firstSceneReferenceLocation;
    {CGPoint="x"d"y"d} _lastSceneReferenceLocation;
    double _lastTouchTime;
    id _velocitySample;
    id _previousVelocitySample;
    NSMutableArray* _touches;
    unsigned long long _lastTouchCount;
    unsigned long long _minimumNumberOfTouches;
    unsigned long long _maximumNumberOfTouches;
    double _hysteresis;
    {CGPoint="x"d"y"d} _lastUnadjustedSceneReferenceLocation;
    b1 _failsPastMaxTouches;
    b1 _canPanHorizontally;
    b1 _canPanVertically;
    b1 _ignoresStationaryTouches;
    NSMutableArray* _movingTouches;
    {CGPoint="x"d"y"d} _digitizerLocation;
}
 + (void) _setPanGestureRecognizersEnabled:(BOOL)a;

 - (void) dealloc;
 - (void) setMaximumNumberOfTouches:(unsigned long long)a ;
 - ({CGPoint=dd}) translationInView:(id)a ;
 - ({CGPoint=dd}) velocityInView:(id)a ;
 - (double) _hysteresis;
 - (void) _setHysteresis:(double)a ;
 - ({CGPoint=dd}) locationInView:(id)a ;
 - (void) touchesBegan:(id)a withEvent:(id)b ;
 - (void) touchesMoved:(id)a withEvent:(id)b ;
 - (void) touchesEnded:(id)a withEvent:(id)b ;
 - (void) touchesCancelled:(id)a withEvent:(id)b ;
 - (void) _physicalButtonsBegan:(id)a withEvent:(id)b ;
 - ({CGPoint=dd}) _digitizerLocation;
 - (void) _setIgnoresStationaryTouches:(BOOL)a ;
 - (void) setFailsPastMaxTouches:(BOOL)a ;
 - (void) setTranslation:({CGPoint=dd})a inView:(id)b ;
 - (unsigned long long) numberOfTouches;
 - (void) _setCanPanVertically:(BOOL)a ;
 - (unsigned long long) minimumNumberOfTouches;
 - (void) setMinimumNumberOfTouches:(unsigned long long)a ;
 - ({CGPoint=dd}) locationOfTouch:(unsigned long long)a inView:(id)b ;
 - (void) _resetGestureRecognizer;
 - (void) _willBeginAfterSatisfyingFailureRequirements;
 - (id) _velocitySample;
 - (id) _previousVelocitySample;
 - (void) _resetVelocitySamples;
 - ({CGPoint=dd}) _convertPoint:({CGPoint=dd})a fromSceneReferenceCoordinatesToView:(id)b ;
 - ({CGPoint=dd}) _convertPoint:({CGPoint=dd})a toSceneReferenceCoordinatesFromView:(id)b ;
 - ({CGPoint=dd}) _convertVelocitySample:(id)a fromSceneReferenceCoordinatesToView:(id)b ;
 - ({UIOffset=dd}) _offsetInViewFromSceneReferenceLocation:({CGPoint=dd})a toSceneReferenceLocation:({CGPoint=dd})b ;
 - ({CGPoint=dd}) _shiftPanLocationToNewSceneReferenceLocation:({CGPoint=dd})a lockingToAxis:(int)b ;
 - ({CGPoint=dd}) _adjustSceneReferenceLocation:({CGPoint=dd})a ;
 - (BOOL) _willScrollX;
 - (BOOL) _willScrollY;
 - (void) _updateDigitizerLocationWithEvent:(id)a ;
 - (void) _touchesListChangedFrom:(id)a to:(id)b ;
 - (BOOL) _updateMovingTouchesArraySavingOldArray:(^@)a ;
 - (void) _centroidMovedTo:({CGPoint=dd})a atTime:(double)b ;
 - (void) _processTouchesMoved:(id)a withEvent:(id)b ;
 - (BOOL) _shouldTryToBeginWithEvent:(id)a ;
 - (void) _removeHysteresisFromTranslation;
 - (void) _handleEndedTouches:(id)a withFinalStateAdjustments:(@?)b ;
 - (BOOL) failsPastMaxTouches;
 - (long long) _lastTouchCount;
 - (BOOL) _ignoresStationaryTouches;
 - (BOOL) _canPanHorizontally;
 - (BOOL) _canPanVertically;
 - (void) _setCanPanHorizontally:(BOOL)a ;
 - (unsigned long long) maximumNumberOfTouches;
 - (void) encodeWithCoder:(id)a ;
 - (id) initWithCoder:(id)a ;
 - (id) initWithTarget:(id)a action:(SEL)b ;


@end
