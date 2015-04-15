
@interface _UIReflectingView : UIView {

    @"UIView" _containerView;
    @"UIView" _gradientView;
    d _reflectionAlpha;
}

 - (void) layoutSubviews;
 - (id) containerView;
 - (id) _gradientLayer;
 - (void) setReflectionAlpha:(d)a;
 - (void) setReflectionFraction:(d)a;
 - (d) reflectionAlpha;
 - (void) _updateGradientColors;
 - (d) reflectionFraction;
 - (void) setBackgroundColor:(id)a;
 - (id) initWithFrame:({CGRect={CGPoint=dd}{CGSize=dd}})a;
 - (void) setFrame:({CGRect={CGPoint=dd}{CGSize=dd}})a;


@end
