
@interface UIWebTouchEventsGestureRecognizer : UIGestureRecognizer {

    id _touchTarget;
    SEL _touchAction;
    @"<UIWebTouchEventsGestureRecognizerDelegate>" _webTouchDelegate;
    BOOL _passedHitTest;
    BOOL _defaultPrevented;
    BOOL _dispatchingTouchEvents;
    d _originalGestureDistance;
    d _originalGestureAngle;
    {_UIWebTouchEvent="type"i"timestamp"d"locationInScreenCoordinates"{CGPoint="x"d"y"d}"locationInDocumentCoordinates"{CGPoint="x"d"y"d}"scale"d"rotation"d"inJavaScriptGesture"B"touchPoints"^{_UIWebTouchPoint}"touchPointCount"I} _lastTouchEvent;
}
 + (void) initialize;

 - (d) scale;
 - (void) reset;
 - (void) dealloc;
 - (void) touchesBegan:(id)awithEvent:(id)b;
 - (void) touchesMoved:(id)awithEvent:(id)b;
 - (void) touchesEnded:(id)awithEvent:(id)b;
 - (void) touchesCancelled:(id)awithEvent:(id)b;
 - (BOOL) canBePreventedByGestureRecognizer:(id)a;
 - (void) _recordTouches:(id)atype:(i)b;
 - (void) _processTouches:(id)awithEvent:(id)btype:(i)c;
 - (id) initWithTarget:(id)aaction:(SEL)btouchDelegate:(id)c;
 - (r^{_UIWebTouchEvent=id{CGPoint=dd}{CGPoint=dd}ddB^{_UIWebTouchPoint}I}) lastTouchEvent;
 - (BOOL) inJavaScriptGesture;
 - (BOOL) isDefaultPrevented;
 - (void) setDefaultPrevented:(BOOL)a;
 - (BOOL) isDispatchingTouchEvents;
 - (i) type;
 - (d) rotation;
 - ({CGPoint=dd}) locationInWindow;
 - (id) touchIdentifiers;
 - (id) touchLocations;
 - (id) touchPhases;


@end
