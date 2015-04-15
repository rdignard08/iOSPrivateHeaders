
@interface UIKeyboardBackdropCornerView : UIView {

    i _corners;
    d _radius;
}

 - (void) drawInRect:({CGRect={CGPoint=dd}{CGSize=dd}})a;
 - (id) _generateBackdropMaskImage;
 - (id) initWithFrame:({CGRect={CGPoint=dd}{CGSize=dd}})awithCorners:(i)b;
 - (void) updateFrame:({CGRect={CGPoint=dd}{CGSize=dd}})awithCorners:(i)b;


@end
