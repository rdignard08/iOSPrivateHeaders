
@protocol _CIFilterProperties;
@interface CIAffineTransform : CIFilter <_CIFilterProperties> {

    @"CIImage" inputImage;
    @"NSValue" inputTransform;
}
 + (id) customAttributes;

 - (void) setDefaults;
 - (id) outputImage;
 - (id) inputImage;
 - (void) setInputImage:(id)a;
 - (id) _outputProperties;
 - (id) _initFromProperties:(id)a;
 - (void) setInputTransform:(id)a;
 - (id) inputTransform;


@end
