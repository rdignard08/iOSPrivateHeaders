
@interface CITwirlDistortion : CIFilter {

    CIImage* inputImage;
    CIVector* inputCenter;
    NSNumber* inputRadius;
    NSNumber* inputAngle;
}
 + (id) customAttributes;

 - (void) setDefaults;
 - (id) outputImage;
 - (id) inputImage;
 - (void) setInputImage:(id)a;
 - (void) setInputRadius:(id)a;
 - (id) inputRadius;
 - (id) _kernel;
 - (id) inputAngle;
 - (void) setInputAngle:(id)a;
 - (id) inputCenter;
 - (void) setInputCenter:(id)a;


@end
