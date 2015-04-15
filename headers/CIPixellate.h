
@interface CIPixellate : CIFilter {

    CIImage inputImage;
    CIVector inputCenter;
    NSNumber inputScale;
}
 + (id) customAttributes;

 - (void) setInputScale:(id)a;
 - (void) setDefaults;
 - (id) outputImage;
 - (id) inputImage;
 - (void) setInputImage:(id)a;
 - (id) inputScale;
 - (BOOL) _isIdentity;
 - (id) _kernel;
 - (id) inputCenter;
 - (void) setInputCenter:(id)a;


@end
