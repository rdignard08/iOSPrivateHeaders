
@interface _UITextFieldPasscodeCutoutBackground : UITextFieldBackgroundView {

    BOOL _customStrokeColor;
    BOOL _customFillColor;
    @"CAShapeLayer" _lighteningOutline;
    d _outlineAlpha;
    d _cornerRadius;
}
 + (Class) layerClass;
 + (id) _strokeColor:(BOOL)a;
 + (id) _fillColor:(BOOL)a;

 - (void) setActive:(BOOL)a;
 - (void) dealloc;
 - (void) setLineWidth:(d)a;
 - (BOOL) _shouldAnimatePropertyWithKey:(id)a;
 - (id) _layer;
 - (void) setCornerRadius:(d)a;
 - (void) setStrokeColor:(id)a;
 - (void) setEnabled:(BOOL)aanimated:(BOOL)b;
 - (id) initWithFrame:({CGRect={CGPoint=dd}{CGSize=dd}})aactive:(BOOL)b;
 - (id) _strokeColor:(BOOL)a;
 - (id) _fillColor:(BOOL)a;
 - (void) _updatePath;
 - (void) setLineWidth:(d)aupdatePath:(BOOL)b;
 - (d) _pathInset;
 - (d) _pixelAlignment;
 - (void) _updateLightingOutlinePath;
 - (id) customPath;
 - (void) setOutlineAlpha:(d)a;
 - (d) outlineAlpha;
 - (id) initWithFrame:({CGRect={CGPoint=dd}{CGSize=dd}})a;
 - (void) setFrame:({CGRect={CGPoint=dd}{CGSize=dd}})a;
 - (void) setBounds:({CGRect={CGPoint=dd}{CGSize=dd}})a;
 - (d) lineWidth;
 - (d) cornerRadius;
 - (id) fillColor;
 - (id) strokeColor;
 - (void) setFillColor:(id)a;


@end
