
@interface UITextMagnifierRenderer : UIView {

    int m_autoscrollDirections;
    int m_magnifierMethod;
}

 - (void) setAutoscrollDirections:(int)a ;
 - (void) drawMagnifier:({CGRect={CGPoint=dd}{CGSize=dd}})a ;
 - (int) autoscrollDirections;
 - (void) drawAutoscroller:({CGRect={CGPoint=dd}{CGSize=dd}})a ;
 - (int) magnifierMethod;
 - (void) setMagnifierMethod:(int)a ;
 - (id) initWithFrame:({CGRect={CGPoint=dd}{CGSize=dd}})a ;
 - (void) drawRect:({CGRect={CGPoint=dd}{CGSize=dd}})a ;


@end
