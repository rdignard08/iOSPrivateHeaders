
@interface CIBlendModeFilter : CIFilter {

    CIImage* inputImage;
    CIImage* inputBackgroundImage;
}
 + (id) customAttributes;
 + (id) _kernel;
 + (id) _filter_display_name;

 - (id) outputImage;
 - (id) inputImage;
 - (void) setInputImage:(id)a;
 - (id) inputBackgroundImage;
 - (void) setInputBackgroundImage:(id)a;
 - (BOOL) _needUnpremuls;
 - ({CGRect={CGPoint=dd}{CGSize=dd}}) _extent;


@end
