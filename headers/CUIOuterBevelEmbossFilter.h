
@interface CUIOuterBevelEmbossFilter : CIFilter {

    CIImage* inputImage;
    NSNumber* inputRadius;
    NSNumber* inputSize;
    NSNumber* inputSoften;
    NSNumber* inputAngle;
    CIColor* inputHighlightColor;
    CIColor* inputShadowColor;
}
 + (id) customAttributes;

 - (void) setDefaults;
 - (id) outputImage;
 - (id) inputImage;
 - (void) setInputImage:(id)a ;
 - (void) setInputRadius:(id)a ;
 - (id) inputRadius;
 - (id) _kernel;
 - (id) inputAngle;
 - (void) setInputAngle:(id)a ;
 - (id) _kernelC;
 - (void) setInputSize:(id)a ;
 - (id) inputSize;
 - (void) setInputSoften:(id)a ;
 - (void) setInputHighlightColor:(id)a ;
 - (void) setInputShadowColor:(id)a ;
 - (id) inputSoften;
 - (id) inputHighlightColor;
 - (id) inputShadowColor;


@end
