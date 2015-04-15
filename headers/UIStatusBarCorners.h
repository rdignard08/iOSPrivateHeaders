
@interface UIStatusBarCorners : UIView {

    int _cornerStyle;
    int _cornerAlignment;
    UIView* _leftCorner;
    UIView* _rightCorner;
}
 + (double) cornerRadius;

 - (void) dealloc;
 - (void) layoutSubviews;
 - (int) cornerStyle;
 - (id) initForAlignment:(int)a style:(int)b ;
 - (id) _imageForCornerWithStyle:(int)a ;
 - (void) setFrame:({CGRect={CGPoint=dd}{CGSize=dd}})a ;


@end
