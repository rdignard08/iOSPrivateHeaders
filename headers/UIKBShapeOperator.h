
@interface UIKBShapeOperator : NSObject {

    double _scale;
}
@property (nonatomic, assign, readwrite) NSNumber* scale;
 + (id) operatorWithScale:(double)a;

 - (double) scale;
 - ({?=dd}) _scaleRange:({?=dd})a factor:(double)b ;
 - (id) shapeByScalingShape:(id)a factor:({CGSize=dd})b ;
 - ({CGRect={CGPoint=dd}{CGSize=dd}}) _scaleRect:({CGRect={CGPoint=dd}{CGSize=dd}})a factor:({CGSize=dd})b ;
 - (id) geometryByScalingShapeGeometry:(id)a factor:({CGSize=dd})b ;
 - (id) shapesByScalingShapes:(id)a factor:({CGSize=dd})b ;
 - (id) shapesByElaboratingShapes:(id)a insideShape:(id)b count:(long long)c ;
 - (void) setScale:(double)a ;


@end
