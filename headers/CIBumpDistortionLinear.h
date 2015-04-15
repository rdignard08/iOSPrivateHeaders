
@interface CIBumpDistortionLinear : CIFilter {

    CIImage* inputImage;
    CIVector* inputCenter;
    NSNumber* inputRadius;
    NSNumber* inputAngle;
    NSNumber* inputScale;
}
 + (id) customAttributes;

 - (void) setInputScale:(id)a ;
 - (id) outputImage;
 - (id) inputImage;
 - (void) setInputImage:(id)a ;
 - (id) inputScale;
 - (void) setInputRadius:(id)a ;
 - (id) inputRadius;
 - (id) _kernel;
 - (id) inputAngle;
 - (void) setInputAngle:(id)a ;
 - (id) inputCenter;
 - (void) setInputCenter:(id)a ;


@end
