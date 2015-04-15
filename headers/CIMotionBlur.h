
@interface CIMotionBlur : CILinearBlur {

    @"NSNumber" inputAngle;
}
 + (id) customAttributes;

 - ({CGRect={CGPoint=dd}{CGSize=dd}}) regionOf:(i)adestRect:({CGRect={CGPoint=dd}{CGSize=dd}})buserInfo:(id)c;
 - (id) _blur:(id)apass:(i)bweightsFactor:(f)c;
 - (id) _kernel;
 - (id) inputAngle;
 - (void) setInputAngle:(id)a;


@end
