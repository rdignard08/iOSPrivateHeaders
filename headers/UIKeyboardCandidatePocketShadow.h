
@interface UIKeyboardCandidatePocketShadow : UIView {

    BOOL _shadowFadesToBottom;
    BOOL _drawsShadow;
    double _shadowHeightGrowthFactor;
}
 + (double) width;

 - (void) setShadowHeightGrowthFactor:(double)a ;
 - (void) setShadowFadesToBottom:(BOOL)a ;
 - (void) setDrawsShadow:(BOOL)a ;
 - (BOOL) shadowFadesToBottom;
 - (BOOL) drawsShadow;
 - (double) shadowHeightGrowthFactor;
 - (id) initWithFrame:({CGRect={CGPoint=dd}{CGSize=dd}})a ;
 - (void) drawRect:({CGRect={CGPoint=dd}{CGSize=dd}})a ;


@end
