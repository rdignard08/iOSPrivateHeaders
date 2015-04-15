
@interface CICircularScreen : CIFilter {

    CIImage inputImage;
    CIVector inputCenter;
    NSNumber inputWidth;
    NSNumber inputSharpness;
}
 + (id) customAttributes;

 - (void) setDefaults;
 - (id) outputImage;
 - (id) inputImage;
 - (void) setInputImage:(id)a;
 - (id) _kernel;
 - (id) inputCenter;
 - (void) setInputCenter:(id)a;
 - (void) setInputWidth:(id)a;
 - (void) setInputSharpness:(id)a;
 - (id) inputWidth;
 - (id) inputSharpness;


@end
