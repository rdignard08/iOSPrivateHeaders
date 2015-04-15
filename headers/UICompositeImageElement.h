
@interface UICompositeImageElement : NSObject {

    @"UIImage" m_image;
    {CGRect="origin"{CGPoint="x"d"y"d}"size"{CGSize="width"d"height"d}} m_fromRect;
    {CGRect="origin"{CGPoint="x"d"y"d}"size"{CGSize="width"d"height"d}} m_toRect;
    i m_operation;
    d m_fraction;
}
 + (id) elementWithImage:(id)atoRect:({CGRect={CGPoint=dd}{CGSize=dd}})bfromRect:({CGRect={CGPoint=dd}{CGSize=dd}})coperation:(i)dfraction:(d)e;

 - (void) dealloc;
 - (id) initWithImage:(id)atoRect:({CGRect={CGPoint=dd}{CGSize=dd}})bfromRect:({CGRect={CGPoint=dd}{CGSize=dd}})coperation:(i)dfraction:(d)e;
 - (void) draw;


@end