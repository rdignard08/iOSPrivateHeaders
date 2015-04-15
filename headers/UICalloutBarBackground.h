
@interface UICalloutBarBackground : _UIBackdropView {

    [24d] m_dividerOffsets;
    UIImageView* _blurMaskView;
    UIImageView* _tintMaskView;
    _UIBackdropView* _separatorView;
    {CGRect="origin"{CGPoint="x"d"y"d}"size"{CGSize="width"d"height"d}} _highlightRect;
}

 - (void) dealloc;
 - (void) layoutSubviews;
 - (id) separatorView;
 - (void) setSeparatorView:(id)a;
 - ({CGRect={CGPoint=dd}{CGSize=dd}}) highlightRect;
 - (void) setHighlightRect:({CGRect={CGPoint=dd}{CGSize=dd}})a;
 - (void) setDividerOffsets:(^d)a;
 - (void) setHighlighted:(BOOL)aforFrame:({CGRect={CGPoint=dd}{CGSize=dd}})b;
 - (void) setBlurDisabled:(BOOL)a;
 - (id) blurMaskView;
 - (void) setBlurMaskView:(id)a;
 - (id) tintMaskView;
 - (void) setTintMaskView:(id)a;
 - (id) init;


@end
