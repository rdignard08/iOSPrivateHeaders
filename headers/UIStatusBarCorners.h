
@interface UIStatusBarCorners : UIView {

    i _cornerStyle;
    i _cornerAlignment;
    @"UIView" _leftCorner;
    @"UIView" _rightCorner;
}
 + (d) cornerRadius;

 - (void) dealloc;
 - (void) layoutSubviews;
 - (i) cornerStyle;
 - (id) initForAlignment:(i)astyle:(i)b;
 - (id) _imageForCornerWithStyle:(i)a;
 - (void) setFrame:({CGRect={CGPoint=dd}{CGSize=dd}})a;


@end
