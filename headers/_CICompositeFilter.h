
@interface _CICompositeFilter : CIFilter {

    CIImage* inputImage;
    CIImage* inputBackgroundImage;
}
 + (id) customAttributes;
 + (id) _kernel;
 + (id) _filter_display_name;
 + (id) _kernel_name;
 + (id) _kernel_source;

 - (id) outputImage;
 - (id) inputImage;
 - (void) setInputImage:(id)a;
 - ({CGRect={CGPoint=dd}{CGSize=dd}}) _extentForInputExtent:({CGRect={CGPoint=dd}{CGSize=dd}})abackgroundExtent:({CGRect={CGPoint=dd}{CGSize=dd}})b;
 - (id) inputBackgroundImage;
 - (void) setInputBackgroundImage:(id)a;


@end
