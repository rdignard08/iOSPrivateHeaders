
@protocol _CIFilterProperties;
@interface CICrop : CIFilter <_CIFilterProperties> {

    CIImage* inputImage;
    CIVector* inputRectangle;
}
 + (id) customAttributes;

 - (void) setDefaults;
 - (id) outputImage;
 - (id) inputImage;
 - (void) setInputImage:(id)a ;
 - (id) _outputProperties;
 - (id) _initFromProperties:(id)a ;
 - (void) setInputRectangle:(id)a ;
 - (id) inputRectangle;


@end
