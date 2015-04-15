
@interface CISepiaTone : CIFilter {

    CIImage* inputImage;
    NSNumber* inputIntensity;
}
 + (id) customAttributes;

 - (void) setDefaults;
 - (id) outputImage;
 - (id) inputImage;
 - (void) setInputImage:(id)a ;
 - (BOOL) _isIdentity;
 - (id) _kernel;
 - (void) setInputIntensity:(id)a ;
 - (id) inputIntensity;


@end
