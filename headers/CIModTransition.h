
@interface CIModTransition : CIFilter {

    CIImage* inputImage;
    CIImage* inputTargetImage;
    CIVector* inputCenter;
    NSNumber* inputTime;
    NSNumber* inputAngle;
    NSNumber* inputRadius;
    NSNumber* inputCompression;
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
 - (void) setInputTime:(id)a;
 - (id) inputTargetImage;
 - (void) setInputTargetImage:(id)a;
 - (void) setInputCompression:(id)a;
 - (id) inputCompression;
 - (id) inputTime;


@end
