
@interface UIPinchGestureRecognizer : UIGestureRecognizer {

    double _initialTouchDistance;
    double _initialTouchScale;
    double _lastTouchTime;
    double _velocity;
    double _previousVelocity;
    double _scaleThreshold;
    {CGAffineTransform="a"d"b"d"c"d"d"d"tx"d"ty"d} _transform;
    {CGPoint="x"d"y"d} _anchorSceneReferencePoint;
    UITouch* _touches;
    double _hysteresis;
    id _transformAnalyzer;
    b1 _endsOnSingleTouch;
}

 - (double) scale;
 - (void) dealloc;
 - (double) _hysteresis;
 - (void) _setHysteresis:(double)a;
 - (void) touchesBegan:(id)awithEvent:(id)b;
 - (void) touchesMoved:(id)awithEvent:(id)b;
 - (void) touchesEnded:(id)awithEvent:(id)b;
 - (void) touchesCancelled:(id)awithEvent:(id)b;
 - (void) _resetGestureRecognizer;
 - (BOOL) _endsOnSingleTouch;
 - (void) _setEndsOnSingleTouch:(BOOL)a;
 - (double) scaleThreshold;
 - (void) setScaleThreshold:(double)a;
 - (id) initWithCoder:(id)a;
 - ({CGPoint=dd}) anchorPoint;
 - (void) setScale:(double)a;
 - (id) initWithTarget:(id)aaction:(SEL)b;
 - (double) velocity;


@end
