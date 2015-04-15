
@interface CISkyAndGrassAdjust : CIFilter {

    @"CIImage" inputImage;
    @"NSNumber" inputSkyAmount;
    @"NSNumber" inputGrassAmount;
}
 + (id) customAttributes;

 - (void) setDefaults;
 - (id) outputImage;
 - (id) inputImage;
 - (void) setInputImage:(id)a;
 - (id) _kernel;
 - (void) setInputSkyAmount:(id)a;
 - (void) setInputGrassAmount:(id)a;
 - (id) inputSkyAmount;
 - (id) inputGrassAmount;


@end
