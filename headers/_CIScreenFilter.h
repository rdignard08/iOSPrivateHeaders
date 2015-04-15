
@interface _CIScreenFilter : CIFilter {

    CIImage* inputImage;
    CIVector* inputCenter;
    NSNumber* inputAngle;
    NSNumber* inputWidth;
    NSNumber* inputSharpness;
}
 + (id) customAttributes;

 - (void) setDefaults;
 - (id) outputImage;
 - (id) inputImage;
 - (void) setInputImage:(id)a ;
 - (id) _kernel;
 - (id) inputAngle;
 - (void) setInputAngle:(id)a ;
 - (id) inputCenter;
 - (void) setInputCenter:(id)a ;
 - (id) _kernel_name;
 - (void) setInputWidth:(id)a ;
 - (void) setInputSharpness:(id)a ;
 - (id) inputWidth;
 - (id) inputSharpness;
 - (id) _kernel_code;


@end
