
@interface CIColorClamp : CIFilter {

    CIImage* inputImage;
    CIVector* inputMinComponents;
    CIVector* inputMaxComponents;
}
 + (id) customAttributes;

 - (void) setDefaults;
 - (id) outputImage;
 - (id) inputImage;
 - (void) setInputImage:(id)a;
 - (id) _kernel;
 - (void) setInputMinComponents:(id)a;
 - (void) setInputMaxComponents:(id)a;
 - (id) inputMinComponents;
 - (id) inputMaxComponents;


@end
