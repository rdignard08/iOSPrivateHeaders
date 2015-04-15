
@protocol UIAlertControllerBackgroundView;
@interface _UIDimmingKnockoutBackdropView : UIView <UIAlertControllerBackgroundView> {

    @"_UIBackdropView" backdropView;
    @"UIView" dimmingKnockoutView;
}

 - (void) dealloc;
 - (void) setCornerRadius:(d)a;
 - (void) setHighlighted:(BOOL)aanimated:(BOOL)b;
 - (id) initWithStyle:(q)a;
 - (void) setPressed:(BOOL)aanimated:(BOOL)b;
 - (id) _filterForBackdropStyle:(q)a;
 - (id) _dimmingKnockoutBackgroundColorForBackdropStyle:(q)a;
 - (d) cornerRadius;


@end
