
@interface UIKeyboardCandidateToggleButton : UIButton {

    NSString* _arrowDirection;
    UIKBThemedView* _themedView;
}
 + (id) arrowImageName;

 - (void) dealloc;
 - (void) layoutSubviews;
 - (void) _setRenderConfig:(id)a ;
 - (void) setThemedView:(id)a ;
 - (id) themedView;
 - (id) arrowDirection;
 - (void) setArrowDirection:(id)a ;
 - (void) setArrowColor:(id)a forState:(unsigned long long)b ;
 - ({CGRect={CGPoint=dd}{CGSize=dd}}) labelFrameFromFrame:({CGRect={CGPoint=dd}{CGSize=dd}})a ;
 - (void) updateArrow;
 - (id) arrowColorForState:(unsigned long long)a ;
 - (id) initWithFrame:({CGRect={CGPoint=dd}{CGSize=dd}})a ;


@end
