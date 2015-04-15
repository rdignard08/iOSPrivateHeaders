
@interface CILinearGradient : CIFilter {

    @"CIVector" inputPoint0;
    @"CIVector" inputPoint1;
    @"CIColor" inputColor0;
    @"CIColor" inputColor1;
}
 + (id) customAttributes;

 - (void) setDefaults;
 - (id) outputImage;
 - (id) _kernel;
 - (void) setInputColor0:(id)a;
 - (void) setInputColor1:(id)a;
 - (id) inputColor0;
 - (id) inputColor1;
 - (void) setInputPoint0:(id)a;
 - (void) setInputPoint1:(id)a;
 - (id) inputPoint0;
 - (id) inputPoint1;


@end
