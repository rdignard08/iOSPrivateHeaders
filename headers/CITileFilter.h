
@interface CITileFilter : CIFilter {

    CIImage inputImage;
    CIVector inputCenter;
    NSNumber inputAngle;
    NSNumber inputWidth;
}
 + (id) customAttributes;

 - (void) setDefaults;
 - (id) inputImage;
 - (void) setInputImage:(id)a;
 - (id) _kernel;
 - (id) inputAngle;
 - (void) setInputAngle:(id)a;
 - (id) inputCenter;
 - (void) setInputCenter:(id)a;
 - (id) _kernel_name;
 - (id) _kernel_source;
 - (void) setInputWidth:(id)a;
 - (id) inputWidth;


@end
