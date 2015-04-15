
@interface UITextMagnifierCaret : UITextMagnifier {

    {CGPoint="x"d"y"d} _offset;
    f _yOffset;
}
 + (id) sharedCaretMagnifier;

 - (void) dealloc;
 - (void) stopMagnifying:(BOOL)a;
 - (void) beginMagnifyingTarget:(id)atext:(id)bmagnificationPoint:({CGPoint=dd})coffset:({CGPoint=dd})danimated:(BOOL)e;
 - (void) setMagnificationPoint:({CGPoint=dd})a;
 - (BOOL) terminalPointPlacedCarefully;
 - (void) setAnimationPoint:({CGPoint=dd})a;
 - (void) setAutoscrollDirections:(i)a;
 - (f) yOffset;
 - (id) initWithFrame;
 - (void) updateFrameAndOffset;
 - (void) zoomUpAnimationDidStop:(id)afinished:(id)b;
 - (void) zoomDownAnimationDidStop:(id)afinished:(id)b;
 - (void) remove;
 - (void) zoomUpAnimation;
 - ({CGPoint=dd}) animationPoint;
 - (void) zoomDownAnimation;
 - (void) setYOffset:(f)a;
 - ({CGPoint=dd}) offset;
 - (void) setOffset:({CGPoint=dd})a;


@end
