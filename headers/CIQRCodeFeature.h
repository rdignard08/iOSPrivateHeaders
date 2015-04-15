
@interface CIQRCodeFeature : CIFeature {

    {CGRect="origin"{CGPoint="x"d"y"d}"size"{CGSize="width"d"height"d}} bounds;
    {CGPoint="x"d"y"d} topLeft;
    {CGPoint="x"d"y"d} topRight;
    {CGPoint="x"d"y"d} bottomLeft;
    {CGPoint="x"d"y"d} bottomRight;
    @"NSString" messageString;
}
 + (id) barcodeFeatureWithBounds:({CGRect={CGPoint=dd}{CGSize=dd}})a;
 + (id) barcodeFeaturesWithBoundsArray:(r^{CGRect={CGPoint=dd}{CGSize=dd}})acount:(Q)b;

 - (id) .cxx_construct;
 - (id) type;
 - ({CGPoint=dd}) topLeft;
 - ({CGPoint=dd}) topRight;
 - ({CGPoint=dd}) bottomRight;
 - ({CGPoint=dd}) bottomLeft;
 - (id) initWithBounds:({CGRect={CGPoint=dd}{CGSize=dd}})a;
 - (void) setTopLeft:({CGPoint=dd})a;
 - (void) setTopRight:({CGPoint=dd})a;
 - (void) setBottomLeft:({CGPoint=dd})a;
 - (void) setBottomRight:({CGPoint=dd})a;
 - (id) initWithBounds:({CGRect={CGPoint=dd}{CGSize=dd}})atopLeft:({CGPoint=dd})btopRight:({CGPoint=dd})cbottomLeft:({CGPoint=dd})dbottomRight:({CGPoint=dd})emessageString:(id)f;
 - (id) messageString;
 - (void) setMessageString:(id)a;
 - ({CGRect={CGPoint=dd}{CGSize=dd}}) bounds;
 - (void) setBounds:({CGRect={CGPoint=dd}{CGSize=dd}})a;


@end
