
@interface UITextMagnifierCaret : UITextMagnifier {

    {CGPoint="x"d"y"d} _offset;
    float _yOffset;
}
 + (id) sharedCaretMagnifier;

 - (void) dealloc;
 - (void) stopMagnifying:(BOOL)a ;
 - (void) beginMagnifyingTarget:(id)a text:(id)b magnificationPoint:({CGPoint=dd})c offset:({CGPoint=dd})d animated:(BOOL)e ;
 - (void) setMagnificationPoint:({CGPoint=dd})a ;
 - (BOOL) terminalPointPlacedCarefully;
 - (void) setAnimationPoint:({CGPoint=dd})a ;
 - (void) setAutoscrollDirections:(int)a ;
 - (float) yOffset;
 - (id) initWithFrame;
 - (void) updateFrameAndOffset;
 - (void) zoomUpAnimationDidStop:(id)a finished:(id)b ;
 - (void) zoomDownAnimationDidStop:(id)a finished:(id)b ;
 - (void) remove;
 - (void) zoomUpAnimation;
 - ({CGPoint=dd}) animationPoint;
 - (void) zoomDownAnimation;
 - (void) setYOffset:(float)a ;
 - ({CGPoint=dd}) offset;
 - (void) setOffset:({CGPoint=dd})a ;


@end
