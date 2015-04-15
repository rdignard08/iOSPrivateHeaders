
@interface CIBloom : CIFilter {

    CIImage* inputImage;
    NSNumber* inputRadius;
    NSNumber* inputIntensity;
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
