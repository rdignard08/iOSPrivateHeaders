
@interface _UITextFieldRoundedRectBackgroundViewNeue : UIImageView {

    BOOL _disabled;
    @"UIColor" _strokeColor;
    @"UIColor" _fillColor;
    d _lineWidth;
    d _cornerRadius;
}

 - (void) setActive:(BOOL)a;
 - (void) dealloc;
 - (void) setLineWidth:(d)a;
 - (void) setCornerRadius:(d)a;
 - (void) setStrokeColor:(id)a;
 - (void) setEnabled:(BOOL)aanimated:(BOOL)b;
 - (id) initWithFrame:({CGRect={CGPoint=dd}{CGSize=dd}})aactive:(BOOL)b;
 - (id) _strokeColor:(BOOL)a;
 - (id) _fillColor:(BOOL)a;
 - (id) _initWithFrame:({CGRect={CGPoint=dd}{CGSize=dd}})aactive:(BOOL)blineWidth:(d)c;
 - (id) _initWithFrame:({CGRect={CGPoint=dd}{CGSize=dd}})aactive:(BOOL)blineWidth:(d)cupdateView:(BOOL)d;
 - (void) updateView;
 - (id) initWithFrame:({CGRect={CGPoint=dd}{CGSize=dd}})a;
 - (d) lineWidth;
 - (d) cornerRadius;
 - (id) fillColor;
 - (id) strokeColor;
 - (void) setFillColor:(id)a;


@end
