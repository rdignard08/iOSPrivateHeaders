
@interface CIHistogramDisplayFilter : CIFilter {

    CIImage* inputImage;
    NSNumber* inputHeight;
    NSNumber* inputHighLimit;
    NSNumber* inputLowLimit;
}
 + (id) customAttributes;

 - (id) customAttributes;
 - (void) setDefaults;
 - (id) outputImage;
 - (id) inputImage;
 - (void) setInputImage:(id)a;
 - (id) _kernel;
 - (void) setInputHeight:(id)a;
 - (void) setInputLowLimit:(id)a;
 - (void) setInputHighLimit:(id)a;
 - (id) inputHeight;
 - (id) inputHighLimit;
 - (id) inputLowLimit;


@end
