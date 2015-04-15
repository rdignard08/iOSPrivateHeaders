
@interface UICompositeImageView : UIView {

    NSMutableArray* m_images;
}

 - (void) dealloc;
 - (void) addImage:(id)a toRect:({CGRect={CGPoint=dd}{CGSize=dd}})b fromRect:({CGRect={CGPoint=dd}{CGSize=dd}})c operation:(int)d fraction:(double)e ;
 - (void) addImage:(id)a ;
 - (void) addImage:(id)a operation:(int)b fraction:(double)c ;
 - (void) addImage:(id)a toRect:({CGRect={CGPoint=dd}{CGSize=dd}})b fromRect:({CGRect={CGPoint=dd}{CGSize=dd}})c ;
 - (void) removeAllImages;
 - (id) initWithFrame:({CGRect={CGPoint=dd}{CGSize=dd}})a ;
 - (void) drawRect:({CGRect={CGPoint=dd}{CGSize=dd}})a ;


@end
