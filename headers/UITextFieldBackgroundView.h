
@interface UITextFieldBackgroundView : UIView {

    BOOL _active;
    BOOL _enabled;
    float _progress;
    @"UIColor" _fillColor;
}

 - (void) setActive:(BOOL)a;
 - (void) setProgress:(float)a;
 - (void) dealloc;
 - (void) _updateImages;
 - (void) setEnabled:(BOOL)aanimated:(BOOL)b;
 - (id) initWithFrame:({CGRect={CGPoint=dd}{CGSize=dd}})aactive:(BOOL)b;
 - (void) setFrame:({CGRect={CGPoint=dd}{CGSize=dd}})a;
 - (void) setBounds:({CGRect={CGPoint=dd}{CGSize=dd}})a;
 - (id) fillColor;
 - (void) setFillColor:(id)a;


@end
