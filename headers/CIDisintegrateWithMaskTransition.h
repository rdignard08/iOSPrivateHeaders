
@interface CIDisintegrateWithMaskTransition : CIFilter {

    CIImage* inputImage;
    CIImage* inputTargetImage;
    CIImage* inputMaskImage;
    NSNumber* inputTime;
    NSNumber* inputShadowRadius;
    NSNumber* inputShadowDensity;
    CIVector* inputShadowOffset;
}
 + (id) customAttributes;

 - (void) setDefaults;
 - (id) outputImage;
 - (id) inputImage;
 - (void) setInputImage:(id)a;
 - (id) _kernel;
 - (void) setInputTime:(id)a;
 - (id) inputTargetImage;
 - (void) setInputTargetImage:(id)a;
 - (id) inputMaskImage;
 - (void) setInputMaskImage:(id)a;
 - (void) setInputShadowRadius:(id)a;
 - (void) setInputShadowDensity:(id)a;
 - (void) setInputShadowOffset:(id)a;
 - (id) inputShadowRadius;
 - (id) inputShadowDensity;
 - (id) inputShadowOffset;
 - (id) inputTime;


@end
