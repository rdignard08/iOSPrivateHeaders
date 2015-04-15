
@interface UIInputSwitcherSelectionExtraView : UIView {

    double m_pointerOffset;
    int _roundedCorners;
    UIKeyboardMenuView* _menu;
    {CGRect="origin"{CGPoint="x"d"y"d}"size"{CGSize="width"d"height"d}} _keyRect;
}

 - (id) menu;
 - (void) setMenu:(id)a ;
 - ({CGRect={CGPoint=dd}{CGSize=dd}}) keyRect;
 - (double) pointerOffset;
 - (void) setPointerOffset:(double)a ;
 - (void) setKeyRect:({CGRect={CGPoint=dd}{CGSize=dd}})a ;
 - (int) roundedCorners;
 - (void) setRoundedCorners:(int)a ;
 - (id) initWithFrame:({CGRect={CGPoint=dd}{CGSize=dd}})a ;
 - (void) setFrame:({CGRect={CGPoint=dd}{CGSize=dd}})a ;
 - (void) drawRect:({CGRect={CGPoint=dd}{CGSize=dd}})a ;


@end
