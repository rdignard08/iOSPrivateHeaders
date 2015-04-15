
@interface UIShadowView : UIView {

    @"UIImage" _image;
}
 + (id) topShadowImage;
 + (id) bottomShadowImage;

 - (void) dealloc;
 - (void) setShadowImage:(id)aforEdge:(unsigned long long)binside:(BOOL)c;
 - (id) initWithFrame:({CGRect={CGPoint=dd}{CGSize=dd}})a;
 - (void) drawRect:({CGRect={CGPoint=dd}{CGSize=dd}})a;


@end
