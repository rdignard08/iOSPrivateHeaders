
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
 - (void) _setHysteresis:(double)a ;
 - (void) touchesBegan:(id)a withEvent:(id)b ;
 - (void) touchesMoved:(id)a withEvent:(id)b ;
 - (void) touchesEnded:(id)a withEvent:(id)b ;
 - (void) touchesCancelled:(id)a withEvent:(id)b ;
 - (void) _resetGestureRecognizer;
 - (BOOL) _endsOnSingleTouch;
 - (void) _setEndsOnSingleTouch:(BOOL)a ;
 - (double) scaleThreshold;
 - (void) setScaleThreshold:(double)a ;
 - (id) initWithCoder:(id)a ;
 - ({CGPoint=dd}) anchorPoint;
 - (void) setScale:(double)a ;
 - (id) initWithTarget:(id)a action:(SEL)b ;
 - (double) velocity;


@end
