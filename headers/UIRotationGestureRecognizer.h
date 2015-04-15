
@interface UIRotationGestureRecognizer : UIGestureRecognizer {

    d _initialTouchDistance;
    d _initialTouchAngle;
    d _currentTouchAngle;
    q _currentRotationCount;
    d _lastTouchTime;
    d _velocity;
    d _previousVelocity;
    {CGPoint="x"d"y"d} _anchorSceneReferencePoint;
    id _transformAnalyzer;
    [2@"UITouch"] _touches;
    f _preRecognitionWeight;
    f _postRecognitionWeight;
}

 - (void) dealloc;
 - (void) touchesBegan:(id)awithEvent:(id)b;
 - (void) touchesMoved:(id)awithEvent:(id)b;
 - (void) touchesEnded:(id)awithEvent:(id)b;
 - (void) touchesCancelled:(id)awithEvent:(id)b;
 - (void) setRotation:(d)a;
 - (void) _resetGestureRecognizer;
 - (void) _updateTransformAnalyzerWeights;
 - (void) _setPreRecognitionWeight:(d)a;
 - (d) _preRecognitionWeight;
 - (void) _setPostRecognitionWeight:(d)a;
 - (d) _postRecognitionWeight;
 - (id) initWithCoder:(id)a;
 - ({CGPoint=dd}) anchorPoint;
 - (d) rotation;
 - (id) initWithTarget:(id)aaction:(SEL)b;
 - (d) velocity;


@end
