
@interface CISharpenLuminance : CIFilter {

    CIImage* inputImage;
    NSNumber* inputSharpness;
}
 + (id) customAttributes;

 - (void) setDefaults;
 - (id) outputImage;
 - (id) inputImage;
 - (void) setInputImage:(id)a;
 - (BOOL) _isIdentity;
 - (id) _kernel;
 - (void) setInputSharpness:(id)a;
 - (id) inputSharpness;


@end
