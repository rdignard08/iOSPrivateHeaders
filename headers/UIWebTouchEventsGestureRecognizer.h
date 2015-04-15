
@interface UIWebTouchEventsGestureRecognizer : UIGestureRecognizer {

    id _touchTarget;
    SEL _touchAction;
    <UIWebTouchEventsGestureRecognizerDelegate>* _webTouchDelegate;
    BOOL _passedHitTest;
    BOOL _defaultPrevented;
    BOOL _dispatchingTouchEvents;
    double _originalGestureDistance;
    double _originalGestureAngle;
    {_UIWebTouchEvent="type"i"timestamp"d"locationInScreenCoordinates"{CGPoint="x"d"y"d}"locationInDocumentCoordinates"{CGPoint="x"d"y"d}"scale"d"rotation"d"inJavaScriptGesture"B"touchPoints"^{_UIWebTouchPoint}"touchPointCount"I} _lastTouchEvent;
}
 + (void) initialize;

 - (double) scale;
 - (void) reset;
 - (void) dealloc;
 - (void) touchesBegan:(id)a withEvent:(id)b ;
 - (void) touchesMoved:(id)a withEvent:(id)b ;
 - (void) touchesEnded:(id)a withEvent:(id)b ;
 - (void) touchesCancelled:(id)a withEvent:(id)b ;
 - (BOOL) canBePreventedByGestureRecognizer:(id)a ;
 - (void) _recordTouches:(id)a type:(int)b ;
 - (void) _processTouches:(id)a withEvent:(id)b type:(int)c ;
 - (id) initWithTarget:(id)a action:(SEL)b touchDelegate:(id)c ;
 - (r^{_UIWebTouchEvent=id{CGPoint=dd}{CGPoint=dd}ddB^{_UIWebTouchPoint}I}) lastTouchEvent;
 - (BOOL) inJavaScriptGesture;
 - (BOOL) isDefaultPrevented;
 - (void) setDefaultPrevented:(BOOL)a ;
 - (BOOL) isDispatchingTouchEvents;
 - (int) type;
 - (double) rotation;
 - ({CGPoint=dd}) locationInWindow;
 - (id) touchIdentifiers;
 - (id) touchLocations;
 - (id) touchPhases;


@end
