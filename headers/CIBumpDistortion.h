
@interface CIBumpDistortion : CIFilter {

    @"CIImage" inputImage;
    @"CIVector" inputCenter;
    @"NSNumber" inputRadius;
    @"NSNumber" inputScale;
}
 + (id) customAttributes;

 - (void) setInputScale:(id)a;
 - (id) outputImage;
 - (id) inputImage;
 - (void) setInputImage:(id)a;
 - (id) inputScale;
 - (void) setInputRadius:(id)a;
 - (id) inputRadius;
 - (id) _kernel;
 - (id) inputCenter;
 - (void) setInputCenter:(id)a;


@end
