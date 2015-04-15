
@interface UIPinchGestureRecognizer : UIGestureRecognizer {

    d _initialTouchDistance;
    d _initialTouchScale;
    d _lastTouchTime;
    d _velocity;
    d _previousVelocity;
    d _scaleThreshold;
    {CGAffineTransform="a"d"b"d"c"d"d"d"tx"d"ty"d} _transform;
    {CGPoint="x"d"y"d} _anchorSceneReferencePoint;
    [2@"UITouch"] _touches;
    d _hysteresis;
    id _transformAnalyzer;
    b1 _endsOnSingleTouch;
}

 - (d) scale;
 - (void) dealloc;
 - (d) _hysteresis;
 - (void) _setHysteresis:(d)a;
 - (void) touchesBegan:(id)awithEvent:(id)b;
 - (void) touchesMoved:(id)awithEvent:(id)b;
 - (void) touchesEnded:(id)awithEvent:(id)b;
 - (void) touchesCancelled:(id)awithEvent:(id)b;
 - (void) _resetGestureRecognizer;
 - (BOOL) _endsOnSingleTouch;
 - (void) _setEndsOnSingleTouch:(BOOL)a;
 - (d) scaleThreshold;
 - (void) setScaleThreshold:(d)a;
 - (id) initWithCoder:(id)a;
 - ({CGPoint=dd}) anchorPoint;
 - (void) setScale:(d)a;
 - (id) initWithTarget:(id)aaction:(SEL)b;
 - (d) velocity;


@end
