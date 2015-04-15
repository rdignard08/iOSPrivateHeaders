
@interface _UITextFieldRoundedRectBackgroundViewNeue : UIImageView {

    BOOL _disabled;
    UIColor* _strokeColor;
    UIColor* _fillColor;
    double _lineWidth;
    double _cornerRadius;
}

 - (void) setActive:(BOOL)a;
 - (void) dealloc;
 - (void) setLineWidth:(double)a;
 - (void) setCornerRadius:(double)a;
 - (void) setStrokeColor:(id)a;
 - (void) setEnabled:(BOOL)aanimated:(BOOL)b;
 - (id) initWithFrame:({CGRect={CGPoint=dd}{CGSize=dd}})aactive:(BOOL)b;
 - (id) _strokeColor:(BOOL)a;
 - (id) _fillColor:(BOOL)a;
 - (id) _initWithFrame:({CGRect={CGPoint=dd}{CGSize=dd}})aactive:(BOOL)blineWidth:(double)c;
 - (id) _initWithFrame:({CGRect={CGPoint=dd}{CGSize=dd}})aactive:(BOOL)blineWidth:(double)cupdateView:(BOOL)d;
 - (void) updateView;
 - (id) initWithFrame:({CGRect={CGPoint=dd}{CGSize=dd}})a;
 - (double) lineWidth;
 - (double) cornerRadius;
 - (id) fillColor;
 - (id) strokeColor;
 - (void) setFillColor:(id)a;


@end
