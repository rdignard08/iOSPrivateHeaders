
@interface CITemperatureAndTint : CIFilter {

    CIImage inputImage;
    CIVector inputNeutral;
    CIVector inputTargetNeutral;
}
 + (id) customAttributes;

 - (void) setDefaults;
 - (id) outputImage;
 - (id) inputImage;
 - (void) setInputImage:(id)a;
 - (void) setInputNeutral:(id)a;
 - (void) setInputTargetNeutral:(id)a;
 - (id) inputNeutral;
 - (id) inputTargetNeutral;


@end
