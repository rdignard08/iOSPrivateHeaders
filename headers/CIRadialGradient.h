
@interface CIRadialGradient : CIFilter {

    CIVector inputCenter;
    NSNumber inputRadius0;
    NSNumber inputRadius1;
    CIColor inputColor0;
    CIColor inputColor1;
}
 + (id) customAttributes;

 - (void) setDefaults;
 - (id) outputImage;
 - (id) _kernel;
 - (id) inputCenter;
 - (void) setInputCenter:(id)a;
 - (void) setInputColor0:(id)a;
 - (void) setInputColor1:(id)a;
 - (id) inputColor0;
 - (id) inputColor1;
 - (void) setInputRadius0:(id)a;
 - (void) setInputRadius1:(id)a;
 - (id) inputRadius0;
 - (id) inputRadius1;


@end
