
@protocol _UIScreenEdgePanRecognizerDelegate;
@interface UIScreenEdgePanGestureRecognizer : UIPanGestureRecognizer <_UIScreenEdgePanRecognizerDelegate> {

    _UIScreenEdgePanRecognizer* _recognizer;
}

 - (void) reset;
 - (void) dealloc;
 - (void) setEdges:(unsigned long long)a;
 - (void) touchesBegan:(id)awithEvent:(id)b;
 - (void) touchesMoved:(id)awithEvent:(id)b;
 - (void) screenEdgePanRecognizerStateDidChange:(id)a;
 - (double) _edgeRegionSize;
 - (BOOL) isRequiringLongPress;
 - (BOOL) _shouldTryToBeginWithEvent:(id)a;
 - (unsigned long long) edges;
 - (id) initWithTarget:(id)aaction:(SEL)b;


@end
