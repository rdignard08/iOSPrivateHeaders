
@interface CIHueAdjust : CIFilter {

    CIImage inputImage;
    NSNumber inputAngle;
}
 + (id) customAttributes;

 - (void) setDefaults;
 - (id) outputImage;
 - (id) inputImage;
 - (void) setInputImage:(id)a;
 - (id) inputAngle;
 - (void) setInputAngle:(id)a;


@end
