
@interface CIAffineClamp : CIFilter {

    CIImage inputImage;
    NSValue inputTransform;
}
 + (id) customAttributes;

 - (void) setDefaults;
 - (id) outputImage;
 - (id) inputImage;
 - (void) setInputImage:(id)a;
 - (id) _kernel;
 - (void) setInputTransform:(id)a;
 - (id) inputTransform;


@end
