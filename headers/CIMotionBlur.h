
@interface CIMotionBlur : CILinearBlur {

    NSNumber inputAngle;
}
 + (id) customAttributes;

 - ({CGRect={CGPoint=dd}{CGSize=dd}}) regionOf:(int)adestRect:({CGRect={CGPoint=dd}{CGSize=dd}})buserInfo:(id)c;
 - (id) _blur:(id)apass:(int)bweightsFactor:(float)c;
 - (id) _kernel;
 - (id) inputAngle;
 - (void) setInputAngle:(id)a;


@end
