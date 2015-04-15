
@interface CIGlassDistortion : CIFilter {

    @"CIImage" inputImage;
    @"CIImage" inputTexture;
    @"CIVector" inputCenter;
    @"NSNumber" inputScale;
}
 + (id) customAttributes;

 - (void) setInputScale:(id)a;
 - (id) customAttributes;
 - (void) setDefaults;
 - (id) outputImage;
 - (id) inputImage;
 - (void) setInputImage:(id)a;
 - (id) inputScale;
 - ({CGRect={CGPoint=dd}{CGSize=dd}}) regionOf:(int)adestRect:({CGRect={CGPoint=dd}{CGSize=dd}})buserInfo:(id)c;
 - (id) _kernel;
 - (id) inputCenter;
 - (void) setInputCenter:(id)a;
 - (id) inputTexture;
 - (void) setInputTexture:(id)a;


@end
