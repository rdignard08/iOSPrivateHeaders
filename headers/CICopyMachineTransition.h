
@interface CICopyMachineTransition : CIFilter {

    CIImage inputImage;
    CIImage inputTargetImage;
    CIVector inputExtent;
    CIColor inputColor;
    NSNumber inputTime;
    NSNumber inputAngle;
    NSNumber inputWidth;
    NSNumber inputOpacity;
}
 + (id) customAttributes;

 - (void) setInputExtent:(id)a;
 - (void) setDefaults;
 - (id) outputImage;
 - (id) inputImage;
 - (void) setInputImage:(id)a;
 - (id) inputExtent;
 - (id) _kernel;
 - (id) inputAngle;
 - (void) setInputAngle:(id)a;
 - (void) setInputColor:(id)a;
 - (id) inputColor;
 - (void) setInputWidth:(id)a;
 - (id) inputWidth;
 - (void) setInputTime:(id)a;
 - (id) inputTargetImage;
 - (void) setInputTargetImage:(id)a;
 - (void) setInputOpacity:(id)a;
 - (id) inputOpacity;
 - (id) inputTime;


@end
