
@interface UIRotationGestureRecognizer : UIGestureRecognizer {

    double _initialTouchDistance;
    double _initialTouchAngle;
    double _currentTouchAngle;
    long long _currentRotationCount;
    double _lastTouchTime;
    double _velocity;
    double _previousVelocity;
    {CGPoint="x"d"y"d} _anchorSceneReferencePoint;
    id _transformAnalyzer;
    UITouch* _touches;
    float _preRecognitionWeight;
    float _postRecognitionWeight;
}

 - (void) dealloc;
 - (void) touchesBegan:(id)a withEvent:(id)b ;
 - (void) touchesMoved:(id)a withEvent:(id)b ;
 - (void) touchesEnded:(id)a withEvent:(id)b ;
 - (void) touchesCancelled:(id)a withEvent:(id)b ;
 - (void) setRotation:(double)a ;
 - (void) _resetGestureRecognizer;
 - (void) _updateTransformAnalyzerWeights;
 - (void) _setPreRecognitionWeight:(double)a ;
 - (double) _preRecognitionWeight;
 - (void) _setPostRecognitionWeight:(double)a ;
 - (double) _postRecognitionWeight;
 - (id) initWithCoder:(id)a ;
 - ({CGPoint=dd}) anchorPoint;
 - (double) rotation;
 - (id) initWithTarget:(id)a action:(SEL)b ;
 - (double) velocity;


@end
