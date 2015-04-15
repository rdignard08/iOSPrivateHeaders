
@interface UIKBShapeOperator : NSObject {

    d _scale;
}
@property (nonatomic, assign, readwrite) NSNumber* scale;
 + (id) operatorWithScale:(d)a;

 - (d) scale;
 - ({?=dd}) _scaleRange:({?=dd})afactor:(d)b;
 - (id) shapeByScalingShape:(id)afactor:({CGSize=dd})b;
 - ({CGRect={CGPoint=dd}{CGSize=dd}}) _scaleRect:({CGRect={CGPoint=dd}{CGSize=dd}})afactor:({CGSize=dd})b;
 - (id) geometryByScalingShapeGeometry:(id)afactor:({CGSize=dd})b;
 - (id) shapesByScalingShapes:(id)afactor:({CGSize=dd})b;
 - (id) shapesByElaboratingShapes:(id)ainsideShape:(id)bcount:(q)c;
 - (void) setScale:(d)a;


@end
