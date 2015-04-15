
@interface CIColorMatrix : CIFilter {

    CIImage inputImage;
    CIVector inputRVector;
    CIVector inputGVector;
    CIVector inputBVector;
    CIVector inputAVector;
    CIVector inputBiasVector;
}
 + (id) customAttributes;

 - (void) setDefaults;
 - (id) outputImage;
 - (id) inputImage;
 - (void) setInputImage:(id)a;
 - (void) setInputRVector:(id)a;
 - (void) setInputGVector:(id)a;
 - (void) setInputBVector:(id)a;
 - (void) setInputAVector:(id)a;
 - (void) setInputBiasVector:(id)a;
 - (id) inputRVector;
 - (id) inputGVector;
 - (id) inputBVector;
 - (id) inputAVector;
 - (id) inputBiasVector;


@end
