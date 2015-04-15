
@protocol _CIFilterProperties;
@interface CIFaceBalance : CIFilter <_CIFilterProperties> {

    CIImage inputImage;
    NSNumber inputOrigI;
    NSNumber inputOrigQ;
    NSNumber inputStrength;
    NSNumber inputWarmth;
}
 + (id) customAttributes;

 - (void) setDefaults;
 - (id) outputImage;
 - (id) inputImage;
 - (void) setInputImage:(id)a;
 - (BOOL) _isIdentity;
 - (id) _outputProperties;
 - (id) _initFromProperties:(id)a;
 - (id) _kernel;
 - (id) inputStrength;
 - (void) setInputStrength:(id)a;
 - (void) setInputOrigI:(id)a;
 - (void) setInputOrigQ:(id)a;
 - (void) setInputWarmth:(id)a;
 - (id) inputOrigI;
 - (id) inputOrigQ;
 - (id) inputWarmth;


@end
