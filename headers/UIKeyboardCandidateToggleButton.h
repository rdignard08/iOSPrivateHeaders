
@interface UIKeyboardCandidateToggleButton : UIButton {

    @"NSString" _arrowDirection;
    @"UIKBThemedView" _themedView;
}
 + (id) arrowImageName;

 - (void) dealloc;
 - (void) layoutSubviews;
 - (void) _setRenderConfig:(id)a;
 - (void) setThemedView:(id)a;
 - (id) themedView;
 - (id) arrowDirection;
 - (void) setArrowDirection:(id)a;
 - (void) setArrowColor:(id)aforState:(Q)b;
 - ({CGRect={CGPoint=dd}{CGSize=dd}}) labelFrameFromFrame:({CGRect={CGPoint=dd}{CGSize=dd}})a;
 - (void) updateArrow;
 - (id) arrowColorForState:(Q)a;
 - (id) initWithFrame:({CGRect={CGPoint=dd}{CGSize=dd}})a;


@end
