
@interface CIColorPosterize : CIFilter {

    CIImage inputImage;
    NSNumber inputLevels;
}
 + (id) customAttributes;

 - (void) setDefaults;
 - (id) outputImage;
 - (id) inputImage;
 - (void) setInputImage:(id)a;
 - (BOOL) _isIdentity;
 - (id) _kernel;
 - (void) setInputLevels:(id)a;
 - (id) inputLevels;


@end
