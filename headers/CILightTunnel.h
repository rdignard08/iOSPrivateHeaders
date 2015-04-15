
@interface CILightTunnel : CIFilter {

    CIImage* inputImage;
    CIVector* inputCenter;
    NSNumber* inputRotation;
    NSNumber* inputRadius;
}
 + (id) customAttributes;

 - (void) setDefaults;
 - (id) outputImage;
 - (id) inputImage;
 - (void) setInputImage:(id)a ;
 - (void) setInputRadius:(id)a ;
 - (id) inputRadius;
 - (id) _kernel;
 - (id) inputCenter;
 - (void) setInputCenter:(id)a ;
 - (void) setInputRotation:(id)a ;
 - (id) inputRotation;


@end
