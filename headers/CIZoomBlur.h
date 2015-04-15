
@interface CIZoomBlur : CILinearBlur {

    CIVector inputCenter;
}
 + (id) customAttributes;

 - ({CGRect={CGPoint=dd}{CGSize=dd}}) regionOf:(int)adestRect:({CGRect={CGPoint=dd}{CGSize=dd}})buserInfo:(id)c;
 - (id) _blur:(id)apass:(int)bweightsFactor:(float)c;
 - (id) _kernel;
 - (id) inputCenter;
 - (void) setInputCenter:(id)a;


@end
