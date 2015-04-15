
@interface CIColorCrossPolynomial : CIFilter {

    @"CIImage" inputImage;
    @"CIVector" inputCoefficients;
    @"CIVector" inputRedCoefficients;
    @"CIVector" inputGreenCoefficients;
    @"CIVector" inputBlueCoefficients;
}
 + (id) customAttributes;

 - (void) setDefaults;
 - (id) outputImage;
 - (id) inputImage;
 - (void) setInputImage:(id)a;
 - (BOOL) _isIdentity;
 - (id) _kernel;
 - (void) setInputBlueCoefficients:(id)a;
 - (void) setInputGreenCoefficients:(id)a;
 - (void) setInputRedCoefficients:(id)a;
 - (id) inputRedCoefficients;
 - (id) inputGreenCoefficients;
 - (id) inputBlueCoefficients;


@end
