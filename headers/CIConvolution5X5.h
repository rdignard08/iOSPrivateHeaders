
@interface CIConvolution5X5 : CIFilter {

    CIImage* inputImage;
    CIVector* inputWeights;
    NSNumber* inputBias;
}
 + (id) customAttributes;

 - (id) outputImage;
 - (id) inputImage;
 - (void) setInputImage:(id)a;
 - (BOOL) _isIdentity;
 - (id) inputWeights;
 - (void) setInputWeights:(id)a;
 - (id) inputBias;
 - (void) setInputBias:(id)a;


@end
