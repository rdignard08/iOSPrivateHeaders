
@interface UITextMagnifierRanged : UITextMagnifier {

    d _touchOffsetFromMagnificationPoint;
    d _magnifierOffsetFromTouch;
    BOOL _isHorizontal;
    BOOL _isAnimating;
    q _delayedAnimationType;
}
 + (id) sharedRangedMagnifier;

 - (void) dealloc;
 - (void) stopMagnifying:(BOOL)a;
 - (void) beginMagnifyingTarget:(id)atext:(id)bmagnificationPoint:({CGPoint=dd})coffset:({CGPoint=dd})danimated:(BOOL)e;
 - (void) setMagnificationPoint:({CGPoint=dd})a;
 - (BOOL) terminalPointPlacedCarefully;
 - (i) horizontalMovement;
 - (void) setAutoscrollDirections:(i)a;
 - (id) initWithFrame;
 - (void) zoomUpAnimationDidStop:(id)afinished:(id)b;
 - (void) zoomDownAnimationDidStop:(id)afinished:(id)b;
 - (void) remove;
 - (void) zoomUpAnimation;
 - (void) zoomDownAnimation;
 - ({CGRect={CGPoint=dd}{CGSize=dd}}) caretRectClosestToPoint:({CGPoint=dd})a;
 - (d) offsetFromMagnificationPoint;
 - ({CGPoint=dd}) snappedPoint:({CGPoint=dd})a;
 - (void) updateFrame;
 - ({CGPoint=dd}) clipPoint:({CGPoint=dd})ainRect:({CGRect={CGPoint=dd}{CGSize=dd}})b;
 - (i) horizontalMovementAtTime:(d)a;
 - (BOOL) wasPlacedCarefullyAtTime:(d)a;
 - (BOOL) isHorizontal;
 - (void) setIsHorizontal:(BOOL)a;


@end
