
@interface UIKBInputBackdropView : UIView {

    @"UIKBBackdropView" _inputBackdropFullView;
    @"UIKBBackdropView" _inputBackdropLeftView;
    @"UIKBBackdropView" _inputBackdropRightView;
    Q _innerCorners;
    BOOL _isTransitioning;
    d _transitionGap;
    d _transitionLeftOffset;
    q _style;
    BOOL _hasStartRect;
    BOOL _hasEndRect;
    {CGRect="origin"{CGPoint="x"d"y"d}"size"{CGSize="width"d"height"d}} _savedStartRect;
    {CGRect="origin"{CGPoint="x"d"y"d}"size"{CGSize="width"d"height"d}} _savedEndRect;
}
 + (BOOL) _retroactivelyRequiresConstraintBasedLayout;

 - (void) dealloc;
 - (BOOL) _isTransitioning;
 - (void) _setRenderConfig:(id)a;
 - (i) textEffectsVisibilityLevel;
 - (void) layoutInputBackdropToFullWithRect:({CGRect={CGPoint=dd}{CGSize=dd}})a;
 - (id) inputBackdropLeftView;
 - (id) inputBackdropRightView;
 - (id) inputBackdropFullView;
 - (void) transitionToStyle:(q)aisSplit:(BOOL)b;
 - (void) _setFrame:({CGRect={CGPoint=dd}{CGSize=dd}})aleftOffset:(d)bgapWidth:(d)cprogress:(d)dinnerCorners:(Q)e;
 - (void) _setInitialProgressWithFrame:({CGRect={CGPoint=dd}{CGSize=dd}})a;
 - (void) layoutInputBackdropToSplitWithLeftViewRect:({CGRect={CGPoint=dd}{CGSize=dd}})aandRightViewRect:({CGRect={CGPoint=dd}{CGSize=dd}})binnerCorners:(i)c;
 - (void) _setFrame:({CGRect={CGPoint=dd}{CGSize=dd}})aleftOffset:(d)bgapWidth:(d)cprogress:(d)d;
 - (id) initWithFrame:({CGRect={CGPoint=dd}{CGSize=dd}})aprimaryBackdrop:(BOOL)b;
 - (void) _setProgress:(d)awithFrame:({CGRect={CGPoint=dd}{CGSize=dd}})b;
 - (void) _beginSplitTransitionIfNeeded:(d)agapWidth:(d)b;
 - (void) _endSplitTransitionIfNeeded:(BOOL)a;
 - (void) setInputBackdropFullView:(id)a;
 - (void) setInputBackdropLeftView:(id)a;
 - (void) setInputBackdropRightView:(id)a;


@end
