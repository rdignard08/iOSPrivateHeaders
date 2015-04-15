
@interface UIKeyboardCandidateBarShadow : UIView {

    BOOL _inverted;
}

 - (BOOL) isInverted;
 - (void) setInverted:(BOOL)a;
 - (id) initWithFrame:({CGRect={CGPoint=dd}{CGSize=dd}})a;
 - (void) drawRect:({CGRect={CGPoint=dd}{CGSize=dd}})a;


@end
