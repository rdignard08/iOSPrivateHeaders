
@interface CIPinchDistortion : CIFilter {

    @"CIImage" inputImage;
    @"CIVector" inputCenter;
    @"NSNumber" inputRadius;
    @"NSNumber" inputScale;
}
 + (id) customAttributes;

 - (void) setInputScale:(id)a;
 - (void) setDefaults;
 - (id) outputImage;
 - (id) inputImage;
 - (void) setInputImage:(id)a;
 - (id) inputScale;
 - (void) setInputRadius:(id)a;
 - (id) inputRadius;
 - (id) inputCenter;
 - (void) setInputCenter:(id)a;
 - ({CGRect={CGPoint=dd}{CGSize=dd}}) computeDOD:(float)ascale:(float)b;
 - (id) _pinchDistortionScaleLT1;
 - (id) _pinchDistortionScaleGE1;


@end
