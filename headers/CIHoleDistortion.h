
@interface CIHoleDistortion : CIFilter {

    CIImage* inputImage;
    CIVector* inputCenter;
    NSNumber* inputRadius;
}
 + (id) customAttributes;

 - (void) setDefaults;
 - (id) outputImage;
 - (id) inputImage;
 - (void) setInputImage:(id)a ;
 - (void) setInputRadius:(id)a ;
 - (BOOL) _isIdentity;
 - (id) inputRadius;
 - (id) inputCenter;
 - (void) setInputCenter:(id)a ;
 - (id) _geomKernel;
 - (id) _colorKernel;
 - ({CGRect={CGPoint=dd}{CGSize=dd}}) computeDOD;


@end
