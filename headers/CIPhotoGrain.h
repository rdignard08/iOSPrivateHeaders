
@interface CIPhotoGrain : CIFilter {

    CIImage* inputImage;
    NSNumber* inputISO;
    NSNumber* inputAmount;
    NSNumber* inputSeed;
}

 - (id) customAttributes;
 - (id) outputImage;
 - (id) inputImage;
 - (void) setInputImage:(id)a ;
 - (void) setInputAmount:(id)a ;
 - (id) inputAmount;
 - (id) _interpolateGrainKernel;
 - (id) _paddedTileKernel;
 - (void) paramtersFor:(float)a destination:(^{GrainParameters=ffff})b imageScaleFactor:(float)c ;
 - (id) _grainBlendAndMixKernel;
 - (id) inputISO;
 - (void) setInputISO:(id)a ;
 - (id) inputSeed;
 - (void) setInputSeed:(id)a ;


@end
