
@interface UIKBInputBackdropView : UIView {

    @"UIKBBackdropView" _inputBackdropFullView;
    @"UIKBBackdropView" _inputBackdropLeftView;
    @"UIKBBackdropView" _inputBackdropRightView;
    unsigned long long _innerCorners;
    BOOL _isTransitioning;
    double _transitionGap;
    double _transitionLeftOffset;
    long long _style;
    BOOL _hasStartRect;
    BOOL _hasEndRect;
    {CGRect="origin"{CGPoint="x"d"y"d}"size"{CGSize="width"d"height"d}} _savedStartRect;
    {CGRect="origin"{CGPoint="x"d"y"d}"size"{CGSize="width"d"height"d}} _savedEndRect;
}
 + (BOOL) _retroactivelyRequiresConstraintBasedLayout;

 - (void) dealloc;
 - (BOOL) _isTransitioning;
 - (void) _setRenderConfig:(id)a;
 - (int) textEffectsVisibilityLevel;
 - (void) layoutInputBackdropToFullWithRect:({CGRect={CGPoint=dd}{CGSize=dd}})a;
 - (id) inputBackdropLeftView;
 - (id) inputBackdropRightView;
 - (id) inputBackdropFullView;
 - (void) transitionToStyle:(long long)aisSplit:(BOOL)b;
 - (void) _setFrame:({CGRect={CGPoint=dd}{CGSize=dd}})aleftOffset:(double)bgapWidth:(double)cprogress:(double)dinnerCorners:(unsigned long long)e;
 - (void) _setInitialProgressWithFrame:({CGRect={CGPoint=dd}{CGSize=dd}})a;
 - (void) layoutInputBackdropToSplitWithLeftViewRect:({CGRect={CGPoint=dd}{CGSize=dd}})aandRightViewRect:({CGRect={CGPoint=dd}{CGSize=dd}})binnerCorners:(int)c;
 - (void) _setFrame:({CGRect={CGPoint=dd}{CGSize=dd}})aleftOffset:(double)bgapWidth:(double)cprogress:(double)d;
 - (id) initWithFrame:({CGRect={CGPoint=dd}{CGSize=dd}})aprimaryBackdrop:(BOOL)b;
 - (void) _setProgress:(double)awithFrame:({CGRect={CGPoint=dd}{CGSize=dd}})b;
 - (void) _beginSplitTransitionIfNeeded:(double)agapWidth:(double)b;
 - (void) _endSplitTransitionIfNeeded:(BOOL)a;
 - (void) setInputBackdropFullView:(id)a;
 - (void) setInputBackdropLeftView:(id)a;
 - (void) setInputBackdropRightView:(id)a;


@end
