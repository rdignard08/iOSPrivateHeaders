
@interface UICompositeImageView : UIView {

    @"NSMutableArray" m_images;
}

 - (void) dealloc;
 - (void) addImage:(id)atoRect:({CGRect={CGPoint=dd}{CGSize=dd}})bfromRect:({CGRect={CGPoint=dd}{CGSize=dd}})coperation:(i)dfraction:(d)e;
 - (void) addImage:(id)a;
 - (void) addImage:(id)aoperation:(i)bfraction:(d)c;
 - (void) addImage:(id)atoRect:({CGRect={CGPoint=dd}{CGSize=dd}})bfromRect:({CGRect={CGPoint=dd}{CGSize=dd}})c;
 - (void) removeAllImages;
 - (id) initWithFrame:({CGRect={CGPoint=dd}{CGSize=dd}})a;
 - (void) drawRect:({CGRect={CGPoint=dd}{CGSize=dd}})a;


@end
