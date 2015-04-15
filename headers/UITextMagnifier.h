
@interface UITextMagnifier : UIView {

    UIView* _target;
    {CGPoint="x"d"y"d} _magnificationPoint;
    {CGPoint="x"d"y"d} _animationPoint;
    {CGPoint="x"d"y"d} _terminalPoint;
    BOOL _terminalPointPlacedCarefully;
    UIResponder<UITextInput>* _text;
    UITextMagnifierTimeWeightedPoint* _weightedPoint;
    UIView* _magnifierRenderer;
    UIView* _autoscrollRenderer;
    int _autoscrollDirections;
}
 + (id) getLoupeBackgroundColor:(id)a;

 - (id) target;
 - (void) dealloc;
 - (void) setTarget:(id)a;
 - (void) setText:(id)a;
 - (void) autoscrollWillNotStart;
 - (void) postAutoscrollPoint:({CGPoint=dd})a;
 - (void) stopMagnifying:(BOOL)a;
 - (void) beginMagnifyingTarget:(id)atext:(id)bmagnificationPoint:({CGPoint=dd})coffset:({CGPoint=dd})danimated:(BOOL)e;
 - (void) setMagnificationPoint:({CGPoint=dd})a;
 - ({CGPoint=dd}) terminalPoint;
 - (BOOL) terminalPointPlacedCarefully;
 - (void) setAnimationPoint:({CGPoint=dd})a;
 - (void) setAutoscrollDirections:(int)a;
 - (void) animateToMagnifierRenderer;
 - (void) animateToAutoscrollRenderer;
 - (void) zoomUpAnimationDidStop:(id)afinished:(id)b;
 - (void) zoomDownAnimationDidStop:(id)afinished:(id)b;
 - (void) remove;
 - ({CGPoint=dd}) magnificationPoint;
 - (void) detectLostTouches:(id)a;
 - (void) setToMagnifierRenderer;
 - (void) zoomUpAnimation;
 - (void) windowWillRotate:(id)a;
 - ({CGPoint=dd}) animationPoint;
 - (void) zoomDownAnimation;
 - (id) initWithFrame:({CGRect={CGPoint=dd}{CGSize=dd}})a;
 - (void) setFrame:({CGRect={CGPoint=dd}{CGSize=dd}})a;
 - (void) setNeedsDisplay;
 - (id) text;


@end
