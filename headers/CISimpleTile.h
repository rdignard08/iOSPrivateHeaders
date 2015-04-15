
@interface CISimpleTile : CIFilter {

    CIImage* inputImage;
}
 + (id) customAttributes;

 - (id) outputImage;
 - (id) inputImage;
 - (void) setInputImage:(id)a;
 - (id) _kernel;


@end
