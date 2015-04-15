
@interface CIAffineTile : CIFilter {

    @"CIImage" inputImage;
    @"NSValue" inputTransform;
}
 + (id) customAttributes;

 - (void) setDefaults;
 - (id) outputImage;
 - (id) inputImage;
 - (void) setInputImage:(id)a;
 - (void) setInputTransform:(id)a;
 - (id) inputTransform;


@end
