
@interface CIStripesGenerator : CIFilter {

    CIVector* inputCenter;
    CIColor* inputColor0;
    CIColor* inputColor1;
    NSNumber* inputWidth;
    NSNumber* inputSharpness;
}
 + (id) customAttributes;

 - (void) setDefaults;
 - (id) outputImage;
 - (id) _kernel;
 - (id) inputCenter;
 - (void) setInputCenter:(id)a;
 - (void) setInputColor0:(id)a;
 - (void) setInputColor1:(id)a;
 - (id) inputColor0;
 - (id) inputColor1;
 - (void) setInputWidth:(id)a;
 - (void) setInputSharpness:(id)a;
 - (id) inputWidth;
 - (id) inputSharpness;


@end
