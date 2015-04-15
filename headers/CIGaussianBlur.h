
@interface CIGaussianBlur : CIFilter {

    CIImage inputImage;
    NSNumber inputRadius;
}
 + (id) customAttributes;

 - (void) setDefaults;
 - (id) outputImage;
 - (id) inputImage;
 - (void) setInputImage:(id)a;
 - (void) setInputRadius:(id)a;
 - (BOOL) _isIdentity;
 - (id) inputRadius;


@end
