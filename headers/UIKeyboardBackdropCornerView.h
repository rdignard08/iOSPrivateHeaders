
@interface UIKeyboardBackdropCornerView : UIView {

    int _corners;
    double _radius;
}

 - (void) drawInRect:({CGRect={CGPoint=dd}{CGSize=dd}})a ;
 - (id) _generateBackdropMaskImage;
 - (id) initWithFrame:({CGRect={CGPoint=dd}{CGSize=dd}})a withCorners:(int)b ;
 - (void) updateFrame:({CGRect={CGPoint=dd}{CGSize=dd}})a withCorners:(int)b ;


@end
