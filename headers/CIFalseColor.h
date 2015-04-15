
@interface CIFalseColor : CIFilter {

    CIImage* inputImage;
    CIColor* inputColor0;
    CIColor* inputColor1;
}
 + (id) customAttributes;

 - (void) setDefaults;
 - (id) outputImage;
 - (id) inputImage;
 - (void) setInputImage:(id)a ;
 - (id) _kernel;
 - (void) setInputColor0:(id)a ;
 - (void) setInputColor1:(id)a ;
 - (id) inputColor0;
 - (id) inputColor1;


@end
