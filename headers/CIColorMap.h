
@interface CIColorMap : CIFilter {

    @"CIImage" inputImage;
    @"CIImage" inputGradientImage;
    @"CIImage" cachedGradientImage;
}
 + (id) customAttributes;

 - (void) dealloc;
 - (id) outputImage;
 - (id) inputImage;
 - (void) setInputImage:(id)a;
 - (id) _kernel;
 - (id) gradientImage;
 - (void) setInputGradientImage:(id)a;
 - (id) inputGradientImage;
 - (id) cachedGradientImage;
 - (void) setCachedGradientImage:(id)a;


@end
