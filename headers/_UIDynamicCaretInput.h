
@protocol UIKBHandwritingStrokeEnabled;
@interface _UIDynamicCaretInput : UIView <UIKBHandwritingStrokeEnabled> {

    ^{CGContext=} _bitmapContext;
    long long _fadeCount;
    {CGPoint="x"d"y"d} _lastViewLoc;
    {CGRect="origin"{CGPoint="x"d"y"d}"size"{CGSize="width"d"height"d}} _inkedAreaOfBitmapContext;
    NSTimer* _fadeTimer;
    TIHandwritingStrokes* _accumulatedStrokes;
    UIDelayedAction* _committedAction;
    _UIDynamicCaretDot* _dotView;
}

 - (void) dealloc;
 - (void) log;
 - (void) committedStrokes;
 - (void) setCommittedAction:(id)a;
 - (void) setDotView:(id)a;
 - (id) dotView;
 - (id) accumulatedStrokes;
 - (id) fadeTimer;
 - (void) setFadeTimer:(id)a;
 - (void) clearFadeTimer;
 - (double) inkWidth;
 - (void) send;
 - (void) clearAndNotify:(BOOL)a;
 - (void) setAccumulatedStrokes:(id)a;
 - (void) drawPoint:({CGPoint=dd})a;
 - (id) committedAction;
 - (void) addInkPoint:({CGPoint=dd})afromLastPoint:(BOOL)b;
 - (void) _fadeInk;
 - (void) endTouchAtPoint:({CGPoint=dd})a;
 - (BOOL) hasInk;
 - (BOOL) isInking;
 - (void) startTouchAtPoint:({CGPoint=dd})a;
 - (void) addTouchAtPoint:({CGPoint=dd})a;
 - (void) cancelTouchAtPoint:({CGPoint=dd})a;
 - (id) initWithFrame:({CGRect={CGPoint=dd}{CGSize=dd}})a;
 - (void) setFrame:({CGRect={CGPoint=dd}{CGSize=dd}})a;
 - (void) setNeedsDisplayInRect:({CGRect={CGPoint=dd}{CGSize=dd}})a;
 - (void) drawRect:({CGRect={CGPoint=dd}{CGSize=dd}})a;


@end
