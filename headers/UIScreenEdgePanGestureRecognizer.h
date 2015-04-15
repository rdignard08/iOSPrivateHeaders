
@protocol _UIScreenEdgePanRecognizerDelegate;
@interface UIScreenEdgePanGestureRecognizer : UIPanGestureRecognizer <_UIScreenEdgePanRecognizerDelegate> {

    @"_UIScreenEdgePanRecognizer" _recognizer;
}

 - (void) reset;
 - (void) dealloc;
 - (void) setEdges:(Q)a;
 - (void) touchesBegan:(id)awithEvent:(id)b;
 - (void) touchesMoved:(id)awithEvent:(id)b;
 - (void) screenEdgePanRecognizerStateDidChange:(id)a;
 - (d) _edgeRegionSize;
 - (BOOL) isRequiringLongPress;
 - (BOOL) _shouldTryToBeginWithEvent:(id)a;
 - (Q) edges;
 - (id) initWithTarget:(id)aaction:(SEL)b;


@end
