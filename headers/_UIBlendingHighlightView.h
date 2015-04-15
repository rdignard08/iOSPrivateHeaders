
@protocol UIAlertControllerBackgroundView;
@interface _UIBlendingHighlightView : UIView <UIAlertControllerBackgroundView> {

    UIView* _colorBurnView;
    UIView* _plusDView;
}
 + (id) _blendingSeparatorView;
 + (id) _blendingPressedView;

 - (void) dealloc;
 - (void) setCornerRadius:(double)a ;
 - (void) setHighlighted:(BOOL)a animated:(BOOL)b ;
 - (void) setPressed:(BOOL)a animated:(BOOL)b ;
 - (id) initWithFrame:({CGRect={CGPoint=dd}{CGSize=dd}})a colorBurnColor:(id)b plusDColor:(id)c ;
 - (double) cornerRadius;


@end
