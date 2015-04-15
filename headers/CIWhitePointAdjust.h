
@interface CIWhitePointAdjust : CIFilter {

    @"CIImage" inputImage;
    @"CIColor" inputColor;
}
 + (id) customAttributes;

 - (void) setDefaults;
 - (id) outputImage;
 - (id) inputImage;
 - (void) setInputImage:(id)a;
 - (BOOL) _isIdentity;
 - (id) _kernel;
 - (void) setInputColor:(id)a;
 - (id) inputColor;


@end
