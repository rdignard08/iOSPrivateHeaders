
@protocol UIAlertControllerBackgroundView;
@interface _UIBlendingHighlightView : UIView <UIAlertControllerBackgroundView> {

    @"UIView" _colorBurnView;
    @"UIView" _plusDView;
}
 + (id) _blendingSeparatorView;
 + (id) _blendingPressedView;

 - (void) dealloc;
 - (void) setCornerRadius:(d)a;
 - (void) setHighlighted:(BOOL)aanimated:(BOOL)b;
 - (void) setPressed:(BOOL)aanimated:(BOOL)b;
 - (id) initWithFrame:({CGRect={CGPoint=dd}{CGSize=dd}})acolorBurnColor:(id)bplusDColor:(id)c;
 - (d) cornerRadius;


@end
