
@interface _UIReflectingView : UIView {

    UIView _containerView;
    UIView _gradientView;
    double _reflectionAlpha;
}

 - (void) layoutSubviews;
 - (id) containerView;
 - (id) _gradientLayer;
 - (void) setReflectionAlpha:(double)a;
 - (void) setReflectionFraction:(double)a;
 - (double) reflectionAlpha;
 - (void) _updateGradientColors;
 - (double) reflectionFraction;
 - (void) setBackgroundColor:(id)a;
 - (id) initWithFrame:({CGRect={CGPoint=dd}{CGSize=dd}})a;
 - (void) setFrame:({CGRect={CGPoint=dd}{CGSize=dd}})a;


@end
