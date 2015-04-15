
@interface CIMipmapBlur : CIFilter {

    CIImage inputImage;
    NSNumber inputLevel;
}
 + (id) customAttributes;

 - (void) setDefaults;
 - (id) outputImage;
 - (id) inputImage;
 - (void) setInputImage:(id)a;
 - (BOOL) _isIdentity;
 - (void) setInputLevel:(id)a;
 - (id) inputLevel;


@end
