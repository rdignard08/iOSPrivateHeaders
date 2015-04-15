
@interface _UIGlintyShapeView : UIView {

    UIBezierPath* _path;
    UIColor* _fillColor;
    UIColor* _strokeColor;
}
 + (Class) layerClass;

 - (void) setStrokeColor:(id)a ;
 - (id) shapeLayer;
 - (void) setPath:(id)a ;
 - (id) path;
 - (id) initWithFrame:({CGRect={CGPoint=dd}{CGSize=dd}})a ;
 - (id) fillColor;
 - (id) strokeColor;
 - (void) setFillColor:(id)a ;


@end
