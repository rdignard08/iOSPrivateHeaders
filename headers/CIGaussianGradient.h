
@interface CIGaussianGradient : CIFilter {

    CIVector inputCenter;
    CIColor inputColor0;
    CIColor inputColor1;
    NSNumber inputRadius;
}
 + (id) customAttributes;

 - (void) setDefaults;
 - (id) outputImage;
 - (void) setInputRadius:(id)a;
 - (id) inputRadius;
 - (id) _kernel;
 - (id) inputCenter;
 - (void) setInputCenter:(id)a;
 - (void) setInputColor0:(id)a;
 - (void) setInputColor1:(id)a;
 - (id) inputColor0;
 - (id) inputColor1;


@end
