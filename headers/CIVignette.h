
@interface CIVignette : CIFilter {

    CIImage* inputImage;
    NSNumber* inputIntensity;
    NSNumber* inputRadius;
}
 + (id) customAttributes;

 - (void) setDefaults;
 - (id) outputImage;
 - (id) inputImage;
 - (void) setInputImage:(id)a;
 - (void) setInputRadius:(id)a;
 - (BOOL) _isIdentity;
 - (id) inputRadius;
 - (id) _kernel;
 - (void) setInputIntensity:(id)a;
 - (id) inputIntensity;


@end
