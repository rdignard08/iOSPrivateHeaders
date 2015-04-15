
@interface _UIParallaxDimmingView : UIView {

    @"UIImageView" leftEdgeFade;
    BOOL _backgroundIsDimmed;
    @"UIColor" _dimmingColor;
    @"UIView" _addingSubview;
}
 + (id) newDimmingViewWithFrame:({CGRect={CGPoint=dd}{CGSize=dd}})a;
 + (id) newDimmingViewWrappingView:(id)awithLeftBorder:(double)b;

 - (void) dealloc;
 - (void) didMoveToWindow;
 - (void) setBackgroundIsDimmed:(BOOL)a;
 - (void) crossFade;
 - (void) setDimmingColor:(id)a;
 - (id) dimmingColor;
 - (void) setAddingSubview:(id)a;
 - (id) initViewWrappingView:(id)awithLeftBorder:(double)b;
 - (id) addingSubview;
 - (BOOL) backgroundIsDimmed;
 - (id) defaultBorderColor;
 - (id) _basicAnimationWithKeyPath:(id)a;
 - (id) initWithFrame:({CGRect={CGPoint=dd}{CGSize=dd}})a;


@end
