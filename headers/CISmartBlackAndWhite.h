
@interface CISmartBlackAndWhite : CIFilter {

    CIImage* inputImage;
    NSNumber* inputStrength;
    NSNumber* inputNeutralGamma;
    NSNumber* inputTone;
    NSNumber* inputHue;
    NSNumber* inputGrain;
    NSNumber* inputScaleFactor;
}
 + (id) customAttributes;

 - (id) outputImage;
 - (id) inputImage;
 - (void) setInputImage:(id)a ;
 - (id) _kernel;
 - (void) getNonNormalizedSettings:(^{?=Bffff[3f]})a ;
 - (^f) createHueArray;
 - (id) hueArrayImage:(^f)a ;
 - (id) inputGrain;
 - (id) inputStrength;
 - (void) setInputStrength:(id)a ;
 - (id) inputNeutralGamma;
 - (void) setInputNeutralGamma:(id)a ;
 - (id) inputTone;
 - (void) setInputTone:(id)a ;
 - (id) inputHue;
 - (void) setInputHue:(id)a ;
 - (void) setInputGrain:(id)a ;
 - (id) inputScaleFactor;
 - (void) setInputScaleFactor:(id)a ;


@end
