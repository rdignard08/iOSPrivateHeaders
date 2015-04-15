
@interface CIGammaAdjust : CIFilter {

    CIImage* inputImage;
    NSNumber* inputPower;
}
 + (id) customAttributes;

 - (void) setDefaults;
 - (id) outputImage;
 - (id) inputImage;
 - (void) setInputImage:(id)a;
 - (BOOL) _isIdentity;
 - (void) setInputPower:(id)a;
 - (id) inputPower;


@end
