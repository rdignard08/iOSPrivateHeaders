
@interface UICompositeImageElement : NSObject {

    UIImage* m_image;
    {CGRect="origin"{CGPoint="x"d"y"d}"size"{CGSize="width"d"height"d}} m_fromRect;
    {CGRect="origin"{CGPoint="x"d"y"d}"size"{CGSize="width"d"height"d}} m_toRect;
    int m_operation;
    double m_fraction;
}
 + (id) elementWithImage:(id)atoRect:({CGRect={CGPoint=dd}{CGSize=dd}})bfromRect:({CGRect={CGPoint=dd}{CGSize=dd}})coperation:(int)dfraction:(double)e;

 - (void) dealloc;
 - (id) initWithImage:(id)a toRect:({CGRect={CGPoint=dd}{CGSize=dd}})b fromRect:({CGRect={CGPoint=dd}{CGSize=dd}})c operation:(int)d fraction:(double)e ;
 - (void) draw;


@end
