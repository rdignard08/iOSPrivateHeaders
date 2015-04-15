
@interface _UITextFieldPasscodeCutoutBackground : UITextFieldBackgroundView {

    BOOL _customStrokeColor;
    BOOL _customFillColor;
    CAShapeLayer _lighteningOutline;
    double _outlineAlpha;
    double _cornerRadius;
}
 + (Class) layerClass;
 + (id) _strokeColor:(BOOL)a;
 + (id) _fillColor:(BOOL)a;

 - (void) setActive:(BOOL)a;
 - (void) dealloc;
 - (void) setLineWidth:(double)a;
 - (BOOL) _shouldAnimatePropertyWithKey:(id)a;
 - (id) _layer;
 - (void) setCornerRadius:(double)a;
 - (void) setStrokeColor:(id)a;
 - (void) setEnabled:(BOOL)aanimated:(BOOL)b;
 - (id) initWithFrame:({CGRect={CGPoint=dd}{CGSize=dd}})aactive:(BOOL)b;
 - (id) _strokeColor:(BOOL)a;
 - (id) _fillColor:(BOOL)a;
 - (void) _updatePath;
 - (void) setLineWidth:(double)aupdatePath:(BOOL)b;
 - (double) _pathInset;
 - (double) _pixelAlignment;
 - (void) _updateLightingOutlinePath;
 - (id) customPath;
 - (void) setOutlineAlpha:(double)a;
 - (double) outlineAlpha;
 - (id) initWithFrame:({CGRect={CGPoint=dd}{CGSize=dd}})a;
 - (void) setFrame:({CGRect={CGPoint=dd}{CGSize=dd}})a;
 - (void) setBounds:({CGRect={CGPoint=dd}{CGSize=dd}})a;
 - (double) lineWidth;
 - (double) cornerRadius;
 - (id) fillColor;
 - (id) strokeColor;
 - (void) setFillColor:(id)a;


@end
