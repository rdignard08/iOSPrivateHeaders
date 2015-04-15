
@interface UIKBInputBackdropView : UIView {

    UIKBBackdropView* _inputBackdropFullView;
    UIKBBackdropView* _inputBackdropLeftView;
    UIKBBackdropView* _inputBackdropRightView;
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
 - (void) _setRenderConfig:(id)a ;
 - (int) textEffectsVisibilityLevel;
 - (void) layoutInputBackdropToFullWithRect:({CGRect={CGPoint=dd}{CGSize=dd}})a ;
 - (id) inputBackdropLeftView;
 - (id) inputBackdropRightView;
 - (id) inputBackdropFullView;
 - (void) transitionToStyle:(long long)a isSplit:(BOOL)b ;
 - (void) _setFrame:({CGRect={CGPoint=dd}{CGSize=dd}})a leftOffset:(double)b gapWidth:(double)c progress:(double)d innerCorners:(unsigned long long)e ;
 - (void) _setInitialProgressWithFrame:({CGRect={CGPoint=dd}{CGSize=dd}})a ;
 - (void) layoutInputBackdropToSplitWithLeftViewRect:({CGRect={CGPoint=dd}{CGSize=dd}})a andRightViewRect:({CGRect={CGPoint=dd}{CGSize=dd}})b innerCorners:(int)c ;
 - (void) _setFrame:({CGRect={CGPoint=dd}{CGSize=dd}})a leftOffset:(double)b gapWidth:(double)c progress:(double)d ;
 - (id) initWithFrame:({CGRect={CGPoint=dd}{CGSize=dd}})a primaryBackdrop:(BOOL)b ;
 - (void) _setProgress:(double)a withFrame:({CGRect={CGPoint=dd}{CGSize=dd}})b ;
 - (void) _beginSplitTransitionIfNeeded:(double)a gapWidth:(double)b ;
 - (void) _endSplitTransitionIfNeeded:(BOOL)a ;
 - (void) setInputBackdropFullView:(id)a ;
 - (void) setInputBackdropLeftView:(id)a ;
 - (void) setInputBackdropRightView:(id)a ;


@end
