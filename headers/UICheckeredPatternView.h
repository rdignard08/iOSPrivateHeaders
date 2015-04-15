
@interface UICheckeredPatternView : UIView {

    UIColor* m_patternColor;
    UIColor* m_checkerColor;
    double m_scale;
}

 - (void) dealloc;
 - (void) didMoveToWindow;
 - (BOOL) _canDrawContent;
 - (void) updatePatternColor;
 - (id) checkerColor;
 - (void) setCheckerColor:(id)a;
 - (id) initWithFrame:({CGRect={CGPoint=dd}{CGSize=dd}})a;


@end
