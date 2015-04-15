
@interface CIMaskedVariableBlur : CIFilter {

    CIImage* inputImage;
    CIImage* inputMask;
    NSNumber* inputRadius;
}
 + (id) customAttributes;

 - (void) setDefaults;
 - (id) outputImage;
 - (id) inputImage;
 - (void) setInputImage:(id)a;
 - (void) setInputRadius:(id)a;
 - (BOOL) _isIdentity;
 - (id) inputMask;
 - (void) setInputMask:(id)a;
 - (id) inputRadius;


@end
