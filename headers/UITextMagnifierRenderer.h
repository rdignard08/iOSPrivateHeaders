
@interface UITextMagnifierRenderer : UIView {

    i m_autoscrollDirections;
    i m_magnifierMethod;
}

 - (void) setAutoscrollDirections:(i)a;
 - (void) drawMagnifier:({CGRect={CGPoint=dd}{CGSize=dd}})a;
 - (i) autoscrollDirections;
 - (void) drawAutoscroller:({CGRect={CGPoint=dd}{CGSize=dd}})a;
 - (i) magnifierMethod;
 - (void) setMagnifierMethod:(i)a;
 - (id) initWithFrame:({CGRect={CGPoint=dd}{CGSize=dd}})a;
 - (void) drawRect:({CGRect={CGPoint=dd}{CGSize=dd}})a;


@end
