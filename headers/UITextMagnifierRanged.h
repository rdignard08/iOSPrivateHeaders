
@interface UITextMagnifierRanged : UITextMagnifier {

    double _touchOffsetFromMagnificationPoint;
    double _magnifierOffsetFromTouch;
    BOOL _isHorizontal;
    BOOL _isAnimating;
    long long _delayedAnimationType;
}
 + (id) sharedRangedMagnifier;

 - (void) dealloc;
 - (void) stopMagnifying:(BOOL)a ;
 - (void) beginMagnifyingTarget:(id)a text:(id)b magnificationPoint:({CGPoint=dd})c offset:({CGPoint=dd})d animated:(BOOL)e ;
 - (void) setMagnificationPoint:({CGPoint=dd})a ;
 - (BOOL) terminalPointPlacedCarefully;
 - (int) horizontalMovement;
 - (void) setAutoscrollDirections:(int)a ;
 - (id) initWithFrame;
 - (void) zoomUpAnimationDidStop:(id)a finished:(id)b ;
 - (void) zoomDownAnimationDidStop:(id)a finished:(id)b ;
 - (void) remove;
 - (void) zoomUpAnimation;
 - (void) zoomDownAnimation;
 - ({CGRect={CGPoint=dd}{CGSize=dd}}) caretRectClosestToPoint:({CGPoint=dd})a ;
 - (double) offsetFromMagnificationPoint;
 - ({CGPoint=dd}) snappedPoint:({CGPoint=dd})a ;
 - (void) updateFrame;
 - ({CGPoint=dd}) clipPoint:({CGPoint=dd})a inRect:({CGRect={CGPoint=dd}{CGSize=dd}})b ;
 - (int) horizontalMovementAtTime:(double)a ;
 - (BOOL) wasPlacedCarefullyAtTime:(double)a ;
 - (BOOL) isHorizontal;
 - (void) setIsHorizontal:(BOOL)a ;


@end
