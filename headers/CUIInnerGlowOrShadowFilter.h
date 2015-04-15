
@interface CUIInnerGlowOrShadowFilter : CIFilter {

    @"CIImage" inputImage;
    @"CIVector" inputOffset;
    @"NSNumber" inputRange;
    @"NSNumber" inputRadius;
    @"CIColor" inputColor;
}
 + (id) customAttributes;

 - (void) setDefaults;
 - (id) outputImage;
 - (id) inputImage;
 - (void) setInputImage:(id)a;
 - (void) setInputRadius:(id)a;
 - (id) inputRadius;
 - (id) _kernel;
 - (void) setInputColor:(id)a;
 - (id) inputColor;
 - (void) setInputOffset:(id)a;
 - (void) setInputRange:(id)a;
 - (id) inputOffset;
 - (id) inputRange;


@end
