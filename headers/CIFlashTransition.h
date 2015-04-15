
@interface CIFlashTransition : CIFilter {

    @"CIImage" inputImage;
    @"CIImage" inputTargetImage;
    @"CIVector" inputCenter;
    @"CIVector" inputExtent;
    @"CIColor" inputColor;
    @"NSNumber" inputTime;
    @"NSNumber" inputMaxStriationRadius;
    @"NSNumber" inputStriationStrength;
    @"NSNumber" inputStriationContrast;
    @"NSNumber" inputFadeThreshold;
}
 + (id) customAttributes;

 - (void) setInputExtent:(id)a;
 - (void) setDefaults;
 - (id) outputImage;
 - (id) inputImage;
 - (void) setInputImage:(id)a;
 - (id) inputExtent;
 - (id) inputCenter;
 - (void) setInputCenter:(id)a;
 - (void) setInputColor:(id)a;
 - (id) inputColor;
 - (id) _geomKernel;
 - (id) _colorKernel;
 - (void) setInputTime:(id)a;
 - (id) inputTargetImage;
 - (void) setInputTargetImage:(id)a;
 - (void) setInputMaxStriationRadius:(id)a;
 - (void) setInputStriationStrength:(id)a;
 - (void) setInputStriationContrast:(id)a;
 - (void) setInputFadeThreshold:(id)a;
 - (id) inputMaxStriationRadius;
 - (id) inputStriationStrength;
 - (id) inputStriationContrast;
 - (id) inputFadeThreshold;
 - (id) inputTime;


@end
