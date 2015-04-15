
@interface CIColorControls : CIFilter {

    CIImage* inputImage;
    NSNumber* inputSaturation;
    NSNumber* inputBrightness;
    NSNumber* inputContrast;
}
 + (id) customAttributes;

 - (void) setDefaults;
 - (id) outputImage;
 - (id) inputImage;
 - (void) setInputImage:(id)a;
 - (void) setInputSaturation:(id)a;
 - (void) setInputContrast:(id)a;
 - (void) setInputBrightness:(id)a;
 - (id) inputSaturation;
 - (id) inputBrightness;
 - (id) inputContrast;


@end
