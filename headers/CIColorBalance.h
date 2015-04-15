
@interface CIColorBalance : CIFilter {

    @"CIImage" inputImage;
    @"CIColor" inputColor;
    @"NSNumber" inputStrength;
    @"NSNumber" inputWarmth;
    @"NSNumber" inputDamping;
}
 + (id) customAttributes;

 - (void) setDefaults;
 - (id) outputImage;
 - (id) inputImage;
 - (void) setInputImage:(id)a;
 - (id) _kernel;
 - (void) setInputColor:(id)a;
 - (id) inputColor;
 - (id) inputStrength;
 - (void) setInputStrength:(id)a;
 - (void) setInputWarmth:(id)a;
 - (id) inputWarmth;
 - (void) setInputDamping:(id)a;
 - (id) inputDamping;


@end
