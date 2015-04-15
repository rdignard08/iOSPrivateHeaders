
@interface CIMotionBlur : CILinearBlur {

    NSNumber* inputAngle;
}
 + (id) customAttributes;

 - ({CGRect={CGPoint=dd}{CGSize=dd}}) regionOf:(int)a destRect:({CGRect={CGPoint=dd}{CGSize=dd}})b userInfo:(id)c ;
 - (id) _blur:(id)a pass:(int)b weightsFactor:(float)c ;
 - (id) _kernel;
 - (id) inputAngle;
 - (void) setInputAngle:(id)a ;


@end
