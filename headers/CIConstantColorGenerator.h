
@interface CIConstantColorGenerator : CIFilter {

    CIColor inputColor;
}
 + (id) customAttributes;

 - (void) setDefaults;
 - (id) outputImage;
 - (void) setInputColor:(id)a;
 - (id) inputColor;


@end
