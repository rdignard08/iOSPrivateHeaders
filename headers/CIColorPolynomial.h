
@interface CIColorPolynomial : CIFilter {

    CIImage* inputImage;
    CIVector* inputRedCoefficients;
    CIVector* inputGreenCoefficients;
    CIVector* inputBlueCoefficients;
    CIVector* inputAlphaCoefficients;
}
 + (id) customAttributes;

 - (void) setDefaults;
 - (id) outputImage;
 - (id) inputImage;
 - (void) setInputImage:(id)a ;
 - (BOOL) _isIdentity;
 - (id) _kernel;
 - (void) setInputAlphaCoefficients:(id)a ;
 - (void) setInputBlueCoefficients:(id)a ;
 - (void) setInputGreenCoefficients:(id)a ;
 - (void) setInputRedCoefficients:(id)a ;
 - (id) inputRedCoefficients;
 - (id) inputGreenCoefficients;
 - (id) inputBlueCoefficients;
 - (id) inputAlphaCoefficients;


@end
