
@interface CIDissolveTransition : CIFilter {

    CIImage* inputImage;
    CIImage* inputTargetImage;
    NSNumber* inputTime;
}
 + (id) customAttributes;

 - (void) setDefaults;
 - (id) outputImage;
 - (id) inputImage;
 - (void) setInputImage:(id)a;
 - (id) _kernel;
 - (void) setInputTime:(id)a;
 - (id) _fadeKernel;
 - (id) inputTargetImage;
 - (void) setInputTargetImage:(id)a;
 - (id) inputTime;


@end
