
@interface CIStretch : CIFilter {

    @"CIImage" inputImage;
    @"CIVector" inputPoint;
    @"CIVector" inputSize;
}
 + (id) customAttributes;

 - (void) setDefaults;
 - (id) outputImage;
 - (id) inputImage;
 - (void) setInputImage:(id)a;
 - (id) _kernel;
 - (void) setInputPoint:(id)a;
 - (id) inputPoint;
 - (void) setInputSize:(id)a;
 - (id) inputSize;
 - ({CGRect={CGPoint=dd}{CGSize=dd}}) computeDOD:({vec4=ffff})a;


@end
