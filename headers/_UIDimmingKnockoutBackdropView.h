
@protocol UIAlertControllerBackgroundView;
@interface _UIDimmingKnockoutBackdropView : UIView <UIAlertControllerBackgroundView> {

    _UIBackdropView* backdropView;
    UIView* dimmingKnockoutView;
}

 - (void) dealloc;
 - (void) setCornerRadius:(double)a ;
 - (void) setHighlighted:(BOOL)a animated:(BOOL)b ;
 - (id) initWithStyle:(long long)a ;
 - (void) setPressed:(BOOL)a animated:(BOOL)b ;
 - (id) _filterForBackdropStyle:(long long)a ;
 - (id) _dimmingKnockoutBackgroundColorForBackdropStyle:(long long)a ;
 - (double) cornerRadius;


@end
