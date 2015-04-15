
@interface CIColorMonochrome : CIFilter {

    @"CIImage" inputImage;
    @"CIColor" inputColor;
    @"NSNumber" inputIntensity;
}
 + (id) customAttributes;

 - (void) setDefaults;
 - (id) outputImage;
 - (id) inputImage;
 - (void) setInputImage:(id)a;
 - (id) _kernel;
 - (void) setInputIntensity:(id)a;
 - (id) inputIntensity;
 - (void) setInputColor:(id)a;
 - (id) inputColor;


@end
