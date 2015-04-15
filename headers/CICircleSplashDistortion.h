
@interface CICircleSplashDistortion : CIFilter {

    CIImage inputImage;
    CIVector inputCenter;
    NSNumber inputRadius;
}
 + (id) customAttributes;

 - (id) outputImage;
 - (id) inputImage;
 - (void) setInputImage:(id)a;
 - (void) setInputRadius:(id)a;
 - (id) inputRadius;
 - (id) _kernel;
 - (id) inputCenter;
 - (void) setInputCenter:(id)a;


@end
