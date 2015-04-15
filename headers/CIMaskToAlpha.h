
@interface CIMaskToAlpha : CIFilter {

    CIImage* inputImage;
}
 + (id) customAttributes;

 - (void) setDefaults;
 - (id) outputImage;
 - (id) inputImage;
 - (void) setInputImage:(id)a ;
 - (id) _kernel;


@end
