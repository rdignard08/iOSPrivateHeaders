
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
    [2@"UITouch"] _touches;
    float _preRecognitionWeight;
    float _postRecognitionWeight;
}

 - (void) dealloc;
 - (void) touchesBegan:(id)awithEvent:(id)b;
 - (void) touchesMoved:(id)awithEvent:(id)b;
 - (void) touchesEnded:(id)awithEvent:(id)b;
 - (void) touchesCancelled:(id)awithEvent:(id)b;
 - (void) setRotation:(double)a;
 - (void) _resetGestureRecognizer;
 - (void) _updateTransformAnalyzerWeights;
 - (void) _setPreRecognitionWeight:(double)a;
 - (double) _preRecognitionWeight;
 - (void) _setPostRecognitionWeight:(double)a;
 - (double) _postRecognitionWeight;
 - (id) initWithCoder:(id)a;
 - ({CGPoint=dd}) anchorPoint;
 - (double) rotation;
 - (id) initWithTarget:(id)aaction:(SEL)b;
 - (double) velocity;


@end
