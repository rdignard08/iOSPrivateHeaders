
@interface CIVignetteEffect : CIFilter {

    @"CIImage" inputImage;
    @"CIVector" inputCenter;
    @"NSNumber" inputRadius;
    @"NSNumber" inputIntensity;
    @"NSNumber" inputFalloff;
}
 + (id) customAttributes;

 - (void) setDefaults;
 - (id) outputImage;
 - (id) inputImage;
 - (void) setInputImage:(id)a;
 - (void) setInputRadius:(id)a;
 - (BOOL) _isIdentity;
 - (id) inputRadius;
 - (id) inputCenter;
 - (void) setInputCenter:(id)a;
 - (void) setInputIntensity:(id)a;
 - (id) inputIntensity;
 - (void) setInputFalloff:(id)a;
 - (id) _poskernel;
 - (id) _negkernel;
 - (id) inputFalloff;


@end
