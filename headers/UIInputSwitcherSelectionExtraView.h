
@interface UIInputSwitcherSelectionExtraView : UIView {

    d m_pointerOffset;
    i _roundedCorners;
    @"UIKeyboardMenuView" _menu;
    {CGRect="origin"{CGPoint="x"d"y"d}"size"{CGSize="width"d"height"d}} _keyRect;
}

 - (id) menu;
 - (void) setMenu:(id)a;
 - ({CGRect={CGPoint=dd}{CGSize=dd}}) keyRect;
 - (d) pointerOffset;
 - (void) setPointerOffset:(d)a;
 - (void) setKeyRect:({CGRect={CGPoint=dd}{CGSize=dd}})a;
 - (i) roundedCorners;
 - (void) setRoundedCorners:(i)a;
 - (id) initWithFrame:({CGRect={CGPoint=dd}{CGSize=dd}})a;
 - (void) setFrame:({CGRect={CGPoint=dd}{CGSize=dd}})a;
 - (void) drawRect:({CGRect={CGPoint=dd}{CGSize=dd}})a;


@end
