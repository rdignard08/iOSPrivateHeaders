
@interface UIKeyboardCandidatePocketShadow : UIView {

    BOOL _shadowFadesToBottom;
    BOOL _drawsShadow;
    d _shadowHeightGrowthFactor;
}
 + (d) width;

 - (void) setShadowHeightGrowthFactor:(d)a;
 - (void) setShadowFadesToBottom:(BOOL)a;
 - (void) setDrawsShadow:(BOOL)a;
 - (BOOL) shadowFadesToBottom;
 - (BOOL) drawsShadow;
 - (d) shadowHeightGrowthFactor;
 - (id) initWithFrame:({CGRect={CGPoint=dd}{CGSize=dd}})a;
 - (void) drawRect:({CGRect={CGPoint=dd}{CGSize=dd}})a;


@end
