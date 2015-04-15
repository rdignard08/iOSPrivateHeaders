
@interface CUIScaleClampFilter : CIFilter {

    @"CIImage" inputImage;
    @"NSNumber" inputScale;
}
 + (id) customAttributes;

 - (void) setInputScale:(id)a;
 - (void) setDefaults;
 - (id) outputImage;
 - (id) inputImage;
 - (void) setInputImage:(id)a;
 - (id) inputScale;
 - (id) _kernel;


@end
