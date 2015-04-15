
@interface UIKBShapeOperator : NSObject {

    double _scale;
}
@property (nonatomic, assign, readwrite) NSNumber* scale;
 + (id) operatorWithScale:(double)a;

 - (double) scale;
 - ({?=dd}) _scaleRange:({?=dd})afactor:(double)b;
 - (id) shapeByScalingShape:(id)afactor:({CGSize=dd})b;
 - ({CGRect={CGPoint=dd}{CGSize=dd}}) _scaleRect:({CGRect={CGPoint=dd}{CGSize=dd}})afactor:({CGSize=dd})b;
 - (id) geometryByScalingShapeGeometry:(id)afactor:({CGSize=dd})b;
 - (id) shapesByScalingShapes:(id)afactor:({CGSize=dd})b;
 - (id) shapesByElaboratingShapes:(id)ainsideShape:(id)bcount:(long long)c;
 - (void) setScale:(double)a;


@end
