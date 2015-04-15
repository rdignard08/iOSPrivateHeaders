
@interface CIExposureAdjust : CIFilter {

    @"CIImage" inputImage;
    @"NSNumber" inputEV;
}
 + (id) customAttributes;

 - (void) setDefaults;
 - (id) outputImage;
 - (id) inputImage;
 - (void) setInputImage:(id)a;
 - (BOOL) _isIdentity;
 - (void) setInputEV:(id)a;
 - (id) inputEV;


@end
