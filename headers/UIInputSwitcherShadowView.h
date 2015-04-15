
@interface UIInputSwitcherShadowView : UIView {

    i m_mode;
    d m_pointerOffset;
    @"NSArray" m_gradientColors;
    @"UIKeyboardMenuView" _menu;
    @"_UIBackdropView" _blurView;
    {CGRect="origin"{CGPoint="x"d"y"d}"size"{CGSize="width"d"height"d}} _keyRect;
}

 - (void) dealloc;
 - (void) setMode:(i)a;
 - (void) layoutSubviews;
 - (i) mode;
 - (void) setGradientColors:(id)a;
 - (id) blurView;
 - (void) setBlurView:(id)a;
 - (id) menu;
 - (void) setMenu:(id)a;
 - ({CGRect={CGPoint=dd}{CGSize=dd}}) keyRect;
 - (id) gradientColors;
 - (d) pointerOffset;
 - (void) setPointerOffset:(d)a;
 - (void) setKeyRect:({CGRect={CGPoint=dd}{CGSize=dd}})a;
 - (id) initWithFrame:({CGRect={CGPoint=dd}{CGSize=dd}})a;
 - (void) setFrame:({CGRect={CGPoint=dd}{CGSize=dd}})a;
 - (void) drawRect:({CGRect={CGPoint=dd}{CGSize=dd}})a;


@end
