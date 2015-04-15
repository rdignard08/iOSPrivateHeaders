
@interface UIKeyboardCornerView : UIView {

    BOOL _leftSide;
    double _radius;
}

 - (int) textEffectsVisibilityLevel;
 - (id) initWithFrame:({CGRect={CGPoint=dd}{CGSize=dd}})aleft:(BOOL)b;
 - (void) drawRect:({CGRect={CGPoint=dd}{CGSize=dd}})a;


@end
