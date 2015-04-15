
@interface _UIAlertControllerShadowedScrollView : UIScrollView {

    _UIAlertControllerGradientView* _shadowView;
    BOOL _shouldPinToBottomOnResize;
}

 - (void) dealloc;
 - (void) setContentSize:({CGSize=dd})a;
 - (BOOL) shouldPinToBottomOnResize;
 - ({CGRect={CGPoint=dd}{CGSize=dd}}) _boundsForPinningToBottomWithNewBounds:({CGRect={CGPoint=dd}{CGSize=dd}})a;
 - (void) _updateScrollabilityAndShadow;
 - (void) setShouldPinToBottomOnResize:(BOOL)a;
 - (void) setBounds:({CGRect={CGPoint=dd}{CGSize=dd}})a;


@end
