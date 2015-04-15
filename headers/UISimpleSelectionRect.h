
@interface UISimpleSelectionRect : UITextSelectionRect {

    {CGRect="origin"{CGPoint="x"d"y"d}"size"{CGSize="width"d"height"d}} _rect;
}
 + (id) rectWithCGRect:({CGRect={CGPoint=dd}{CGSize=dd}})a;

 - ({CGRect={CGPoint=dd}{CGSize=dd}}) rect;
 - (void) setRect:({CGRect={CGPoint=dd}{CGSize=dd}})a;


@end
